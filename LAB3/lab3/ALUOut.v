
module ALUOut(reset, clk, alu_result, ALUOut);
    input reset;
    input clk;
    input [31:0] alu_result;
    output reg [31:0] ALUOut;

    always @(posedge clk) begin
        if (reset)
            ALUOut <= 0;
        else
            ALUOut <= alu_result;
    end
endmodule

