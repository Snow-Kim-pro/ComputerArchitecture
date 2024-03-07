`include "alu_func.v"

module alu #(parameter data_width = 16) (
	input [data_width - 1 : 0] A, 
	input [data_width - 1 : 0] B, 
	input [3 : 0] FuncCode,
       	output reg [data_width - 1: 0] C,
       	output reg OverflowFlag);
// Do not use delay in your implementation.

// You can declare any variables as needed.
/*
	YOUR VARIABLE DECLARATION...
*/

initial begin
	C = 0;
	OverflowFlag = 0;
end   	

// TODO: You should implement the functionality of ALU!
// (HINT: Use 'always @(...) begin ... end')
/*
	YOUR ALU FUNCTIONALITY IMPLEMENTATION...
*/
wire [data_width - 1 : 0] a0;
wire [data_width - 1 : 0] a1;
wire [data_width - 1 : 0] a2;
wire [data_width - 1 : 0] a3;
wire [data_width - 1 : 0] a4;
wire [data_width - 1 : 0] a5;
wire [data_width - 1 : 0] a6;
wire [data_width - 1 : 0] a7;
wire [data_width - 1 : 0] a8;
wire [data_width - 1 : 0] a9;
wire [data_width - 1 : 0] a10;
wire [data_width - 1 : 0] a11;
wire [data_width - 1 : 0] a12;
wire [data_width - 1 : 0] a13;
wire [data_width - 1 : 0] a14;
wire [data_width - 1 : 0] a15;
wire O0;
wire O1;
assign a0 = A + B;
assign O0 = (A[data_width - 1] & B[data_width - 1] & ~a0[data_width - 1]) | (~A[data_width - 1] & ~B[data_width - 1] & a0[data_width - 1]) ;
assign a1 = A - B;
assign O1 = (A[data_width - 1] & ~B[data_width - 1] & ~a1[data_width - 1]) | (~A[data_width - 1] & B[data_width - 1] & a1[data_width - 1]) ;
assign a2 = A;
assign a3 = ~A;
assign a4 = A & B;
assign a5 = A | B;
assign a6 = A ~& B;
assign a7 = A ~| B;
assign a8 = A ^ B;
assign a9 = A ~^ B;
assign a10 = A << 1;
assign a11 = A >> 1;
assign a12 = $signed(A) <<< 1;
assign a13 = $signed(A) >>> 1;
assign a14 = ~A + 1;
assign a15 = 0;
assign OverflowFlag = O0 | O1;
always @(*) begin
	case (FuncCode)
		0: C = a0;
		1: C = a1;
		2: C = a2;
		3: C = a3;
		4: C = a4;
		5: C = a5;
		6: C = a6;
		7: C = a7;
		8: C = a8;
		9: C = a9;
		10: C = a10;
		11: C = a11;
		12: C = a12;
		13: C = a13;
		14: C = a14;
		15: C = a15;
		default: C = 0;
endcase
end

endmodule

