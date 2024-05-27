// Lab5_62668_20200045_20200703
`include "cpu.v"

module top(input reset,
           input clk,
           output is_halted,
           output [31:0] hit_ratio,
           output [31:0] print_reg [0:31]);

  cpu cpu(
    .reset(reset), 
    .clk(clk),
    .is_halted(is_halted),
    .hit_ratio(hit_ratio),
    .print_reg(print_reg)
  );

endmodule
