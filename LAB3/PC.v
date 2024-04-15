module pc(reset, clk, next_pc, current_pc, is_update);
    input reset;
    input clk;
    input [31:0] next_pc;
    input is_update;
    output reg[31:0] current_pc;

    initial begin
        current_pc = 0;
    end

    always @(posedge clk) begin
        if (reset)
            current_pc <= 0;
        else begin
            if(is_update)
                current_pc <= next_pc;
            else
                current_pc <= current_pc;
        end
    end
endmodule

