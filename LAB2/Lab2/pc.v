module pc(reset, clk, next_pc, current_pc);
    input reset;
    input clk;
    input [31:0] next_pc;
    output [31:0] current_pc;

    initial begin
        current_pc = 0;
    end

    always *(posedge clk) begin
        if (!reset_n)
            current_pc <= 0;
        else
            current_pc <= next_pc;
    end
endmodule

