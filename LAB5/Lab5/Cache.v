`include "CLOG2.v" // support `x` from 0 to 1024

module Cache #(parameter LINE_SIZE = 16, parameter NUM_SETS = 8, parameter NUM_WAYS = 2) (
    input reset,
    input clk,
    input is_input_valid,
    input [31:0] addr,
    input mem_rw,
    input [31:0] din,

    output is_ready,  
    output is_output_valid,
    output [31:0] dout,
    output is_hit);

  assign is_ready = (state == BASE);
  assign is_output_valid = is_hit;
  assign dout = is_hit ? cacheArray[set_index][hit_index].data[block_offset*32 +: 32] : 0;
  assign is_hit = (check_hit_index != NUM_WAYS);

/* ------------------------------------ Cache Component ------------------------------------ */
  // Constants declarations
  localparam OFFSET_BITS = `CLOG2(LINE_SIZE); // Block offset is lower 4 bits
  localparam    SET_BITS = `CLOG2(NUM_SETS);
  localparam    WAY_BITS = `CLOG2(NUM_WAYS); 
  localparam    TAG_BITS = 32 - OFFSET_BITS - SET_BITS;

  // Wire declarations
  wire    [TAG_BITS-1:0]          tag = addr[31 : 32 - TAG_BITS];
  wire    [SET_BITS-1:0]    set_index = addr[SET_BITS + OFFSET_BITS - 1 : OFFSET_BITS];
  wire [OFFSET_BITS-1:0] block_offset = addr[OFFSET_BITS - 1 : 0];

  // Cache line structure
  typedef struct packed {
    reg [WAY_BITS:0]lru; // [1:0] : 2bit
    reg dirty;
    reg valid;
    reg [TAG_BITS-1:0] tag;
    reg [LINE_SIZE*8-1:0] data; 
  } cache_line;

  // Cache array
  cache_line cacheArray[NUM_SETS][NUM_WAYS];
   
  // Initialize cache
  integer i, j;
  always @(posedge clk) begin
    if (reset) begin
      for (i = 0; i < NUM_SETS; i++) begin
        for (j = 0; j < NUM_WAYS; j++) begin
          cacheArray[i][j].valid <= 0;
          cacheArray[i][j].dirty <= 0;
          cacheArray[i][j].lru <= NUM_WAYS; // lru 초기값 : 2'b10
        end
      end
    end
  end

/* ---------------- State Machine (Sequential Logic) ---------------- */
  localparam BASE = 2'b00, MEM_WRITE = 2'b10, MEM_READ = 2'b11; 
  reg [1:0] state;  

  always @(posedge clk) begin
    if (reset) begin
      state <= BASE;
    end else begin
      case(state)
        BASE : begin // 입력이 들어왔을 때(MemRead or MemWrite)                    
          if (is_input_valid && !is_hit) begin // Miss인 경우 -> Memory 접근
            if (cacheArray[set_index][change_index].dirty == 1)
              state <= MEM_WRITE; // Evict way의 dirty bit = 1일 때
            else
              state <= MEM_READ;
          end
        end
        MEM_WRITE : begin
          if(is_mem_output_valid)
            state <= MEM_READ;
        end
        MEM_READ : begin
          if(is_mem_output_valid) 
            state <= BASE;
        end 
        default : begin
          state <= BASE;   
        end   
      endcase    
    end
  end

