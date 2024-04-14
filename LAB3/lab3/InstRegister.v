
module InstRegister(reset, clk, irwrite, memdata, inst, IR);
    input reset;
    input clk;
    input irwrite;
    input [31:0] memdata;
    output reg [31:0] inst;
    output reg [31:0] IR;

    always @(posedge clk) begin
        if (reset) 
            IR <= 0;
        else if (irwrite)
            IR <= memdata;
    end

    always @(*) begin        
        inst = IR;
    end

endmodule

