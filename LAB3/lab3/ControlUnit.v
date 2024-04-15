`include "opcodes.v"

module ControlUnit (reset, clk, opcode, pcwritecond, pcwrite, iord, memread, memwrite, memtoreg, irwrite, pcsource, alusrcB, alusrcA, regwrite, is_ecall);
    input reset;
    input clk;
    input [6:0] opcode;
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

    // Define each control signal position
    localparam PCWRITECOND_POS = 12;
    localparam PCWRITE_POS = 11;
    localparam IORD_POS = 10;
    localparam MEMREAD_POS = 9;
    localparam MEMWRITE_POS = 8;
    localparam MEMTOREG_POS = 7;
    localparam IRWRITE_POS = 6;
    localparam PCSOURCE_POS = 5;
    localparam ALUSRCB_POS = 3; // 2 bits
    localparam ALUSRCA_POS = 2;
    localparam REGWRITE_POS = 1;
    localparam IS_ECALL_POS = 0;

    reg [N-1:0] state;      // Microprogram Counter
    reg [12:0] controlWord; // Control Word from Microcode Storage

    // Microcode Storage
    reg [12:0] microcodeROM [0:MICROCODE_SIZE-1];

    microcodeROM[0] = 13'b0000000000000
    microcodeROM[1] = (1 << PCWRITE_POS) | (1 << MEMREAD_POS);
    microcodeROM[2] = (1 << MEMWRITE_POS) | (1 << IRWRITE_POS);
    
    


    // Address select logic
    always @(posedge clk) begin
        if (reset) begin
            state <= 0; // Reset microprogram counter
        end else begin
            state <= state + 1;
        end
    end

    // Fetch the control word from microcode storage
    always @(*) begin
        controlWord = microcodeROM[state];
    end

    // Decode datapath control outputs
    always @(*) begin
        {pcwritecond, pcwrite, iord, memread, memwrite, memtoreg, irwrite, pcsource, alusrcB, alusrcA, regwrite, is_ecall} = controlWord;
    end


endmodule
