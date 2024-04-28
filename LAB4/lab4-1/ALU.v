
module ALU(in_1, in_2, control, bcond, result);
  input [31:0] in_1, in_2;
  input [3:0] control;
  output reg bcond;
  output reg [31:0] result;

  always @(*) begin
    case(control)
      0: result = in_1 + in_2;    
      1: result = in_1 - in_2;
      2: result = in_1 & in_2;
      3: result = in_1 | in_2;
      4: result = in_1 ^ in_2;
      5: result = in_1 << in_2;
      6: result = in_1 >> in_2;
      default: result = 0;
    endcase
  end

  always @(*) begin
    case(control)
      7:  bcond = (in_1 == in_2) ? 1 : 0;
      8:  bcond = (in_1 != in_2) ? 1 : 0;
      9:  bcond = (in_1  < in_2) ? 1 : 0;
      10: bcond = (in_1 >= in_2) ? 1 : 0;
      default: bcond = 0;
    endcase
  end

endmodule

