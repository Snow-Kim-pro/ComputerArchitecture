/* 2024.03.05 Snow version */
`include "alu_func.v"

module alu #(parameter data_width = 16) (
	input [data_width - 1 : 0] A, 
	input [data_width - 1 : 0] B, 
	input [3 : 0] FuncCode,
       	output reg [data_width - 1: 0] C,
       	output reg OverflowFlag);
// Do not use delay in your implementation.

// You can declare any variables as needed.
/* 	YOUR VARIABLE DECLARATION... */

initial begin
	C = 0;
	OverflowFlag = 0;
end   	

// TODO: You should implement the functionality of ALU!
// (HINT: Use 'always @(...) begin ... end')
/* 	YOUR ALU FUNCTIONALITY IMPLEMENTATION... */

always @(*) begin
	case(FuncCode)
        `FUNC_ADD: begin
            C = A + B;

            // 오버플로 처리 로직 추가
			if(A[data_width-1] && B[data_width-1] && ~C[data_width-1])
				OverflowFlag = 1; // Case1. A(양수) + B(양수) = C(음수)
			else if(~A[data_width-1] && ~B[data_width-1] && C[data_width-1])
				OverflowFlag = 1; // Case2. A(음수) + B(음수) = C(양수)
			else
				OverflowFlag = 0;
        end
        `FUNC_SUB: begin
            C = A - B;
            
			// 오버플로 처리 로직 추가
			if(A[data_width-1] && B[data_width-1] && ~C[data_width-1])
				OverflowFlag = 1; // Case1. A(양수) + B(양수) = C(음수)
			else if(~A[data_width-1] && ~B[data_width-1] && C[data_width-1])
				OverflowFlag = 1; // Case2. A(음수) + B(음수) = C(양수)
			else
				OverflowFlag = 0;
        end
        `FUNC_ID: begin
            C = A;
        end
        `FUNC_NOT: begin
            C = ~A;
        end
        `FUNC_AND: begin
            C = A & B;
        end
        `FUNC_OR: begin
            C = A | B;
        end
        `FUNC_NAND: begin
            C = ~(A & B);
        end
        `FUNC_NOR: begin
            C = ~(A | B);
        end
        `FUNC_XOR: begin
            C = A ^ B;
        end
        `FUNC_XNOR: begin
            C = ~(A ^ B);
        end
        `FUNC_LLS: begin
            C = A << B;
        end
        `FUNC_LRS: begin
            C = A >> B;
        end
        `FUNC_ALS: begin
            C = A <<< B;
        end
        `FUNC_ARS: begin
            C = A >>> B;
        end
        `FUNC_TCP: begin
            C = ~A + 1;
        end
        `FUNC_ZERO: begin
            C = 0;
        end
        default: begin
            C = 0;
        end
	endcase
end

endmodule
