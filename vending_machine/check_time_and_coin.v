`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,clk,reset_n,wait_time,o_return_coin, current_total);
	input clk;
	input reset_n;
	input [`kTotalBits-1:0] current_total;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	output reg  [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;

reg [2:0] prev_i_input_coin;
reg [3:0] prev_i_select_item;

	// initiate values
	initial begin
		// TODO: initiate values
		wait_time = 0;
		o_return_coin = 0;
	end

	always @(*) begin
		// TODO: o_return_coin
		if(current_total >= 1000) begin
			o_return_coin[2] = 1'b1; //+1000원
			if (current_total >= 1500) begin
				o_return_coin[1] = 1'b1; //+ 500원
				if(current_total >= 1600) begin
					o_return_coin[0] = 1'b1; //총 1600원
				end else begin
					o_return_coin[0] = 1'b0; //총 1500원
				end
			end else begin
				o_return_coin[1] = 1'b0;
				if(current_total >= 1100) begin
					o_return_coin[0] = 1'b1; //총 1100원
				end else begin
					o_return_coin[0] = 1'b0; //총 1000원
				end
			end
		end else begin
			o_return_coin[2] =1'b0;
			if(current_total >= 500) begin
				o_return_coin[1] =1'b1;
				if(current_total >= 600) begin
					o_return_coin[0] =1'b1;
				end else begin
					o_return_coin[0] =1'b0;
				end
			end else begin
				o_return_coin[1] = 1'b0; 
				if(current_total >= 100) begin
					o_return_coin[0] =1'b1;
				end else begin
					o_return_coin[0] =1'b0;
				end
			end
		end
	end

	// update coin return time
	always @(i_input_coin, i_select_item) begin
		// TODO: update coin return time
	end

	

	always @(posedge clk ) begin
		if (!reset_n) begin
		// TODO: reset all states.
		wait_time <= 0;
		end
		else begin
		// TODO: update all states.
			if ((i_input_coin !== prev_i_input_coin) || (i_select_item !== prev_i_select_item)) begin
    		    wait_time <= 10; 
    		end else begin
    	    	if (wait_time > 0) begin
            		wait_time <= wait_time - 1;
				end
			end
    	end
    	prev_i_input_coin <= i_input_coin;
    	prev_i_select_item <= i_select_item;
	end
endmodule 
