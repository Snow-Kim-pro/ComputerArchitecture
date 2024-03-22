`include "opcodes.v"

module control_unit (part_of_inst, regist_17, is_jal, is_jalr, branch, mem_read, mem_to_reg, mem_write, alu_src, write_enable, pc_to_reg, is_ecall);
    input [6:0] part_of_inst;
    input [31:0] regist_17;
    output reg is_jal;          // JAL
    output reg is_jalr;         // JALR
    output reg branch;          // Branch
    output reg mem_read;        // MemRead
    output reg mem_to_reg;      // MemtoReg
    output reg mem_write;       // MemWrite
    output reg alu_src;         // ALUSrc
    output reg write_enable;    // RegWrite
    output reg pc_to_reg;       // PCtoReg
    output reg is_ecall;        // ECALL

    always @(*) begin
        is_jal = 0;
        is_jalr = 0;
        branch = 0;
        mem_read = 0;
        mem_to_reg = 0;
        mem_write = 0;
        alu_src = 0;
        write_enable = 0;
        pc_to_reg = 0;
        is_ecall = 0;

        case(part_of_inst)          
            `ARITHMETIC : begin //R-type
                write_enable = 1;
            end
            `ARITHMETIC_IMM : begin //I-type
                alu_src = 1;
                write_enable = 1;
            end
            `LOAD : begin //LW
                mem_read = 1;
                mem_to_reg = 1;
                alu_src = 1;
                write_enable = 1;
            end
            `STORE : begin //SW
                mem_write = 1;
                alu_src = 1;
            end
            `BRANCH : begin //BRANCH
                branch = 1;
            end
            `JAL : begin //JAL
                is_jal = 1;
                write_enable = 1;
                pc_to_reg = 1;
            end
            `JALR : begin //JARL
                is_jalr = 1;
                write_enable = 1;
                alu_src = 1;
                pc_to_reg = 1;
            end
            `ECALL : begin //ECALL
                if(regist_17 == 10) 
                    is_ecall = 1;
                else 
                    is_ecall = 0;
            end
            default: 
        endcase
    end

endmodule
