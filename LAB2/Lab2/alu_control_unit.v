`include "opcodes.v"

module alu_control_unit(part_of_inst, alu_op);
  input [10:0] part_of_inst;
  output reg [3:0] alu_op;

  wire sub_or_not = part_of_inst[10];
  wire [2:0]funct3 = part_of_inst[9:7];
  wire [6:0]opcode = part_of_inst[6:0];

  /*
  sub 0 / add 1 / and 2 / or 3  / xor 4  / sll 5
  srl 6 / beq 7 / bne 8 / blt 9 / bge 10 / else 11
  */

  always @(*) begin
    alu_op = 11;

    case(opcode) 

      `ARITHMETIC : begin // R-type
        case(funct3)
          `FUNCT3_ADD : begin
              if(sub_or_not)
                  alu_op = 0; // sub
              else
                  alu_op = 1; // add
          end
          `FUNCT3_AND : alu_op = 2; // and
          `FUNCT3_OR  : alu_op = 3; // or
          `FUNCT3_XOR : alu_op = 4; // xor
          `FUNCT3_SLL : alu_op = 5; // sll
          `FUNCT3_SRL : alu_op = 6; // srl
        endcase    
      end

      `ARITHMETIC_IMM : begin // I-type
        case(funct3)
          `FUNCT3_ADD : alu_op = 1; // add
          `FUNCT3_AND : alu_op = 2; // and
          `FUNCT3_OR  : alu_op = 3; // or
          `FUNCT3_XOR : alu_op = 4; // xor
          `FUNCT3_SLL : alu_op = 5; // sll
          `FUNCT3_SRL : alu_op = 6; // srl
        endcase    
      end

      `BRANCH : begin // B-type
        case(funct3)
          `FUNCT3_BEQ : alu_op = 7;   // beq
          `FUNCT3_BNE : alu_op = 8;   // bne
          `FUNCT3_BLT : alu_op = 9;   // blt
          `FUNCT3_BGE : alu_op = 10;  // bge     
        endcase    
      end

    endcase
  end

endmodule
