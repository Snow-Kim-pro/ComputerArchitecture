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
    /*
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
    */

    reg [3:0] state;      // Microprogram Counter
    reg [14:0] controlWord; // Control Word from Microcode Storage

    // Address select logic
    always @(posedge clk) begin
        if (reset) begin
            state <= 0; // Reset microprogram counter
        end else begin
            case(state)
                `start : state <= `IF;
                `IF :
                    state <= `ID;              
                `ID : begin
                    if(opcode == `ECALL) begin
                        if(regist_17 == 10) state <= `ISECALL;
                    end
                    else 
                    case(opcode)
                        `ARITHMETIC : state <= `Rtype_EX;
                        `ARITHMETIC_IMM : state <= `Itype_EX;
                        `LOAD : state <= `LDSD_EX;
                        `STORE : state <= `LDSD_EX;
                         `BRANCH : begin 
                            if(bcond) state <= `Bxx_EX_taken;
                            else state <= `Bxx_EX_not_taken;
                         end
                        `JAL : state <= `JAL_WB;
                        `JALR : state <= `JALR_WB;
                        default: state <= `ID;
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
                // `LD_MEM : state <= `IF;
                `Bxx_EX_not_taken : begin 
                    state <= `IF;
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
                controlWord = 15'b0000000000000;            
            `IF : // IR <- MEM[PC]
                controlWord = 15'b000100100000000;          
            `ID : // A <- RF[rs(IR)], B <- RF[rs(IR)], ALUOut <- PC+4
                controlWord = 15'b000000001101000;            
            
            `Rtype_EX : // ALUOut <- A + B
                controlWord = 15'b00000000100100; 
            `Itype_EX : // ALUOut <- A + imm(IR)
                controlWord = 15'b000000001010100;           
            `IRtype_WB : // RF[rd(IR)] <- ALUOut, PC <- PC+4
                controlWord = 15'b010000001101010;
            
            `LDSD_EX : // ALUOut <- A + imm(IR)
                controlWord = 15'b000000000001100;             
            `SD_MEM : // MEM[ALUOut] <- B, PC <- PC+4
                controlWord = 15'b011010001101000;            
            `LD_MEM : // MDR <- MEM[ALUOut]
                controlWord = 15'b001100000000000;             
            `LD_WB : // RF[rd(IR)] <- MDR, PC <- PC+4
                controlWord = 15'b010001001101010;
            
            `Bxx_EX_not_taken : // if not taken : {PC <- ALUOut}
                controlWord = 15'b110000010100000;              
            `Bxx_EX_taken : // if taken : {PC <- PC + imm(IR)}
                controlWord = 15'b010000001110000;            
            
            `JAL_WB : // RF[rd(IR)] <- ALUOut, PC <- PC + Imm(IR)
                controlWord = 15'b010000001110010;            
            `JALR_WB : // RF[rd(IR)] <- ALUOut, PC <- A + Imm(IR)
                controlWord = 15'b010000001110110;

            `ISECALL : begin //ECALL
                controlWord = 15'b000000000000001;
            end
            default :
                controlWord = 15'b0000000000000;
        endcase        
    end     

    // Decode datapath control outputs
    always @(*) begin
        {pcwritecond, pcwrite, iord, memread, memwrite, memtoreg, irwrite, pcsource, aluop, alusrcB, alusrcA, regwrite, is_ecall} = controlWord;
    end

endmodule
