module pc(reset, clk, next_pc, current_pc);
    input reset;
    input clk;
    input [31:0] next_pc;
    output reg[31:0] current_pc;

    initial begin
        current_pc = 0;
    end

    always @(posedge clk) begin
        if (!reset)
            current_pc <= 0;
        else
            current_pc <= next_pc;
    end
endmodule

