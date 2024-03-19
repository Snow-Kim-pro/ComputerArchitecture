module alu(alu_op, alu_in_1, alu_in_2, alu_result, alu_bcond);
    input [6:0] alu_op;
    input [31:0] alu_in_1;
    input [31:0] alu_in_2;
    output [31:0] alu_result;
    output alu_bcond;

// always @(*) begin
// 	case(FuncCode)
//         `FUNC_ADD: begin
//             C = A + B;

//             // 오버플로 처리 로직 추가
// 			if(A[data_width-1] && B[data_width-1] && ~C[data_width-1])
// 				OverflowFlag = 1; // Case1. A(양수) + B(양수) = C(음수)
// 			else if(~A[data_width-1] && ~B[data_width-1] && C[data_width-1])
// 				OverflowFlag = 1; // Case2. A(음수) + B(음수) = C(양수)
// 			else
// 				OverflowFlag = 0;
//         end
//         `FUNC_SUB: begin
//             C = A - B;
            
// 			// 오버플로 처리 로직 추가
// 			if(A[data_width-1] && ~B[data_width-1] && ~C[data_width-1])
// 				OverflowFlag = 1; // Case1. A(양수) - B(음수) = C(음수)
// 			else if(~A[data_width-1] && B[data_width-1] && C[data_width-1])
// 				OverflowFlag = 1; // Case2. A(음수) - B(양수) = C(양수)
// 			else
// 				OverflowFlag = 0;
//         end
//         `FUNC_ID: begin
//             C = A;
//             OverflowFlag = 0;
//         end
//         `FUNC_NOT: begin
//             C = ~A;
//             OverflowFlag = 0;
//         end
//         `FUNC_AND: begin
//             C = A & B;
//             OverflowFlag = 0;
//         end
//         `FUNC_OR: begin
//             C = A | B;
//             OverflowFlag = 0;
//         end
//         `FUNC_NAND: begin
//             C = ~(A & B);
//             OverflowFlag = 0;
//         end
//         `FUNC_NOR: begin
//             C = ~(A | B);
//             OverflowFlag = 0;
//         end
//         `FUNC_XOR: begin
//             C = A ^ B;
//             OverflowFlag = 0;
//         end
//         `FUNC_XNOR: begin
//             C = ~(A ^ B);
//             OverflowFlag = 0;
//         end
//         `FUNC_LLS: begin
//             C = A << 1;
//             OverflowFlag = 0;
//         end
//         `FUNC_LRS: begin
//             C = A >> 1;
//             OverflowFlag = 0;
//         end
//         `FUNC_ALS: begin
//             C = A <<< 1;
//             OverflowFlag = 0;
//         end
//         `FUNC_ARS: begin
//             C = $signed(A) >>> 1;
//             OverflowFlag = 0;
//         end
//         `FUNC_TCP: begin
//             C = ~A + 1;
//             OverflowFlag = 0;
//         end
//         `FUNC_ZERO: begin
//             C = 0;
//             OverflowFlag = 0;
//         end
//         default: begin
//             C = 0;
//             OverflowFlag = 0;
//         end
// 	endcase
// end

endmodule
