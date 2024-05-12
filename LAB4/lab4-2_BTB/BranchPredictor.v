
module BranchPredictor #(parameter ENTRIES = 32)(
    input wire clk,
    input wire reset,
    input wire [31:0] pc_addr,           // 분기 명령 주소
    input pcwrite, //스톨이 발생했을 경우 predictor는 동작하지 않는다.
    input is_incorrect, //예측 실패했을 경우엔 predictor의 예측값은 필요가 없다.

    input wire valid,               // 분기 명령 신호 
    input wire taken,               // 분기 실행 여부
    input wire [31:0] ex_addr,        // 분기 주소 (EX stage)
    input wire [31:0] target_addr,  // 목표 주소 (EX stage)
    
    output reg hit,                    // BTB 히트 여부
    output reg prediction,              // Taken / Not taken
    output reg [31:0] predicted_target // 예측된 목표 주소
);

    // BTB, Tag, PHT 정의
    reg [31:0] btb_table [31:0];  // target addr 저장
    reg [24:0] tag_table [31:0];  // 상위 비트를 사용한 tag 저장 (32-5-2 = 25 bit)
    reg  [1:0]       pht [31:0];  // 패턴 히스토리 테이블 (2-bit counter : "Saturation")
    reg [4:0] BHSR;
    // index, tag 연결

    wire [ 4:0] index = pc_addr [ 6:2]; // 5-bit idx    
    wire [24:0]   tag = pc_addr [31:7]; // tag 추출
    wire [ 4:0] exidx = ex_addr [ 6:2]; // 5-bit idx
    wire [24:0] extag = ex_addr [31:7]; // tag 추출

    integer i;
    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < ENTRIES; i++) begin
                btb_table[i] <= 0;  
                tag_table[i] <= 0;                                              
                pht[i] <= 2'b01;  // 초기값: weakly not taken
                BHSR <= 5'b00000;
            end
        end else begin
            // EX Stage : PHT update && (taken 유무에 따라) BTB, Tag table update
            if(pcwrite == 1 && is_incorrect == 0)
                BHSR <= {prediction, BHSR[4:1]};

            if (valid) begin
                if (taken) begin
                    tag_table[exidx] <= extag;
                    btb_table[exidx] <= target_addr;
                    pht[exidx] <= (pht[exidx] < 3) ? pht[exidx] + 1 : pht[exidx];  // update PHT
                end else if (!taken) 
                    pht[exidx] <= (pht[exidx] > 0) ? pht[exidx] - 1 : pht[exidx];  // update PHT
            end
        end
    end

    always @(*) begin
        // IF Stage : Control Flow에 대해 table 탐색
        if (tag_table[index] == tag && pht[index ^ BHSR] > 1) begin
            hit = 1;
            prediction = 1;
            predicted_target = btb_table[index ^ BHSR];
        end else begin
            hit = 0;
            prediction = 0;
            predicted_target = 0;
        end
    end

endmodule
