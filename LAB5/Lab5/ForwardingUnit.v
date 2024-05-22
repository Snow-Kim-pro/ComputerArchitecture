
module ForwardingUnit(
    input [4:0] ex_mem_rd,
    input [4:0] mem_wb_rd,
    input [4:0] rs1,
    input [4:0] rs2,
    input ex_mem_RW,
    input mem_wb_RW,
    output reg [1:0] mux_forward_A,
    output reg [1:0] mux_forward_B
);

    always @(*) begin
        
        if((rs1 != 0) && (rs1 == ex_mem_rd) && ex_mem_RW)
            mux_forward_A = 2'b01; // dist =1
        else if((rs1 != 0) && (rs1 == mem_wb_rd) && mem_wb_RW)
            mux_forward_A = 2'b10; // dist = 2
        else
            mux_forward_A = 2'b00; // dist = 3

        if((rs2 != 0) && (rs2 == ex_mem_rd) && ex_mem_RW)
            mux_forward_B = 2'b01; // dist = 1
        else if((rs2 != 0) && (rs2 == mem_wb_rd) && mem_wb_RW)
            mux_forward_B = 2'b10; // dist = 2
        else
            mux_forward_B = 2'b00; // dist = 3

    end

endmodule
