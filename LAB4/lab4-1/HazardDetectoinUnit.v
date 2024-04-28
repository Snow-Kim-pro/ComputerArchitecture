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

    wire use_rs1, use_rs2;

    always @(*) begin
        //rs1을 쓰는가? Rtype, Itype, JALR, Bxx, LW, SW
        use_rs1 = (opcode != `JAL);       
        //rs2를 쓰는가? Rtype, Bxx, SW
        use_rs2 = (opcode == `ARITHMETIC || opcode == `BRANCH || opcode == `STORE);

        //MemRead를 쓰는가? LW
        if((((rs1 == id_ex_rd) && (use_rs1)) || ((rs2 == id_ex_rd) && (use_rs2))) && id_ex_memread) begin
            pcwrite = 0;
            if_id_write = 0;
            control_mux = 1;
        end else begin
            pcwrite = 1;
            if_id_write = 1;
            control_mux = 0;
        end
    end
endmodule
