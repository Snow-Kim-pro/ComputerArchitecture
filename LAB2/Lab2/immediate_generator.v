
module immediate_generator(part_of_inst, imm_gen_out);

input  [31:0]part_of_inst;  // input
output [31:0]imm_gen_out;   // output

reg [6:0]funct7 = part_of_inst[31:25];
reg [4:0]   rs2 = part_of_inst[24:20];
reg [4:0]   rs1 = part_of_inst[19:15];
reg [2:0]funct3 = part_of_inst[14:12];
reg [4:0]    rd = part_of_inst[11: 7];
reg [6:0]opcode = part_of_inst[ 6: 0];

always @(*) begin 
    case(opcode)
        `ARITHMETIC_IMM : begin // I-type
            imm_gen_out = {20{funct7[6]}, funct7[6:0], rs2[4:0]};
        end
        `LOAD : begin // I-type

        end
        `JALR : begin // I-type

        end
        `STORE : begin // S-type

        end
        `BRANCH : begin // B-type

        end
        `JAL : begin // J-type

        end
        default :
            imm_gen_out = 0;
    
    endcase
end

endmodule
