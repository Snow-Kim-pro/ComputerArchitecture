`include "opcodes.v"

module ALUControlUnit(part_of_inst, alu_control_op, alu_op);
  input [3:0] part_of_inst;
  input [1:0] alu_cont_op;
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
      2'b00 : // LW, SW
        alu_op = 0; //ADD      
      2'b01 : begin // bxx
        case(funct3)
          `FUNCT3_BEQ : alu_op = 7; //BEQ
          `FUNCT3_BNE : alu_op = 8; //BNE
          `FUNCT3_BLT : alu_op = 9; //BLT
          `FUNCT3_BGE : alu_op = 10; //BGT
          default : alu_op = 11; //ELSE
        endcase
      end
      2'b10 : begin // R-type
        case(funct3)
          `FUNCT3_ADD : begin
            if(sub_or_not) alu_op = 1; //SUB
            else alu_op = 0; //ADD
          end
          `FUNCT3_SLL : alu_op = 5; //SLL
          `FUNCT3_XOR : alu_op = 4;   // XOR
          `FUNCT3_SRL : alu_op = 6;  // SRL
          `FUNCT3_OR  : alu_op = 3;  // OR
          `FUNCT3_AND1 : alu_op = 2;  // AND 
          default : alu_op = 11; //ELSE
        endcase    
      end      
      2'b11:  // for Add operation
        alu_op = 0; //ADD      
      default : alu_op = 0;
    endcase
  end

endmodule
