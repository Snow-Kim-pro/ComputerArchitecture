`include "opcodes.v"

module ALUControlUnit(part_of_inst, alu_op, alu_control);
  input [3:0] part_of_inst;
  input [1:0] alu_op;
  output reg [3:0] alu_control;

  wire sub_or_not = part_of_inst[3];
  wire [2:0]funct3 = part_of_inst[2:0];

  /* 
  add 0 / sub 1 / and 2 / or 3  / xor 4  / sll 5
  srl 6 / beq 7 / bne 8 / blt 9 / bge 10 / else 11 
  */

  // {00 : add},{01 : sub(I-type)}, {10 : R-type}, {11 : branch}
  always @(*) begin
    case(alu_op) 
      2'b00 : // ADD
        alu_control = 0; 
      2'b01: begin // I-type
        case(funct3)
          `FUNCT3_ADD : alu_control = 0; // add
          `FUNCT3_AND : alu_control = 2; // and
          `FUNCT3_OR  : alu_control = 3; // or
          `FUNCT3_XOR : alu_control = 4; // xor
          `FUNCT3_SLL : alu_control = 5; // sll
          `FUNCT3_SRL : alu_control = 6; // srl
           default    : alu_control = 11;
        endcase    
      end       
      2'b10 : begin // R-type
        case(funct3)
          `FUNCT3_ADD : alu_control = (sub_or_not == 1) 1'b1 : 1'b0;
          `FUNCT3_AND : alu_control = 2; // and
          `FUNCT3_OR  : alu_control = 3; // or
          `FUNCT3_XOR : alu_control = 4; // xor
          `FUNCT3_SLL : alu_control = 5; // sll
          `FUNCT3_SRL : alu_control = 6; // srl
           default    : alu_control = 11;  
        endcase    
      end
      2'b11 : begin // bxx
        case(funct3)
          `FUNCT3_BEQ : alu_control = 7; //BEQ
          `FUNCT3_BNE : alu_control = 8; //BNE
          `FUNCT3_BLT : alu_control = 9; //BLT
          `FUNCT3_BGE : alu_control = 10; //BGT
           default    : alu_control = 11; //ELSE
        endcase
      end         
      default : alu_control = 0;
    endcase
  end

endmodule
