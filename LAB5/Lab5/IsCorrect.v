
module IsCorrect (taken, prediction, cu_pc, pre_pc, pc_mux_flag, predict_reset);
    input taken;
    input prediction;
    input [31:0] cu_pc;  //분기해야할 pc값
    input [31:0] pre_pc; //predictor가 예측한 pc값
    output reg [1:0] pc_mux_flag;
    output reg predict_reset;

    always @(*) begin
        case({prediction, taken})
            2'b00: begin //NT 예측, 실제 NT => Correct  
                pc_mux_flag = 2'b00;
                predict_reset = 0;
            end
            2'b01: begin //NT 예측, 실제 T => Incorrect  
                pc_mux_flag = 2'b00;
                predict_reset = 1; 
            end
            2'b10: begin //T 예측, 실제 NT => Incorrect  
                pc_mux_flag = 2'b01;
                predict_reset = 1; 
            end
            default: begin //3, T 예측, 실제 T => Correct  
                if(cu_pc == pre_pc) begin
                    pc_mux_flag = 2'b10;
                    predict_reset = 0;
                end
                else begin //Taken이었지만 분기된 주소가 틀린 경우
                    pc_mux_flag = 2'b00; 
                    predict_reset = 1;
                end
            end
        endcase
    end
endmodule
