
module Is_correct (taken, prediction, pc_mux_flag, is_incorrect);
    input taken;
    input prediction;
    output reg [1:0] pc_mux_flag;
    output reg is_incorrect;

    always @(*) begin
        case({prediction, taken})
            2'b00: begin //NT 예측, 실제 NT => Correct  
                pc_mux_flag = 2'b00;
                is_incorrect = 0;
            end
            2'b01: begin //NT 예측, 실제 T => Incorrect  
                pc_mux_flag = 2'b00;
                is_incorrect = 1; 
            end
            2'b10: begin //T 예측, 실제 NT => Incorrect  
                pc_mux_flag = 2'b01;
                is_incorrect = 1; 
            end
            default: begin //3, T 예측, 실제 T => Correct  
                pc_mux_flag = 2'b10;
                is_incorrect = 0;
            end
        endcase
    end
endmodule
