`include "opcodes.v"

module ControlUnit (reset, clk, bcond, opcode, regist_17, pcwritecond, pcwrite, iord, memread, memwrite, memtoreg, irwrite, pcsource, aluop, alusrcB, alusrcA, regwrite, is_ecall);
    input reset;
    input clk;
    input bcond;
    input [6:0] opcode;
    input [31:0] regist_17;
    
    output reg pcwritecond; 
    output reg pcwrite;         
    output reg iord;          
    output reg memread;        
    output reg memwrite;      
    output reg memtoreg;       
    output reg irwrite;         
    output reg pcsource;
    output reg [1:0] aluop; // {00 : lw, sw},{01 : beq}, {10 : R-type}, {11 : ID, PC + 4}
    output reg [1:0] alusrcB;       
    output reg alusrcA;        
    output reg regwrite;        
    output reg is_ecall; // ECALL

    // Define each control signal position
    localparam PCWRITECOND = 14;
    localparam PCWRITE = 13;
    localparam IORD = 12;
    localparam MEMREAD = 11;
    localparam MEMWRITE = 10;
    localparam MEMTOREG = 9;
    localparam IRWRITE = 8;
    localparam PCSOURCE = 7;
    localparam ALUOP = 5;
    localparam ALUSRCB = 3; // 2 bits
    localparam ALUSRCA = 2;
    localparam REGWRITE = 1;
    localparam IS_ECALL = 0;

    reg [N-1:0] state;      // Microprogram Counter
    reg [14:0] controlWord; // Control Word from Microcode Storage

    // Address select logic
    always @(posedge clk) begin
        if (reset) begin
            state <= 0; // Reset microprogram counter
        end else begin
            state <= state + 1;
        end
    end

    // Microcode Storage
    always @(*) begin
        case(state) 
            `start : controlWord = 15'b0000000000000
            // IR <- MEM[PC]
            `IF : controlWord = (1 << MEMREAD) | (1 << IRWRITE);  
            // A <- RF[rs(IR)], B <- RF[rs(IR)], ALUOut <- PC+4
            `ID : controlWord = (0 << ALUSRCA) | (2'b01 << ALUSRCB) | (2'b11 << ALUOP)
            
            // ALUOut <- A + B
            `Rtype_EX : controlWord = (1 << ALUSRCA) | (2'b00 << ALUSRCB) | (2'b10 << ALUOP)
            // RF[rd(IR)] <- ALUOut, PC <- PC+4
            `Rtype_WB : controlWord = (1 << REGWRITE) | (0 << MEMTOREG) | (0 << ALUSRCA) | (2'b01 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)

            // ALUOut <- A + imm(IR)
            `LDSD_EX : controlWord = (1 << ALUSRCA) | (2'b10 << ALUSRCB) | (2'b00 << ALUOP) 
            // MEM[ALUOut] <- B, PC <- PC+4
            `SD_MEM : controlWord = (1 << IORD) | (1 << MEMWRITE) | (0 << ALUSRCA) | (2'b01 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)
            // MDR <- MEM[ALUOut]
            `LD_MEM : controlWord = (1 << IORD) | (1 << MEMREAD) 
            // RF[rd(IR)] <- MDR, PC <- PC+4
            `LD_WB : controlWord = (1 << REGWRITE) | (1 << MEMTOREG) | (0 << ALUSRCA) | (2'b01 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)

            // if not taken : {PC <- ALUOut}
            `Bxx_EX_not_taken : controlWord = (1 << PCWRITECOND) | (2'b01 << ALUOP) | (1 < PCSOURCE)      
            // if taken : {PC <- PC + imm(IR)}
            `Bxx_EX_taken : controlWord = (0 << ALUSRCA) | (2'b10 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)
            
            // RF[rd(IR)] <- ALUOut, PC <- PC + Imm(IR)
            `JAL_WB : controlWord = (1 << REGWRITE) | (0 << MEMTOREG) | (0 << ALUSRCA) | (0 << ALUSRCA) | (2'b10 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)
            // RF[rd(IR)] <- ALUOut, PC <- A + Imm(IR)
            `JALR_WB : controlWord = (1 << REGWRITE) | (0 << MEMTOREG) | (0 << ALUSRCA) | (1 << ALUSRCA) | (2'b10 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)

            `ECALL : begin //ECALL
                if(regist_17 == 10) 
                    is_ecall = 1;
                else 
                    is_ecall = 0;
            end
            default :
                controlWord = 15'b0000000000000;
        endcase        
    end     

    // Decode datapath control outputs
    always @(*) begin
        {pcwritecond, pcwrite, iord, memread, memwrite, memtoreg, irwrite, pcsource, alusrcB, alusrcA, regwrite, is_ecall} = controlWord;
    end

endmodule
