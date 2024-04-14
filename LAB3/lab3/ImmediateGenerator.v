`include "opcodes.v"

module ImmediateGenerator(part_of_inst, imm_gen_out);

input [31:0]part_of_inst;    // input
output reg[31:0]imm_gen_out; // output

wire [2:0]funct3 = part_of_inst[14:12];
wire [6:0]opcode = part_of_inst[ 6: 0];

always @(*) begin 
    case(opcode)
        `ARITHMETIC_IMM : begin // I-type 
            case(funct3)
                3'b001, 3'b101: // SLLI, SRLI
                    imm_gen_out = {27'b0, part_of_inst[24:20]};
                default: // ADDI, XORI, ORI, ANDI : imm[11:0]                    
                    imm_gen_out = {{21{part_of_inst[31]}}, part_of_inst[30:20]};
            endcase
        end
        `JALR, `LOAD : // I-type
            imm_gen_out = {{21{part_of_inst[31]}}, part_of_inst[30:20]};
        `JAL : // J-type    
            imm_gen_out = {{9{1'b0}}, part_of_inst[31], part_of_inst[21:12], part_of_inst[22], part_of_inst[30:23], {3{1'b0}}};
        `STORE : // S-type
            imm_gen_out = {{21{part_of_inst[31]}}, part_of_inst[30:25], part_of_inst[11:7]};
        `BRANCH : // B-type 
            imm_gen_out = {{20{part_of_inst[31]}}, part_of_inst[7], part_of_inst[30:25], part_of_inst[11:8], 1'b0};
        default :
            // ARITHMETIC(R-type), ECALL, etc.
            imm_gen_out = 0;
    endcase
end

endmodule
