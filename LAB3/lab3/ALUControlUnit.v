`include "opcodes.v"

module ALUControlUnit(part_of_inst, alu_control_op, alu_op);
  input [3:0] part_of_inst;
  input [1:0]alu_cont_op;
  output reg [3:0] alu_op;

  /*
  add 0 / sub 1 / and 2 / or 3  / xor 4  / sll 5
  srl 6 / beq 7 / bne 8 / blt 9 / bge 10 / else 11
  */

  // {00 : lw, sw},{01 : beq}, {10 : R-type}, {11 : ID, PC + 4}
  wire sub_or_not = part_of_inst[3];
  wire [2:0]funct3 = part_of_inst[2:0];

  always @(*) begin
    case(alu_cont_op) 
      2'b00 : begin // LW, SW
        alu_op = 0; //ADD
      end

      2'b01 : begin // bxx
        case(funct3)
          3'b000 : alu_op = 7; //BEQ
          3'b001 : alu_op = 8; //BNE
          3'b100 : alu_op = 9; //BLT
          3'b101 : alu_op = 10; //BGT
          default : alu_op = 11; //ELSE
        endcase
      end

      2'b10 : begin // R-type
        case(funct3)
          3'b000 : begin
            if(sub_or_not) alu_op = 1; //SUB
            else alu_op = 0; //ADD
          end
          3'b001 : alu_op = 5; //SLL
          3'b100 : alu_op = 4;   // XOR
          3'b101 : alu_op = 6;  // SRL
          3'b110 : alu_op = 3;  // OR
          3'b111 : alu_op = 2;  // AND 
          default : alu_op = 11; //ELSE
        endcase    
      end
      
      2'b11: begin //ID, PC + 4
        alu_op = 0; //ADD
      end

      default : alu_op = 0;

    endcase
  end

endmodule
