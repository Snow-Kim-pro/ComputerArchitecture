`include "opcodes.v"

module ControlUnit (
    input [6:0] opcode,
    output reg mem_read,        // MemRead
    output reg mem_to_reg,      // MemtoReg
    output reg mem_write,       // MemWrite
    output reg alu_src,         // ALUSrc
    output reg write_enable,    // RegWrite
    output reg [1:0] alu_op,    // ALUOp
    output reg is_ecall         // ECALL
);

    always @(*) begin

        write_enable = (opcode != `STORE && opcode != `BRANCH) ? 1'b1 : 1'b0;
        mem_read     = (opcode == `LOAD) ? 1'b1 : 1'b0;
        mem_to_reg   = (opcode == `LOAD) ? 1'b1 : 1'b0;
        mem_write    = (opcode == `STORE) ? 1'b1 : 1'b0;
        alu_src      = (opcode != `ARITHMETIC && opcode != `BRANCH) ? 1'b1 : 1'b0;
        is_ecall     = (opcode == `ECALL) ? 1'b1 : 1'b0;

        if(opcode == `LOAD || opcode == `STORE)
            alu_op = 2'b00;
        else if(opcode == `ARITHMETIC_IMM)
            alu_op = 2'b01;
        else if(opcode == `ARITHMETIC)
            alu_op = 2'b10;  
        else // 추후 Branch/JAL(R) 추가할 것   
            alu_op = 2'b00;  
    end

endmodule
