
module PC(reset, clk, next_pc, curr_pc);
    input reset;
    input clk;
    input [31:0] next_pc;
    output reg[31:0] curr_pc;

    initial begin
        curr_pc = 0;
    end

    always @(posedge clk) begin
        if (reset)
            curr_pc <= 0;
        else 
            curr_pc <= next_pc;
    end
endmodule

