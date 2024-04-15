
module MemDataRegister(reset, clk, memdata, MDR);
    input reset;
    input clk;
    input [31:0] memdata;
    output reg[31:0] MDR;

    always @(posedge clk) begin
        if (reset)
            MDR <= 0;
        else
            MDR <= memdata;
    end
endmodule

