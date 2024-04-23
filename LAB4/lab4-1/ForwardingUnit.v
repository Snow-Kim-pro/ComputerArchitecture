
module ForwardingUnit(ex_mem_rd, ex_mem_RW, mem_wb_rd, mem_wb_RW, rs1, rs2, mux_forward_A, mux_forward_B);
input [4:0] ex_mem_rd;
input ex_mem_RW;
input [4:0] mem_wb_rd;
input mem_wb_RW;
input [4:0] rs1;
input [4:0] rs2;
output reg [1:0] mux_forward_A;
output reg [1:0] mux_forward_B;

always @(*) begin

    // if (rs1 != x0) && (rs1 == rd_MEM) && RegWrite_MEM
    // else if (rs1 != x0) && (rs1 == rd_WB) && RegWrite_WB
    // else

    // if (rs2 != x0) && (rs2 == rd_MEM) && RegWrite_MEM
    // else if (rs2 != x0) && (rs2 == rd_WB) && RegWrite_WB
    // else
   
end

endmodule
