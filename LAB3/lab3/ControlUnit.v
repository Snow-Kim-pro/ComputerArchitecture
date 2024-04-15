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
    output reg [1:0] aluop; // {00 : add},{01 : sub(I-type)}, {10 : R-type}, {11 : branch}
    output reg [1:0] alusrcB;       
    output reg alusrcA;        
    output reg regwrite;        
    output reg is_ecall; // ECALL

    // Define control signal masks
    localparam [14:0] PCWRITECOND = 15'b100000000000000;
    localparam [14:0] PCWRITE     = 15'b010000000000000;
    localparam [14:0] IORD        = 15'b001000000000000;
    localparam [14:0] MEMREAD     = 15'b000100000000000;
    localparam [14:0] MEMWRITE    = 15'b000010000000000;
    localparam [14:0] MEMTOREG    = 15'b000001000000000;
    localparam [14:0] IRWRITE     = 15'b000000100000000;
    localparam [14:0] PCSOURCE    = 15'b000000010000000;
    localparam [14:0] ALUOP0      = 15'b000000000000000; // ALUOp : Add
    localparam [14:0] ALUOP1      = 15'b000000000100000; // ALUOp : I-type
    localparam [14:0] ALUOP2      = 15'b000000001000000; // ALUOp : R-type
    localparam [14:0] ALUOP3      = 15'b000000001100000; // ALUOp : B-type
    localparam [14:0] ALUSRCB0    = 15'b000000000000000; // Mask for 2-bit ALUSRCB
    localparam [14:0] ALUSRCB1    = 15'b000000000001000; // Mask for 2-bit ALUSRCB
    localparam [14:0] ALUSRCB2    = 15'b000000000010000; // Mask for 2-bit ALUSRCB
    localparam [14:0] ALUSRCA     = 15'b000000000000100;
    localparam [14:0] REGWRITE    = 15'b000000000000010;
    localparam [14:0] IS_ECALL    = 15'b000000000000001;

    reg [3:0] state;      // Microprogram Counter
    reg [14:0] controlWord; // Control Word from Microcode Storage

    // Address select logic
    always @(posedge clk) begin
        if (reset) begin
            state <= 0; // Reset microprogram counter
        end else begin
            case(state)
                `start : state <= `IF;
                `IF : state <= `ID;               
                `ID : begin
                    case(opcode)
                        `ARITHMETIC : state <= `Rtype_EX;
                        `ARITHMETIC_IMM : state <= `Itype_EX;
                        `LOAD : state <= `LDSD_EX;
                        `STORE : state <= `LDSD_EX;
                        `BRANCH : state <= `Bxx_EX_not_taken;
                        `JAL : state <= `JAL_WB;
                        `JALR : state <= `JALR_WB;
                        `ECALL : begin
                           if(regist_17 == 10) state <= `ISECALL;
                           else state <= `AGAIN;
                        end
                        default : state <= `ID;
                    endcase
                end
                `Rtype_EX : state <= `IRtype_WB;
                `Itype_EX : state <= `IRtype_WB;
                `IRtype_WB : state <= `IF;
                `LDSD_EX : begin
                    case(opcode)
                        `LOAD : state <= `LD_MEM;
                        `STORE : state <= `SD_MEM;
                        default: state <= `LDSD_EX;
                    endcase                    
                end  
                `SD_MEM : state <= `IF;              
                `LD_MEM : state <= `LD_WB;
                `LD_WB : state <= `IF;
                `Bxx_EX_not_taken : begin 
                    if(!bcond) state <= `IF;
                    else state <= `Bxx_EX_taken;
                end
                `Bxx_EX_taken : state <= `IF;
                `JAL_WB : state <= `IF;              
                `JALR_WB : state <= `IF;
                `AGAIN : state <= `IF;
                `ISECALL : state <= `ISECALL;                
                default: state <= 0;              
            endcase
        end  
    end

    // Microcode Storage
    always @(*) begin
        case(state) 
            `start : 
                controlWord = 15'b0000000000000;            
            `IF : // IR <- MEM[PC]         
                controlWord = MEMREAD | IRWRITE;
            `ID : // A <- RF[rs(IR)], B <- RF[rs(IR)], ALUOut <- PC+4 
                controlWord = ALUSRCB1 | ALUOP0;             
            `Rtype_EX : // ALUOut <- A + B
                controlWord = ALUSRCA | ALUSRCB0 | ALUOP2; 
            `Itype_EX : // ALUOut <- A + imm(IR)
                controlWord = ALUSRCA | ALUSRCB2 | ALUOP1;      
            `IRtype_WB : // RF[rd(IR)] <- ALUOut, PC <- PC+4 (MEMTOREG = 0, ALUSRCA = 0, PCSOURCE = 0)
                controlWord = REGWRITE | ALUSRCB1 | ALUOP0 | PCWRITE;

            `LDSD_EX : // ALUOut <- A + imm(IR) 
                controlWord = ALUSRCA | ALUSRCB2 | ALUOP0;              
            `SD_MEM : // MEM[ALUOut] <- B, PC <- PC+4 (ALUSRCA = 0, PCSOURCE = 0)        
                controlWord = IORD | MEMWRITE | ALUSRCB1 | ALUOP0 | PCWRITE;      
            `LD_MEM : // MDR <- MEM[ALUOut]
                controlWord = IORD | MEMREAD;            
            `LD_WB : // RF[rd(IR)] <- MDR, PC <- PC+4 (ALUSRCA = 0, PCSOURCE = 0)        
                controlWord = REGWRITE | MEMTOREG | ALUSRCB1 | ALUOP0 | PCWRITE;   
            
            `Bxx_EX_not_taken : // if not taken : {PC <- ALUOut}
                controlWord = ALUSRCA | ALUOP3 | PCWRITECOND | PCSOURCE;               
            `Bxx_EX_taken : // if taken : {PC <- PC + imm(IR)} (ALUSRCA = 0, PCSOURCE = 0)       
                controlWord = ALUSRCB2 | ALUOP0 | PCWRITE;         
            
            `JAL_WB : // RF[rd(IR)] <- ALUOut, PC <- PC + Imm(IR) (MEMTOREG = 0, ALUSRCA = 0, PCSOURCE = 0)           
                controlWord = REGWRITE | ALUSRCB2 | ALUOP0 | PCWRITE;            
            `JALR_WB : // RF[rd(IR)] <- ALUOut, PC <- A + Imm(IR) (MEMTOREG = 0, ALUSRCA = 0, PCSOURCE = 0, )
                controlWord = REGWRITE | ALUSRCA | ALUSRCB2 | ALUOP0 | PCWRITE;   
            
            `AGAIN : // PC <- PC+4
                controlWord = ALUSRCB1 | ALUOP0 | PCWRITE;   
            `ISECALL : //ECALL
                controlWord = IS_ECALL;

            default :
                controlWord = 15'b0000000000000;
        endcase        
    end     

    // Decode datapath control outputs
    always @(*) begin
        {pcwritecond, pcwrite, iord, memread, memwrite, memtoreg, irwrite, pcsource, aluop, alusrcB, alusrcA, regwrite, is_ecall} = controlWord;
    end

endmodule

