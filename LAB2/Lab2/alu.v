module alu(alu_op, alu_in_1, alu_in_2, alu_result, alu_bcond);
    input [6:0] alu_op;
    input [31:0] alu_in_1;
    input [31:0] alu_in_2;
    output [31:0] alu_result;
    output alu_bcond;

endmodule
