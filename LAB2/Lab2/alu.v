
module alu(alu_in_1, alu_in_2, alu_op, alu_result, alu_bcond);
  input [31:0] alu_in_1;
  input [31:0] alu_in_2;
  input [3:0] alu_op;
  output reg [31:0] alu_result;
  output reg alu_bcond;

  always @(*) begin
    case(alu_op)
      0:
        alu_result = alu_in_1 + alu_in_2;    
      1: 
        alu_result = alu_in_1 - alu_in_2;
      2:
        alu_result = alu_in_1 & alu_in_2;
      3:
        alu_result = alu_in_1 | alu_in_2;
      4:
        alu_result = alu_in_1 ^ alu_in_2;
      5:
        alu_result = alu_in_1 << alu_in_2;
      6:
        alu_result = alu_in_1 >> alu_in_2;
      default:
        alu_result = 0;
    endcase
  end

  always @(*) begin
    case(alu_op)
      7: begin
        if(alu_in_1 == alu_in_2) 
          alu_bcond = 1;
        else 
          alu_bcond = 0;
      end
      8: begin
        if(alu_in_1 != alu_in_2)
          alu_bcond = 1;
         else
          alu_bcond = 0;        
      end
      9: begin
        if(alu_in_1 < alu_in_2) 
          alu_bcond = 1;
        else 
          alu_bcond = 0;
      end
      10: begin
        if(alu_in_1 >= alu_in_2) 
          alu_bcond = 1;
        else 
          alu_bcond = 0;
      end
      default:
        alu_bcond = 0;
    endcase
  end

endmodule

