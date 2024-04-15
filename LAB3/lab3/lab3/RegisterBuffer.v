
module RegisterBuffer(reset, clk, rs1_dout, rs2_dout, A, B);
    input reset;
    input clk;
    input [31:0] rs1_dout;
    input [31:0] rs2_dout;
    output reg [31:0] A;
    output reg [31:0] B;

    always @(posedge clk) begin
        if (reset) begin
            A <= 0;
            B <= 0;
        end else begin
            A <= rs1_dout;
            B <= rs2_dout;
        end
            
    end

endmodule

