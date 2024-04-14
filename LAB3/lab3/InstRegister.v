
module InstRegister(reset, clk, irwrite, memdata, op_out, rs1_out, rs2_out, rd_out);
    input reset;
    input clk;
    input irwrite;
    input [31:0] memdata;
    output reg [6:0] op_out;
    output reg [4:0] rs1_out;
    output reg [4:0] rs2_out;
    output reg [4:0] rd_out;
    output reg [31:0] IR;

    always @(posedge clk) begin
        if (reset) 
            IR <= 0;
        else if (irwrite)
            IR <= memdata;
    end

    always @(*) begin        
        op_out  = IR[ 6: 0];
        rs1_out = IR[19:15];
        rs2_out = IR[24:20];
        rd_out  = IR[11: 7];
    end

endmodule

