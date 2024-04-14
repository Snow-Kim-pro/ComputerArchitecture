`include "opcodes.v"

module ControlUnit (reset, clk, part_of_inst, pcwritecond, pcwrite, iord, memread, memwrite, memtoreg, irwrite, pcsource, alusrcB, alusrcA, regwrite, is_ecall);
    input reset;
    input clk;
    input [6:0] part_of_inst;
    output reg pcwritecond; 
    output reg pcwrite;         
    output reg iord;          
    output reg memread;        
    output reg memwrite;      
    output reg memtoreg;       
    output reg irwrite;         
    output reg pcsource;    
    output reg [1:0] alusrcB;       
    output reg alusrcA;        
    output reg regwrite;        
    output reg is_ecall; // ECALL

    always @(*) begin
        // is_jal = 0; is_jalr = 0; branch = 0; mem_read = 0; mem_to_reg = 0; mem_write = 0;
        // alu_src = 0; write_enable = 0; pc_to_reg = 0; is_ecall = 0;

        // case(part_of_inst)          
        //     `ARITHMETIC : begin //R-type
        //         write_enable = 1;
        //     end
        //     `ARITHMETIC_IMM : begin //I-type
        //         alu_src = 1;
        //         write_enable = 1;
        //     end
        //     `LOAD : begin //LW
        //         mem_read = 1;
        //         mem_to_reg = 1;
        //         alu_src = 1;
        //         write_enable = 1;
        //     end
        //     `STORE : begin //SW
        //         mem_write = 1;
        //         alu_src = 1;
        //     end
        //     `BRANCH : begin //BRANCH
        //         branch = 1;
        //     end
        //     `JAL : begin //JAL
        //         is_jal = 1;
        //         write_enable = 1;
        //         pc_to_reg = 1;
        //     end
        //     `JALR : begin //JARL
        //         is_jalr = 1;
        //         write_enable = 1;
        //         alu_src = 1;
        //         pc_to_reg = 1;
        //     end
        //     `ECALL : begin //ECALL
        //         if(regist_17 == 10) 
        //             is_ecall = 1;
        //         else 
        //             is_ecall = 0;
        //     end
        //     default : begin 
        //         is_jal = 0; is_jalr = 0; branch = 0; mem_read = 0; mem_to_reg = 0; mem_write = 0;
        //         alu_src = 0; write_enable = 0; pc_to_reg = 0; is_ecall = 0;
        //     end

        // endcase
    end

endmodule
