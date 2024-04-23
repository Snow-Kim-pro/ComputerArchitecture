`include "opcodes.v"


module HazardDetectoinUnit(opcode, rs1, rs2, id_ex_rd, id_ex_memread, pcwrite, if_id_write, control_mux);
input [6:0] opcode;
input [4:0] rs1;
input [4:0] rs2;
input [4:0] id_ex_rd;
input id_ex_memread; 
/* data Hazard 감지되면 모든 output 다 0으로 설정함. but, control_mux는 1 */
output reg pcwrite; 
output reg if_id_write;
output reg control_mux;

//rs1을 쓰는가? Rtype, Itype, JALR, Bxx, LW, SW
//Rtype:0110011, Itype: 0010011, JALR: 1100111, JAL: 1101111, Bxx:1100011, LW: 0000011, SW:0100011
//
//rs2를 쓰는가? Rtype, Bxx, SW
//MemRead를 쓰는가? LW
wire use_rs1, use_rs2;
    
always @(*) begin
    if(opcode == `ARITHMETIC || opcode == `ARITHMETIC_IMM || opcode == `JALR || opcode == `BRANCH ||opcode == `LOAD || opcode== `STORE)
        use_rs1 = 1;
    else
        use_rs1 = 0;
        
    if(opcode == `ARITHMETIC || opcode == `BRANCH || opcode == `STORE)
        use_rs2 = 1;
    else
        use_rs2 = 0;
end

always @(*) begin
    if(((rs1 ==id_ex_rd) && (use_rs1)) || ((rs2 == id_ex_rd) && (use_rs2)) && id_ex_memread) begin
        pcwrite = 0;
        if_id_write = 0;
        control_mux = 1;
    end
    else begin
        pcwrite = 1;
        if_id_write = 1;
        control_mux = 0;
    end
end

endmodule