/* ------=------- LRU & Cache update (Sequential Logic) ------------- */
  integer m;
  always @(posedge clk) begin
    if(state == BASE) begin    
      // Hit이라면 1 Cycle 안에 해결(No stall) => Combinational Logic에서 알아서 처리
      if(is_input_valid && is_hit) begin

        /* lru update logic */
        for (m = 0; m < NUM_WAYS; m++) begin
          if (cacheArray[set_index][m].lru < cacheArray[set_index][hit_index].lru)
            cacheArray[set_index][m].lru <= cacheArray[set_index][m].lru + 1;
        end
        cacheArray[set_index][hit_index].lru <= 0;


        /* If "Store", cache data update logic */
        if(mem_rw) begin
        // "+:" : 상대적 비트 선택 연산자, block_offset*32에서 시작하여 32비트를 선택
          cacheArray[set_index][hit_index].data[block_offset*32 +: 32] <= din;
          cacheArray[set_index][hit_index].dirty <= 1;
        end

      end
    end

    else if(state == MEM_READ) begin
      if(is_mem_output_valid) begin
        cacheArray[set_index][change_index].dirty <= 0;
        cacheArray[set_index][change_index].valid <= 1;
        cacheArray[set_index][change_index].tag   <= tag;
        cacheArray[set_index][change_index].data  <= mem_dout;
      end
    end
  end

/* ------------ Find Hit, Evict way (Combinatinal Logic) ------------ */
  reg  [WAY_BITS:0] check_hit_index, check_change_index;
  wire [WAY_BITS-1:0] hit_index;
  wire [WAY_BITS-1:0] change_index;

  assign hit_index = (check_hit_index < NUM_WAYS) ? check_hit_index[WAY_BITS-1:0] : {WAY_BITS{1'b0}};
  assign change_index = (check_change_index < NUM_WAYS) ? check_change_index[WAY_BITS-1:0] : {WAY_BITS{1'b0}};

  reg all_valid;
  integer k, l;

  /* ------ Hit을 만족하는 Way를 찾는 Logic ------ */
  always @(*) begin 
    check_hit_index = NUM_WAYS; // Hit이 아닌 경우 : hit_index == NUM_WAYS    
    for(k = 0; k < NUM_WAYS; k = k + 1) begin  // 각 way의 valid, tag 비교 -> hit 여부 판단
      if((cacheArray[set_index][k].valid == 1) && (cacheArray[set_index][k].tag == tag)) 
        check_hit_index = k[WAY_BITS:0];         
    end
  end   
  
  /* ---- Change(or Evict) way 찾기(by LRU) ---- */
  always @(*) begin 
    check_change_index = NUM_WAYS;
    all_valid = 1;
    // not valid한 way가 존재하는 경우 [Cold Miss]
    for(l = 0; l < NUM_WAYS; l = l + 1) begin
      if(cacheArray[set_index][l].valid == 0) begin
        check_change_index = l[WAY_BITS:0];
        all_valid = 0;         
      end
    end

    // 모든 way가 valid한 경우 -> Find Evict way by LRU policy [Conflict Miss]
    if(all_valid) begin
      for(l = 0; l < NUM_WAYS; l = l + 1) begin
        if(cacheArray[set_index][l].lru == NUM_WAYS-1) 
          check_change_index = l[WAY_BITS:0];
      end
    end
  end 
  
/* --------------------------------- DataMemory Component ---------------------------------- */
  wire [LINE_SIZE*8-1:0] mem_din, mem_dout;
  wire is_mem_input_valid, is_mem_output_valid, is_data_mem_ready;
  wire mem_read, mem_write;

  assign is_mem_input_valid = (state != BASE) && is_data_mem_ready; 
  assign mem_din   = cacheArray[set_index][change_index].data;
  assign mem_write = (state == MEM_WRITE) && !is_mem_output_valid;
  assign mem_read  = (state == MEM_READ) && !is_mem_output_valid;

  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(is_mem_input_valid),
    .addr(addr >> `CLOG2(LINE_SIZE)), // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(mem_read),            // MemRead  조건 : Miss 발생 시 항상
    .mem_write(mem_write),          // Memwrite 조건 : Evict && Dirty bit = 1
    .din(mem_din),

    // is output from the data memory valid?
    .is_output_valid(is_mem_output_valid),
    .dout(mem_dout),
    // is data memory ready to accept request?
    .mem_ready(is_data_mem_ready)
  );
endmodule
