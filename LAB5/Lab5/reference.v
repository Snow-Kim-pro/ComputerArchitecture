`include "CLOG2.v" // support `x` from 0 to 1024

module Cache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = 16/* Your choice */
               parameter NUM_WAYS = 1/* Your choice */) (
    input reset,
    input clk,

    input is_input_valid, //stall(이전 인풋에 대해서 아웃풋이 처리 되지않은상태) 상태에선 input이 valid 하지 않고, 평소상태에선 valid함.
    input [31:0] addr, //입력되는 주소
    input mem_rw, //Read(0)인지 Write(1)인지
    input [31:0] din, //store를 위해, 캐시와 메모리에 저장할 값

    output reg is_ready, //store/load output valid, IF-ID부터 EX-MEM까지 사이, stall을 걸까말까? 이전 스톨과의 차이는 IF-ID, ID-EX의 값은 그대로 간다.
    output reg is_output_valid, //dout이 mem-wb_dout에 쓰여도될까?
    output reg [31:0] dout, //load했을때, 캐쉬에서 읽어온값
    output reg is_hit //히트되었는가?
  );
  
  // Wire declarations
  integer i, j;
  integer target;
  wire mem_is_input_valid;
  wire mem_is_output_valid;
  wire [BLOCK_SIZE * 8 - 1:0] mem_dout;
  wire [31:0] mem_din;

  localparam TAG_BITS = 32 - CLOG2(NUM_SETS) - CLOG2(LINE_SIZE);
  localparam SET_BITS = CLOG2(NUM_SETS);
  localparam OFFSET_BITS = CLOG2(LINE_SIZE)

  wire [TAG_BITS-1 : 0] input_tag = addr[];
  wire [SET_BITS-1 : 0] input_set = addr[CLOG2(NUM_SETS) + CLOG2(LINE_SIZE) - 2 : CLOG2(LINE_SIZE) - 1];
  wire [OFFSET_BITS - 3 : 0] input_bo = addr[CLOG2(LINE_SIZE) - 1 : 2] ;
  wire [OFFSET_BITS - 2 : 0] zezero = 0;
  wire mem_ready; //스토어 
  

  // Reg declarations
  reg valid [0 : NUM_SETS *NUM_WAYS -1];
  reg [31 - CLOG2(NUM_SETS) - CLOG2(LINE_SIZE) : 0] tag [0 : NUM_SETS *NUM_WAYS -1];
  reg [LINE_SIZE * 8 -1 :0] cachedata [0 : NUM_SETS *NUM_WAYS -1];
  reg [CLOG2(NUM_WAYS) :0] use_time [0 : NUM_SETS *NUM_WAYS -1]; //이 값이 클수록 최근에 쓴 블럭(라인)이다.
  reg [CLOG2(NUM_WAYS) :0] time_temp;
  assign mem_din = din;
  
  always @(*) begin
    for(i = 0; i< NUM_WAYS; i++) begin
        if(valid == 1 && tag[input_set][i] == input_tag) begin
          is_hit = 1;
          target = i;
          if(mem_rw == 0) begin
            dout = cachedata[input_set][i];
            is_output_valid = 1;
            mem_is_input_valid = 0;
          end else if (mem_rw == 1) begin
            dout = 0;
            is_output_valid = 0;
            mem_is_input_valid = 1;
          end
          i = NUM_WAYS;
        end else begin
            is_hit = 0;
            target = 0;
            dout = 0;
            is_output_valid = 0;
            mem_is_input_valid = 1;
        end
    end
  end



  always @(*) begin
    if (is_hit)
      is_ready = 1;
    else 
      is_ready = 0;
  end



  always @(posedge clk) begin //캐시에 데이터저장
    if(mem_rw == 1) begin
      for(i = 0; i< NUM_WAYS; i++) begin
        if(valid == 1 && tag[input_set][i] == input_tag) begin
          cachedata[input_set][i] <= din;
        end
      end
    end
  end

  //캐시 초기화 및 miss시 캐시값 쓰기
  always @(posedge clk) begin
    if (reset) begin
        for (i = 0; i < NUM_SETS; i++) begin
          for (j = 0; j < NUM_WAYS; j ++) begin
            valid[i][j] <= 0;
            tag[i][j] <= 0;
            cachedata[i][j] <= 0;
            use_time[i][j] <= 0;
          end
        end
    end else begin
      if (is_hit == 1) begin
        for (i = 0; i< NUM_WAYS; i++) begin
            if(use_time[input_set][target] < use_time[input_set][i]) //셋의 블럭들을 살펴보며 업데이트된 블럭보다 최근에 업데이트한 블럭을 찾는다.
              use_time[input_set][i] <= use_time[input_set][i] - 1; //1씩 줄여준다.
          end
          use_time[input_set][target] <= NUM_WAYS - 1;
      end else begin
        if(mem_rw == 0 && mem_is_output_valid == 1) begin //메모리로 받아온 데이터를 통해 캐시를 업데이트 한다.
          for (i = 0; i< NUM_WAYS; i++) begin //셋의 모든 라인을 살펴본다.
            if(valid[input_set][i] == 0 || use_time[input_set][i] == 0) begin
              //셋에서 비어있는 블럭을 업데이트한다.
              valid[input_set][i] <= 1; 
              tag[input_set][i] <= input_tag;
              cachedata[input_set][i] <= mem_dout;
              target = i; // 이 셋에 대한 정보를 저장해둔다.
              i = NUM_WAYS; //반복을 종료하기 위한 i수정
            end
          end
          for (i = 0; i< NUM_WAYS; i++) begin
            if(use_time[input_set][target] < use_time[input_set][i]) //셋의 블럭들을 살펴보며 업데이트된 블럭보다 최근에 업데이트한 블럭을 찾는다.
              use_time[input_set][i] <= use_time[input_set][i] - 1; //1씩 줄여준다.
          end
          use_time[input_set][target] <= NUM_WAYS - 1;
        end
      end
    end
  end
  // You might need registers to keep the status.

  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(mem_is_input_valid),
    .addr({zezero, addr[29:0]}),        // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(~mem_rw),
    .mem_write(mem_rw),
    .din(mem_din),

    // is output from the data memory valid?
    .is_output_valid(mem_is_ouput_valid),
    .dout(mem_dout),
    // is data memory ready to accept request?
    .mem_ready(mem_ready)
  );
endmodule