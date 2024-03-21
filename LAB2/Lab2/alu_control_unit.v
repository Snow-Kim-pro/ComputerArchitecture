module alu_control_unit(part_of_inst, alu_op);
  input [10:0] part_of_inst;
  output reg [3:0] alu_op;

  wire sub_or_not = part_of_inst[10];
  wire [2:0]funct3 = part_of_inst[9:7];
  wire [6:0]opcode = part_of_inst[ 6: 0];

  /*
  add 0
  sub 1
  and 2
  or 3
  xor 4
  sll 5
  srl 6
  beq 7
  bne 8
  blt 9
  bge 10
  */

  always @(*) begin
    if(opcode == 7'b1100011) begin
      case(funct3)
        3'b000:
          alu_op = 7; //beq
        3'b001:
          alu_op = 8; //bne
        3'b100:
          alu_op = 9; //blt
        default: //3'b101:
          alu_op = 10; //bge
      endcase
    end else if(opcode == 7'b0110011) begin
      case(funct3)
        3'b000: begin
          if(sub_or_not) begin
            alu_op = 1;  //sub
          end else begin
            alu_op = 0; //add
          end
        end
        3'b111:
          alu_op = 2; //and
        3'b110:
          alu_op = 3; //or
        3'b100:
          alu_op = 4; //xor
        3'b001: alu_op = 5; //sll
        default: //3'b101:
          alu_op = 6;//srl
      endcase
    end else if(opcode == 7'b0010011) begin
      case(funct3)
        3'b000: alu_op = 0; //add
        3'b111: alu_op = 2; //and
        3'b110: alu_op = 3; //or
        3'b100:alu_op = 4; //xor
        3'b001: alu_op = 5; //sll
        default: alu_op = 6; //srl
      endcase
    end else begin
      alu_op = 0;
    end
  end
endmodule
