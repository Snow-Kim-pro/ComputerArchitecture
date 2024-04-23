
module ForwardingUnit(ex_mem_rd, ex_mem_RW, mem_wb_rd, mem_wb_RW, rs1, rs2, alusrc, mux_forward_A, mux_forward_B);
input [4:0] ex_mem_rd;
input ex_mem_RW;
input [4:0] mem_wb_rd;
input mem_wb_RW;
input [4:0] rs1;
input [4:0] rs2;
input alusrc;
output reg [1:0] mux_forward_A;
output reg [1:0] mux_forward_B;

always @(*) begin
    
    // if (rs1 != x0) && (rs1 == rd_MEM) && RegWrite_MEM  -> dist =1 select = 10
    if((rs1 != 0) && (rs1 == ex_mem_rd) && ex_mem_RW)
        mux_forward_A = 2'b10;
    // else if (rs1 != x0) && (rs1 == rd_WB) && RegWrite_WB -> dist = 2 select = 11
    else if((rs1 != 0) && (rs1 == mem_wb_rd) && mem_wb_RW)
        mux_forward_A = 2'b11;
    // else -> dist = 3 select = 00
    else
        mux_forward_A = 2'b00;

    if(alusrc == 1)
        mux_forward_B = 2'b01;
    else begin 
        // if (rs2 != x0) && (rs2 == rd_MEM) && RegWrite_MEM -> dist = 1
        if((rs2 != 0) && (rs2 == ex_mem_rd) && ex_mem_RW)
            mux_forward_B = 2'b10;
        // else if (rs2 != x0) && (rs2 == rd_WB) && RegWrite_WB -> dist = 2
        else if((rs2 != 0) && (rs2 == mem_wb_rd) && mem_wb_RW)
            mux_forward_B = 2'b11;
        // else -> dist = 3
        else
            mux_forward_B = 2'b00;
    end  
end

endmodule
