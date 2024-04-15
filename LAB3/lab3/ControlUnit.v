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
    localparam PCWRITE  = 13;
    localparam IORD     = 12;
    localparam MEMREAD  = 11;
    localparam MEMWRITE = 10;
    localparam MEMTOREG = 9;
    localparam IRWRITE  = 8;
    localparam PCSOURCE = 7;
    localparam ALUOP    = 5; // 2 bits
    localparam ALUSRCB  = 3; // 2 bits
    localparam ALUSRCA  = 2;
    localparam REGWRITE = 1;
    localparam IS_ECALL = 0;

    reg [N-1:0] state;      // Microprogram Counter
    reg [14:0] controlWord; // Control Word from Microcode Storage

    // Address select logic
    always @(posedge clk) begin
        if (reset) begin
            state <= 0; // Reset microprogram counter
        end else begin
            case(state)
                `start : state <= `IF;
                `IF : begin 
                    if(opcode == `ECALL) state <= `ISECALL;
                    else state <= `ID;
                end                
                `ID : begin
                    case(opcode)
                        `ARITHMETIC : state <= `Rtype_EX;
                        `ARITHMETIC_IMM : state <= `Itype_EX;
                        `LOAD : state <= `LDSD_EX;
                        `STORE : state <= `LDSD_EX;
                        `BRANCH : state <= `Bxx_EX_not_taken;
                        `JAL : state <= `JAL_WB;
                        `JALR : state <= `JALR_WB;
                    endcase
                end
                `Rtype_EX : state <= `IRtype_WB;
                `Itype_EX : state <= `IRtype_WB;
                `IRtype_WB : state <= `IF;
                `LDSD_EX : begin
                    case(opcode)
                        `LOAD = state <= `LD_MEM;
                        `STORE = state <= `SD_MEM;
                    endcase                    
                end  
                `SD_MEM : state <= `IF;              
                `LD_MEM : state <= `LD_WB;
                `LD_MEM : state <= `IF;
                `Bxx_EX_not_taken : begin 
                    if(bcond) state <= `IF;
                    else state <= `Bxx_EX_taken;
                end
                `Bxx_EX_taken : state <= `IF;
                `JAL_WB : state <= `IF;              
                `JALR_WB : state <= `IF;
                `ISECALL : state <= `ISECALL;
                default:
                    state <= 0;              
            endcase
        end  
    end

    // Microcode Storage
    always @(*) begin
        case(state) 
            `start : 
                controlWord = 15'b0000000000000            
            `IF : // IR <- MEM[PC]
                controlWord = (1 << MEMREAD) | (1 << IRWRITE);          
            `ID : // A <- RF[rs(IR)], B <- RF[rs(IR)], ALUOut <- PC+4
                controlWord = (0 << ALUSRCA) | (2'b01 << ALUSRCB) | (2'b11 << ALUOP)            
            
            `Rtype_EX : // ALUOut <- A + B
                controlWord = (1 << ALUSRCA) | (2'b00 << ALUSRCB) | (2'b10 << ALUOP) 
            `Itype_EX : // ALUOut <- A + imm(IR)
                controlWord = (1 << ALUSRCA) | (2'b10 << ALUSRCB) | (2'b10 << ALUOP)           
            `IRtype_WB : // RF[rd(IR)] <- ALUOut, PC <- PC+4
                controlWord = (1 << REGWRITE) | (0 << MEMTOREG) | (0 << ALUSRCA) | (2'b01 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)
            
            `LDSD_EX : // ALUOut <- A + imm(IR)
                controlWord = (1 << ALUSRCA) | (2'b10 << ALUSRCB) | (2'b00 << ALUOP)             
            `SD_MEM : // MEM[ALUOut] <- B, PC <- PC+4
                controlWord = (1 << IORD) | (1 << MEMWRITE) | (0 << ALUSRCA) | (2'b01 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)            
            `LD_MEM : // MDR <- MEM[ALUOut]
                controlWord = (1 << IORD) | (1 << MEMREAD)             
            `LD_WB : // RF[rd(IR)] <- MDR, PC <- PC+4
                controlWord = (1 << REGWRITE) | (1 << MEMTOREG) | (0 << ALUSRCA) | (2'b01 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)
            
            `Bxx_EX_not_taken : // if not taken : {PC <- ALUOut}
                controlWord = (1 << PCWRITECOND) | (2'b01 << ALUOP) | (1 < PCSOURCE)                 
            `Bxx_EX_taken : // if taken : {PC <- PC + imm(IR)}
                controlWord = (0 << ALUSRCA) | (2'b10 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)            
            
            `JAL_WB : // RF[rd(IR)] <- ALUOut, PC <- PC + Imm(IR)
                controlWord = (1 << REGWRITE) | (0 << MEMTOREG) | (0 << ALUSRCA) | (0 << ALUSRCA) | (2'b10 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)            
            `JALR_WB : // RF[rd(IR)] <- ALUOut, PC <- A + Imm(IR)
                controlWord = (1 << REGWRITE) | (0 << MEMTOREG) | (0 << ALUSRCA) | (1 << ALUSRCA) | (2'b10 << ALUSRCB) | (0 << PCSOURCE) | (1 << PCWRITE) | (2'b11 << ALUOP)

            `ISECALL : begin //ECALL
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
