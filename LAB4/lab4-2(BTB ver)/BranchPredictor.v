
module BranchPredictor #(parameter ENTRIES = 32)(
    input wire clk,
    input wire reset,
    input wire [31:0] pc_addr,           // 분기 명령 주소

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
                pht[i] <= 2'b10;  // 초기값: weakly taken
            end
            hit <= 0;
            predicted_target <= 0;
            prediction <= 0;
        end else begin
            // IF Stage : Control Flow에 대해 table 탐색
            if (tag_table[index] == tag && pht[index] > 1) begin
                hit <= 1;
                prediction <= 1;
                predicted_target <= btb_table[index];
            end else begin
                hit <= 0;
                prediction <= 0;
                predicted_target <= 0;
            end

            // EX Stage : PHT update && (taken 유무에 따라) BTB, Tag table update
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

endmodule
