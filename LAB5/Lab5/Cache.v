// Lab5_62668_20200045_20200703
`include "CLOG2.v" // support `x` from 0 to 1024

module Cache #(parameter LINE_SIZE = 16, parameter NUM_SETS = 4, parameter NUM_WAYS = 4) (
    input reset,
    input clk,
    input is_input_valid,
    input [31:0] addr,
    input mem_rw,
    input [31:0] din,

    output is_ready,  
    output is_output_valid,
    output [31:0] dout,
    output is_hit,
    
    output reg [31:0] hit_ratio); // 히트율 출력을 위한 레지스터 정의

  assign is_ready = (state == BASE);
  assign is_output_valid = is_hit;
  assign dout = is_hit ? data[set_index][hit_index][block_offset*32 +: 32] : 0;
  assign is_hit = (check_hit_index != NUM_WAYS);

/* ---------------------------------------- Counter ---------------------------------------- */
  reg [31:0] total_accesses;  // 메모리 접근 횟수 카운터
  reg [31:0] miss_count;      // 미스 발생 횟수 카운터

  always @(posedge clk) begin
      if (reset) begin
          total_accesses <= 0;
          miss_count <= 0;
          hit_ratio  <= 0;
      end else begin
        if(state == BASE) begin
          if (is_input_valid && is_hit)
            total_accesses <= total_accesses + 1;
        end else if (state == MEM_READ) begin
          if(is_mem_output_valid) 
            miss_count <= miss_count + 1;
        end

        // 히트율 계산
        if (total_accesses > 0) begin // 0으로 나누는 것을 방지
            hit_ratio <= (total_accesses - miss_count) * 100 / total_accesses;
        end
      end
  end

/* ------------------------------------ Cache Component ------------------------------------ */
  // Constants declarations
  localparam OFFSET_BITS = `CLOG2(LINE_SIZE); // Block offset is lower 4 bits
  localparam    SET_BITS = `CLOG2(NUM_SETS);
  localparam    WAY_BITS = `CLOG2(NUM_WAYS); 
  localparam    TAG_BITS = 32 - OFFSET_BITS - SET_BITS;

  // Wire declarations
  wire    [TAG_BITS-1:0]    input_tag = addr[31 : 32 - TAG_BITS];
  wire    [SET_BITS-1:0]    set_index = addr[SET_BITS + OFFSET_BITS - 1 : OFFSET_BITS];
  wire [OFFSET_BITS-3:0] block_offset = addr[OFFSET_BITS - 1 : 2];

  // Cache line structure
  reg      [WAY_BITS:0]   lru [0:NUM_SETS-1][0:NUM_WAYS-1]; // [1:0] : 2bit
  reg             [0:0] dirty [0:NUM_SETS-1][0:NUM_WAYS-1];
  reg             [0:0] valid [0:NUM_SETS-1][0:NUM_WAYS-1];
  reg    [TAG_BITS-1:0]   tag [0:NUM_SETS-1][0:NUM_WAYS-1];
  reg [LINE_SIZE*8-1:0]  data [0:NUM_SETS-1][0:NUM_WAYS-1];
  
   
  // Initialize cache
  integer i, j;
  always @(posedge clk) begin
    if (reset) begin
      for (i = 0; i < NUM_SETS; i++) begin
        for (j = 0; j < NUM_WAYS; j++) begin
          valid[i][j] <= 0;
          dirty[i][j] <= 0;
          data[i][j] <= 0;
          tag[i][j] <= 0;
          lru[i][j] <= NUM_WAYS; // lru 초기값 : 2'b10
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
            if (dirty[set_index][change_index] == 1)
              state <= MEM_WRITE; // Evict way의 dirty bit = 1일 때
            else
              state <= MEM_READ;
          end
        end
        MEM_WRITE : begin
          if(is_mem_write_done)
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
          if (lru[set_index][m] < lru[set_index][hit_index])
            lru[set_index][m] <= lru[set_index][m] + 1;
        end
        lru[set_index][hit_index] <= 0;


        /* If "Store", cache data update logic */
        if(mem_rw) begin
        // "+:" : 상대적 비트 선택 연산자, block_offset*32에서 시작하여 32비트를 선택
          data[set_index][hit_index][block_offset*32 +: 32] <= din;
          dirty[set_index][hit_index] <= 1;
        end

      end
    end

    else if(state == MEM_READ) begin
      if(is_mem_output_valid) begin
        dirty[set_index][change_index] <= 0;
        valid[set_index][change_index] <= 1;
        tag[set_index][change_index]   <= input_tag;
        data[set_index][change_index]  <= mem_dout;
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
      if((valid[set_index][k] == 1) && (tag[set_index][k] == input_tag)) 
        check_hit_index = k[WAY_BITS:0];         
    end
  end   
  
  /* ---- Change(or Evict) way 찾기(by LRU) ---- */
  always @(*) begin 
    check_change_index = NUM_WAYS;
    all_valid = 1;
    // not valid한 way가 존재하는 경우 [Cold Miss]
    for(l = 0; l < NUM_WAYS; l = l + 1) begin
      if(valid[set_index][l] == 0) begin
        check_change_index = l[WAY_BITS:0];
        all_valid = 0;
        break;
      end
    end

    // 모든 way가 valid한 경우 -> Find Evict way by LRU policy [Conflict Miss]
    if(all_valid) begin
      for(l = 0; l < NUM_WAYS; l = l + 1) begin
        if(lru[set_index][l] == NUM_WAYS-1) begin
          check_change_index = l[WAY_BITS:0];
          break;
        end
      end
    end
  end 
  
/* --------------------------------- DataMemory Component ---------------------------------- */
  wire [LINE_SIZE*8-1:0] mem_din, mem_dout;
  wire is_mem_input_valid, is_mem_output_valid, is_data_mem_ready;
  wire mem_read, mem_write;
  wire is_mem_write_done;
  wire [31:0] write_addr;
  assign write_addr = mem_write ? {tag[set_index][change_index], set_index, 4'b0000} : addr; 

  assign is_mem_input_valid = (state != BASE) && is_data_mem_ready; 
  assign mem_din   = data[set_index][change_index];
  assign mem_write = (state == MEM_WRITE) && !is_mem_output_valid;
  assign mem_read  = (state == MEM_READ) && !is_mem_output_valid;

  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(is_mem_input_valid),
    .addr(write_addr >> `CLOG2(LINE_SIZE)), // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(mem_read),                    // MemRead  조건 : Miss 발생 시 항상
    .mem_write(mem_write),                  // Memwrite 조건 : Evict && Dirty bit = 1
    .din(mem_din),

    .is_output_valid(is_mem_output_valid),  // is output from the data memory valid? (Load)
    .is_write_done(is_mem_write_done),      // is output from the data memory valid? (Store)
    .dout(mem_dout),    
    .mem_ready(is_data_mem_ready)           // is data memory ready to accept request?
  );
endmodule
