
module PC(reset, clk, clkPC, next_pc, curr_pc);
    input reset;
    input clk;
    input clkPC;
    input [31:0] next_pc;
    output reg[31:0] curr_pc;

    initial begin
        curr_pc = 0;
    end

    always @(posedge clk) begin
        if (reset)
            curr_pc <= 0;
        else if (clkPC)
            curr_pc <= next_pc;
    end
endmodule

