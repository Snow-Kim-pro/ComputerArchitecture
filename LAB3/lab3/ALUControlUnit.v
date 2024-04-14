`include "opcodes.v"

module ALUControlUnit(part_of_inst, alu_control);
  input [10:0] part_of_inst;
  output reg [3:0] alu_control;

  wire sub_or_not = part_of_inst[10];
  wire [2:0]funct3 = part_of_inst[9:7];
  wire [6:0]opcode = part_of_inst[6:0];

  /*
  add 0 / sub 1 / and 2 / or 3  / xor 4  / sll 5
  srl 6 / beq 7 / bne 8 / blt 9 / bge 10 / else 11
  */

  always @(*) begin
    case(opcode) 

      `ARITHMETIC : begin // R-type
        case(funct3)
          `FUNCT3_ADD : begin
            if(sub_or_not)
                alu_control = 1; // sub
            else
                alu_control = 0; // add
          end
          `FUNCT3_AND : alu_control = 2; // and
          `FUNCT3_OR  : alu_control = 3; // or
          `FUNCT3_XOR : alu_control = 4; // xor
          `FUNCT3_SLL : alu_control = 5; // sll
          `FUNCT3_SRL : alu_control = 6; // srl
          default : alu_control = 11;  
        endcase    
      end

      `ARITHMETIC_IMM : begin // I-type
        case(funct3)
          `FUNCT3_ADD : alu_control = 0; // add
          `FUNCT3_AND : alu_control = 2; // and
          `FUNCT3_OR  : alu_control = 3; // or
          `FUNCT3_XOR : alu_control = 4; // xor
          `FUNCT3_SLL : alu_control = 5; // sll
          `FUNCT3_SRL : alu_control = 6; // srl
          default : alu_control = 11;
        endcase    
      end

      `BRANCH : begin // B-type
        case(funct3)
          `FUNCT3_BEQ : alu_control = 7;   // beq
          `FUNCT3_BNE : alu_control = 8;   // bne
          `FUNCT3_BLT : alu_control = 9;   // blt
          `FUNCT3_BGE : alu_control = 10;  // bge     
          default : alu_control = 11;
        endcase    
      end

      // Load, Store, JAL, JALR (= Add 수행)
      default : alu_control = 0;

    endcase
  end

endmodule
