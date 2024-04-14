
module ALU(in_1, in_2, control, bcond, result);
  input [31:0] in_1, in_2;
  input [3:0] control;
  output reg bcond;
  output reg [31:0] result;

  always @(*) begin
    case(control)
      0:
        result = in_1 + in_2;    
      1: 
        result = in_1 - in_2;
      2:
        result = in_1 & in_2;
      3:
        result = in_1 | in_2;
      4:
        result = in_1 ^ in_2;
      5:
        result = in_1 << in_2;
      6:
        result = in_1 >> in_2;
      default:
        result = 0;
    endcase
  end

  always @(*) begin
    case(control)
      7: begin
        if(in_1 == in_2) 
          bcond = 1;
        else 
          bcond = 0;
      end
      8: begin
        if(in_1 != in_2)
          bcond = 1;
         else
          bcond = 0;        
      end
      9: begin
        if(in_1 < in_2) 
          bcond = 1;
        else 
          bcond = 0;
      end
      10: begin
        if(in_1 >= in_2) 
          bcond = 1;
        else 
          bcond = 0;
      end
      default:
        bcond = 0;
    endcase
  end

endmodule

