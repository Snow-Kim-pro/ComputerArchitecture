module ALU #(parameter data_width = 16) (
	input [data_width - 1 : 0] A, 
	input [data_width - 1 : 0] B, 
	input [3 : 0] FuncCode,
    output reg [data_width - 1: 0] C,
    output reg OverflowFlag);

// Do not use delay in your implementation.
// You can declare any variables as needed.

/* 	YOUR VARIABLE DECLARATION... */
//숙숙숙
wire [data_width - 1: 0] add;
wire [data_width - 1: 0] sub;
wire [data_width - 1: 0] id;
wire [data_width - 1: 0] not;
wire [data_width - 1: 0] and;
wire [data_width - 1: 0] or;
wire [data_width - 1: 0] nand;
wire [data_width - 1: 0] nor; //여기있지롱
wire [data_width - 1: 0] xor;
wire [data_width - 1: 0] xnor;
wire [data_width - 1: 0] lls;
wire [data_width - 1: 0] lrs;
wire [data_width - 1: 0] als;
wire [data_width - 1: 0] ars;
wire [data_width - 1: 0] tcp;
wire [data_width - 1: 0] zero;
wire overflowflag;
wire please_delete_me_overflowff;


// 안녕하세요. 이건 김순호가 수정한 코드입니다. 
// 한글로안녕하세요

assign add 	= A + B;
assign sub 	= A - B;
assign id  	= A;
assign not 	= ~A;
assign and 	= A & B;
assign or 	= A | B;
assign nand = ~(A & B);
assign nor 	= ~(A | B);
assign xor 	= A ^ B;
assign xnor = A ~^ B;
assign lls 	= A << 1;
assign lrs 	= A >> 1;
assign als 	= A <<< 1;
assign ars 	= A >>> 1;
assign tcp 	= ~A + 1;
assign zero = 0;



//텅빈거리홀로남아

initial begin
	C = 0;
	OverflowFlag = 0;
end   	

// TODO: You should implement the functionality of ALU!
// (HINT: Use 'always @(...) begin ... end')
/*
	YOUR ALU FUNCTIONALITY IMPLEMENTATION...
*/
//하이
always @(*) begin
	case(FuncCode)
		FUNC_ADD : C = add;
		FUNC_SUB : C = ;
		FUNC_ID : 
		FUNC_NOT :
		FUNC_AND :
		FUNC_OR :
		FUNC_NAND :
		FUNC_NOR :
		FUNC_XOR :
		FUNC_XNOR :
		FUNC_LLS :
		FUNC_LRS :
		FUNC_ALS :
		FUNC_ARS :
		FUNC_TCP :
		FUNC_ZERO :
end


endmodule
//흐흐 숨겨놨지롱.
