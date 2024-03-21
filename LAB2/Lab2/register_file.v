module register_file(input	reset,
                     input clk,
                     input [4:0] rs1,          // source register 1
                     input [4:0] rs2,          // source register 2
                     input [4:0] rd,           // destination register
                     input [31:0] rd_din,      // input data for rd
                     input write_enable,          // RegWrite signal
                     output [31:0] rs1_dout,   // output of rs 1
                     output [31:0] rs2_dout,   // output of rs 2
                     output [31:0] print_reg [0:31]);
  integer i;
  // Register file
  reg [31:0] rf[0:31];
  // Do not touch or use print_reg
  assign print_reg = rf;

  // TODO
  // Asynchronously read register file
  always @(*) begin
    case(rs1) //rs1의 값에 따라 rf번호에서 값을 불러와 rs1_dout에 저장.
      0: rs1_dout = rf[0];
      1: rs1_dout = rf[1];
      2: rs1_dout = rf[2];
      3: rs1_dout = rf[3];
      4: rs1_dout = rf[4];
      5: rs1_dout = rf[5];
      6: rs1_dout = rf[6];
      7: rs1_dout = rf[7];
      8: rs1_dout = rf[8];
      9: rs1_dout = rf[9];
      10: rs1_dout = rf[10];
      11: rs1_dout = rf[11];
      12: rs1_dout = rf[12];
      13: rs1_dout = rf[13];
      14: rs1_dout = rf[14];
      15: rs1_dout = rf[15];
      16: rs1_dout = rf[16];
      17: rs1_dout = rf[17];
      18: rs1_dout = rf[18];
      19: rs1_dout = rf[19];
      20: rs1_dout = rf[20];
      21: rs1_dout = rf[21];
      22: rs1_dout = rf[22];
      23: rs1_dout = rf[23];
      24: rs1_dout = rf[24];
      25: rs1_dout = rf[25];
      26: rs1_dout = rf[26];
      27: rs1_dout = rf[27];
      28: rs1_dout = rf[28];
      29: rs1_dout = rf[29];
      30: rs1_dout = rf[30];
      31: rs1_dout = rf[31];
      default: rs1_dout = 0;
    endcase
  end

  always @(*) begin
    case(rs2) //rs2의 값에 따라 rf번호에서 값을 불러와 rs2_dout에 저장.
      0: rs2_dout = rf[0];
      1: rs2_dout = rf[1];
      2: rs2_dout = rf[2];
      3: rs2_dout = rf[3];
      4: rs2_dout = rf[4];
      5: rs2_dout = rf[5];
      6: rs2_dout = rf[6];
      7: rs2_dout = rf[7];
      8: rs2_dout = rf[8];
      9: rs2_dout = rf[9];
      10: rs2_dout = rf[10];
      11: rs2_dout = rf[11];
      12: rs2_dout = rf[12];
      13: rs2_dout = rf[13];
      14: rs2_dout = rf[14];
      15: rs2_dout = rf[15];
      16: rs2_dout = rf[16];
      17: rs2_dout = rf[17];
      18: rs2_dout = rf[18];
      19: rs2_dout = rf[19];
      20: rs2_dout = rf[20];
      21: rs2_dout = rf[21];
      22: rs2_dout = rf[22];
      23: rs2_dout = rf[23];
      24: rs2_dout = rf[24];
      25: rs2_dout = rf[25];
      26: rs2_dout = rf[26];
      27: rs2_dout = rf[27];
      28: rs2_dout = rf[28];
      29: rs2_dout = rf[29];
      30: rs2_dout = rf[30];
      31: rs2_dout = rf[31];
      default: rs2_dout = 0;
    endcase
  end
  // Synchronously write data to the register file
  always @(posedge clk) begin
    if (write_enable) begin
      case(rd) //rd의 값에 따라 rd_din에 입력된 값을 rs1_dout에 저장.
        0: rf[0] <= rd_din;
        1: rf[1] <= rd_din;
        2: rf[2] <= rd_din;
        3: rf[3] <= rd_din;
        4: rf[4] <= rd_din;
        5: rf[5] <= rd_din;
        6: rf[6] <= rd_din;
        7: rf[7] <= rd_din;
        8: rf[8] <= rd_din;
        9: rf[9] <= rd_din;
        10: rf[10] <= rd_din;
        11: rf[11] <= rd_din;
        12: rf[12] <= rd_din;
        13: rf[13] <= rd_din;
        14: rf[14] <= rd_din;
        15: rf[15] <= rd_din;
        16: rf[16] <= rd_din;
        17: rf[17] <= rd_din;
        18: rf[18] <= rd_din;
        19: rf[19] <= rd_din;
        20: rf[20] <= rd_din;
        21: rf[21] <= rd_din;
        22: rf[22] <= rd_din;
        23: rf[23] <= rd_din;
        24: rf[24] <= rd_din;
        25: rf[25] <= rd_din;
        26: rf[26] <= rd_din;
        27: rf[27] <= rd_din;
        28: rf[28] <= rd_din;
        29: rf[29] <= rd_din;
        30: rf[30] <= rd_din;
        31: rf[31] <= rd_din;
        default:
      endcase
    end
  end
  // Initialize register file (do not touch)
  always @(posedge clk) begin
    // Reset register file
    if (reset) begin
      for (i = 0; i < 32; i = i + 1)
        // DO NOT TOUCH COMMENT BELOW
        /* verilator lint_off BLKSEQ */
        rf[i] = 32'b0;
        /* verilator lint_on BLKSEQ */
        // DO NOT TOUCH COMMENT ABOVE

      // DO NOT TOUCH COMMENT BELOW
      /* verilator lint_off BLKSEQ */
      rf[2] = 32'h2ffc; // stack pointer
      /* verilator lint_on BLKSEQ */
      // DO NOT TOUCH COMMENT ABOVE
    end
  end
endmodule
