module control_unit (part_of_inst, is_jal, is_jalr, branch, mem_read, mem_to_reg, mem_write, alu_src, write_enable, pc_to_reg, is_ecall);
    input [6:0]part_of_inst;
    output reg is_jal;
    output reg is_jalr;
    output reg branch;
    output reg mem_read;
    output reg mem_to_reg;
    output reg mem_write;
    output reg alu_src;
    output reg write_enable;
    output reg pc_to_reg;
    output reg is_ecall;

    // 1. 1101111 JAL
    // 2. 1100111 JALR
    // 3. 1100011 BRANCH
    // 4. 0000011 LW
    // 5. 0100011 SW
    // 6. 0010011 I type
    // 7. 0110011 R type
    // 8. 1110011 ECALL

    always @(*) begin
        case(part_of_inst)
            7'b1101111: begin //JAL
                is_jal = 1;
                is_jalr = 0;
                branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 0;
                write_enable = 0;
                pc_to_reg = 0;
                is_ecall = 0;
            end
            7'b1100111: begin //JARL
                is_jal = 0;
                is_jalr = 1;
                branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 0;
                write_enable = 0;
                pc_to_reg = 0;
                is_ecall = 0;
            end
            7'b1100011: begin //BRANCH
                is_jal = 0;
                is_jalr = 0;
                branch = 1;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 0;
                write_enable = 0;
                pc_to_reg = 0;
                is_ecall = 0;
            end
            7'b0000011: begin //LW
                is_jal = 0;
                is_jalr = 0;
                branch = 0;
                mem_read = 1;
                mem_to_reg = 1;
                mem_write = 0;
                alu_src = 1;
                write_enable = 1;
                pc_to_reg = 0;
                is_ecall = 0;
            end
            7'b0100011: begin //SW
                is_jal = 0;
                is_jalr = 0;
                branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 1;
                alu_src = 1;
                write_enable = 0;
                pc_to_reg = 0;
                is_ecall = 0;
            end
            7'b0010011: begin //I-type
                is_jal = 0;
                is_jalr = 0;
                branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 1;
                write_enable = 1;
                pc_to_reg = 1;
                is_ecall = 0; 
            end
            7'b0110011: begin //R-type
                is_jal = 0;
                is_jalr = 0;
                branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 0;
                write_enable = 1;
                pc_to_reg = 1;
                is_ecall = 0;
            end
            7'b1110011: begin //ECALL
                is_jal = 0;
                is_jalr = 0;
                branch = 0;
                mem_read = 0;
                mem_to_reg = 0;
                mem_write = 0;
                alu_src = 0;
                write_enable = 0;
                pc_to_reg = 0;
                is_ecall = 1;
            end
            default: begin
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
            end
        endcase
    end

endmodule
