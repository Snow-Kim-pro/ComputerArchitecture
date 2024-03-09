
`include "vending_machine_def.v"

module check_time_and_coin(clk, reset_n, i_input_coin, i_select_item, item_price, coin_value, o_available_item, current_state,
							o_return_coin,select_item,coin_total, wait_time);
	
	input clk;
	input reset_n;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0] i_select_item;
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];

	input [`kNumItems-1:0] o_available_item;
	input [1:0]current_state;
		
	output reg [`kNumCoins-1:0] o_return_coin;
	output reg [`kNumItems-1:0] select_item;  	// 선택한 item 저장할 레지스터
	output reg [31:0] coin_total;
	output reg [31:0] wait_time;
	 


	// 내부 변수 선언
	reg input_detected;  				// 동전 입력이나 아이템 선택이 감지되었는지를 나타내는 플래그
	reg [31:0] coin;					// 현재 coin 총량, "입력받은 coin의 양" 또는 "차감해야 할 coin의 양"
	reg [`kNumCoins-1:0] return_coin;	// return 해줘야 할 coin을 저장할 레지스터
	


	// initiate values
	initial begin
		o_return_coin = 0;
		select_item = 0;
		coin_total = 0;
		wait_time = 100;
		input_detected = 0;
		coin = 0;
		return_coin = 0;
	end

	// 1. coin 계산 파트
	always @(*) begin
		if(|i_input_coin) begin 
			if(i_input_coin[0])
				coin = coin_value[0]; // 100
			else if(i_input_coin[1])
				coin = coin_value[1]; // 500
			else if(i_input_coin[2])
				coin = coin_value[2]; // 1000
			else
				coin = 0;
		end	else if(current_state == `s2) begin
			if((select_item & o_available_item) == 4'b0001)
				coin = item_price[0]; // 400
			else if((select_item & o_available_item) == 4'b0010)
				coin = item_price[1]; // 500
			else if((select_item & o_available_item) == 4'b0100)
				coin = item_price[2]; // 1000
			else if((select_item & o_available_item) == 4'b1000)
				coin = item_price[3]; // 2000
			else 
				coin = 0;	
		end else if( |return_coin ) begin 
			if(return_coin == 3'b111)
				coin = 1600;
			else if(return_coin == 3'b110)
				coin = 1500;
			else if(return_coin == 3'b101)
				coin = 1100;
			else if(return_coin == 3'b100)
				coin = 1000;
			else if(return_coin == 3'b011)
				coin = 600;
			else if(return_coin == 3'b010)
				coin = 500;
			else if(return_coin == 3'b001)
				coin = 100;
			else	
				coin = 0;
		end else 
			coin = 0;		
	end

	// 2. "o_return_coin" 계산 파트
	always @(*) begin
		if(current_state == `s3) begin 
			if(1600 <= coin_total)
				return_coin = 3'b111;
			else if(1500 <= coin_total)
				return_coin = 3'b110;
			else if(1100 <= coin_total)
				return_coin = 3'b101;
			else if(1000 <= coin_total)
				return_coin = 3'b100;
			else if(600 <= coin_total)
				return_coin = 3'b011;
			else if(500 <= coin_total)
				return_coin = 3'b010;
			else if(0 < coin_total)
				return_coin = 3'b001;
			else	
				return_coin = 3'b000;
		end else
			return_coin = 3'b000;
	end
	
	/************************Sequential Logic******************************/

	// 동전 입력이나 아이템 선택이 감지되었을 때, input_detected 플래그를 설정(목적 : 1 Cycle delay)
	always @(posedge clk) begin
		if (!reset_n) 
			input_detected <= 1'b0;
		else if (|i_input_coin != 0 || |(i_select_item & o_available_item) != 0) 
			input_detected <= 1'b1;
		else
			input_detected <= 1'b0;
	end

	// wait_time : 클록과 리셋에 대한 처리 
	always @(posedge clk) begin
		if (!reset_n) begin
			wait_time <= 10;	
		end else begin
			if(input_detected)	
				wait_time <= 10;
			else if(current_state == `s3 && coin_total == 0)
				wait_time <= 10;
			else
				if(wait_time > 0) wait_time <= wait_time - 1;	
		end
	end

	// coin : 클록과 리셋에 대한 처리 
	always @(posedge clk) begin
		if (!reset_n) begin 
			coin_total <= 0;
		end else begin 
			if( |i_input_coin )
				coin_total <= coin_total + coin;
			else if(current_state == `s2 || (|return_coin))
				coin_total <= coin_total - coin;
		end
	end

	// o_return_coin : 클록과 리셋에 대한 처리 
	always @(posedge clk) begin
		if (!reset_n) begin 
			o_return_coin <= 0;
		end else begin 
			o_return_coin <= return_coin;
		end
	end

	// select_item : 클록과 리셋에 대한 처리
	always @(posedge clk) begin
		if(!reset_n) begin
			select_item <= 0;
		end else begin
			if(|i_select_item)
				select_item <= i_select_item;
		end
	end

endmodule 
