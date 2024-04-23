
module HazardDetectoinUnit(opcode, rs1, rs2, id_ex_rd, id_ex_memread, pcwrite, if_id_write, control_mux);
input [6:0] opcode;
input [4:0] rs1;
input [4:0] rs2;
input [4:0] id_ex_rd;
input id_ex_memread;
output reg pcwrite;
output reg if_id_write;
output reg control_mux;

always @(*) begin
    
    // if (rs1 != x0) && (rs1 == rd_MEM) && RegWrite_MEM
    // else if (rs1 != x0) && (rs1 == rd_WB) && RegWrite_WB
    // else

    // if (rs2 != x0) && (rs2 == rd_MEM) && RegWrite_MEM
    // else if (rs2 != x0) && (rs2 == rd_WB) && RegWrite_WB
    // else
   
end

endmodule
