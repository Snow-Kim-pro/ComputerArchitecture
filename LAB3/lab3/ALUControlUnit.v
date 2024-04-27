`include "opcodes.v"

module ALUControlUnit(part_of_inst, alu_control_op, alu_op);
  input [3:0] part_of_inst;
  input [1:0] alu_control_op;
  output reg [3:0] alu_op;

  /* add 0 / sub 1 / and 2 / or 3  / xor 4  / sll 5
     srl 6 / beq 7 / bne 8 / blt 9 / bge 10 / else 11 */

  // {00 : add},{01 : sub(I-type)}, {10 : R-type}, {11 : branch}
  wire sub_or_not = part_of_inst[3];
  wire [2:0]funct3 = part_of_inst[2:0];

  always @(*) begin
    case(alu_control_op) 
      2'b00 : // ADD
        alu_op = 0; 
      2'b01: begin // I-type
        case(funct3)
          `FUNCT3_ADD : alu_op = 0; // add
          `FUNCT3_AND : alu_op = 2; // and
          `FUNCT3_OR  : alu_op = 3; // or
          `FUNCT3_XOR : alu_op = 4; // xor
          `FUNCT3_SLL : alu_op = 5; // sll
          `FUNCT3_SRL : alu_op = 6; // srl
          default : alu_op = 11;
        endcase    
      end       
      2'b10 : begin // R-type
        case(funct3)
          `FUNCT3_ADD : begin
            if(sub_or_not) alu_op = 1; // sub
            else alu_op = 0; // add
          end
          `FUNCT3_AND : alu_op = 2; // and
          `FUNCT3_OR  : alu_op = 3; // or
          `FUNCT3_XOR : alu_op = 4; // xor
          `FUNCT3_SLL : alu_op = 5; // sll
          `FUNCT3_SRL : alu_op = 6; // srl
          default : alu_op = 11;  
        endcase    
      end
      2'b11 : begin // bxx
        case(funct3)
          `FUNCT3_BEQ : alu_op = 7; //BEQ
          `FUNCT3_BNE : alu_op = 8; //BNE
          `FUNCT3_BLT : alu_op = 9; //BLT
          `FUNCT3_BGE : alu_op = 10; //BGT
          default : alu_op = 11; //ELSE
        endcase
      end         
      default : alu_op = 0;
    endcase
  end

endmodule
