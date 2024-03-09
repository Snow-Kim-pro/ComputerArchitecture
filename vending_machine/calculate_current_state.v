
`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,item_price,coin_value,current_total,
current_total_nxt,wait_time,o_return_coin,o_available_item,o_output_item, return_total);


	input [`kNumCoins-1:0] i_input_coin,o_return_coin;
	input [`kNumItems-1:0]	i_select_item;			
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];	
	input [`kTotalBits-1:0] current_total;
	input [31:0] wait_time;
	output reg [`kNumItems-1:0] o_available_item,o_output_item;
	output reg  [`kTotalBits-1:0] current_total_nxt, return_total;
	reg [`kTotalBits-1:0] input_total, output_total;
	integer i;	
	reg [`kTotalBits-1:0] a;
	// Combinational logic for the next states
	always @(*) begin
		// TODO: current_total_nxt
		// You don't have to worry about concurrent activations in each input vector (or array).
		// Calculate the next current_total state.
		input_total = (i_input_coin[0] * coin_value[0][30:0]) + (i_input_coin[1] * coin_value[1][30:0]) + (i_input_coin[2] * coin_value[2][30:0]);
		return_total =  (o_return_coin[0] * coin_value[0][30:0]) + (o_return_coin[1] * coin_value[1][30:0]) + (o_return_coin[2] * coin_value[2][30:0]);
		a = current_total + input_total - output_total;
		if(wait_time == 0) begin
			current_total_nxt = a - return_total;
		end
		else begin
			current_total_nxt = a;
		end
	end
	
	
	// Combinational logic for the outputs
	always @(*) begin
		// TODO: o_available_item
		for (i = 0; i < `kNumItems; i = i + 1) begin
			if(item_price[i] <= current_total ) begin
				o_available_item[i] = 1'b1;
			end else begin
				o_available_item[i] = 1'b0;
			end
		end
		// TODO: o_output_item
		if(wait_time > 0) begin
			for (i = 0; i < `kNumItems; i = i + 1) begin
				if((i_select_item[i] * item_price[i] <= current_total) && (i_select_item[i] != 0)) begin
					o_output_item[i] = 1'b1;
				end else begin
					o_output_item[i] = 1'b0;
				end
			end
			output_total = (o_output_item[0] * item_price[0][30:0]) + (o_output_item[1] * item_price[1][30:0]) + (o_output_item[2] * item_price[2][30:0]) + (o_output_item[3] * item_price[3][30:0]);
		end else begin
			o_output_item = 0;
			output_total = 0;
		end
	end
 
	


endmodule 
