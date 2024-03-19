
module add_alu(alu_in_1, alu_in_2, alu_result);
    
input  [31:0] alu_in_1;
input  [31:0] alu_in_2;
output [31:0] alu_result;

always @(*) begin
    
    alu_result = alu_in_1 + alu_in_2;    

end

endmodule