`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,clk,reset_n,wait_time,o_return_coin, current_total);
	input clk;
	input reset_n;
	input [`kTotalBits-1:0] current_total;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	output reg  [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;
	// initiate values
	initial begin
		// TODO: initiate values
		wait_time = 0;
		o_return_coin = 0;
	end


	// update coin return time
	always @(i_input_coin, i_select_item) begin
		// TODO: update coin return time
	end

	always @(*) begin
		// TODO: o_return_coin
		if(current_total > 1600) begin
			o_return_coin[2] = 1'b1; 
		end else begin
			o_return_coin[2] = 1'b0;
		end
		if(current_total > 600) begin
			o_return_coin[1] = 1'b1;
		end else begin
			o_return_coin[1] = 1'b0;
		end
		if(current_total > 100) begin
			o_return_coin[0] = 1'b1;
		end else begin
			o_return_coin[0] = 1'b0;
		end
	end

	always @(posedge clk ) begin
		if (!reset_n) begin
		// TODO: reset all states.
		
		wait_time <= 100;
		end
		else begin
		// TODO: update all states.
		
		wait_time <= wait_time - 1;
		end
	end
endmodule 
