
module InstRegister(reset, clk, irwrite, memdata, instr, IR);
    input reset;
    input clk;
    input irwrite;
    input [31:0] memdata;
    output reg [31:0] instr;
    output reg [31:0] IR;

    always @(posedge clk) begin
        if (reset) 
            IR <= 0;
        else if (irwrite)
            IR <= memdata;
    end

    always @(*) begin        
        instr = IR;
    end

endmodule
