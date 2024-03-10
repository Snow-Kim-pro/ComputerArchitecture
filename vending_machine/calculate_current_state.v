
`include "vending_machine_def.v"

module calculate_current_state(clk, reset_n, i_input_coin, i_select_item, select_item, item_price, coin_total, wait_time, i_trigger_return,
								 o_available_item, o_output_item, current_state);
	
	input clk;
	input reset_n;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0] i_select_item;
	input [`kNumItems-1:0] select_item;
	input [31:0] item_price [`kNumItems-1:0];

	input [31:0] coin_total;
	input [31:0] wait_time;
	input i_trigger_return;

	output reg [`kNumItems-1:0] o_available_item;
	output reg [`kNumItems-1:0] o_output_item;
	output reg [1:0]current_state;



	// 내부 변수 선언
	reg [1:0] next_state; 					// 상태를 저장할 레지스터
	reg [1:0] trigger_return;				// for, trigger 클럭 delay
	reg [`kNumItems-1:0] output_item;		// output item 저장할 레지스터
	integer i;

	
	// 1. state 정의를 위한 Combinational Logic
	// "상태(state) 정의 in <vending_machine_def>
	always @(*) begin
		case(current_state)
			`s0 : begin 
				if ( |i_input_coin ) // 비트 OR 축약
					next_state = `s1; // 동전 입력 시 동전 입력 상태로
				else if ((trigger_return == 2'b11) && (coin_total != 0))
					next_state = `s3; // 반환 버튼 입력 시 동전 반환 상태로
				else
					next_state = `s0; // 그 외에는 대기 상태 유지
			end
			`s1 : begin 
				if ( |i_input_coin )
					next_state = `s1; // 동전 입력 시 동전 입력 상태(s1) 그대로
				else if ( |i_select_item )
					next_state = `s2;
				else if (((trigger_return == 2'b11) && (coin_total != 0)) || wait_time == 0)
					next_state = `s3; // 반환 버튼 입력 시 동전 반환 상태로
				else
					next_state = `s1; // 그 외에는 대기 상태 유지
			end
			`s2 : begin 
				if( |(select_item & o_available_item) ) 
					next_state = `s1;
				else 
					next_state = `s1;
				
			end
			`s3 : begin 
				// Return 처리 이후 coin_total이 0이 되면 대기 상태(s0)로 이동
				if(coin_total == 0)
					next_state = `s0;
				else
					next_state = `s3;
			end
			default : begin 
				next_state = `s0; 
			end
		endcase
	end

	// 2. output_item을 위한 Combinational Logic
	always @(*) begin 
		if(current_state == `s2) begin 
			if(|(select_item & o_available_item))  
				output_item = select_item;
			else
				output_item = 4'b0000;
		end else
			output_item = 4'b0000;
	end

	// 3. "o_available_item" 출력 파트
	always @(*) begin	
		for (i = 0; i < `kNumItems; i = i + 1) begin
			if(item_price[i] <= coin_total) 
				o_available_item[i] = 1'b1;
			else
				o_available_item[i] = 1'b0;
		end
	end

	/************************Sequential Logic******************************/

	// state, o_output_item  : 클록과 리셋에 대한 처리 
	always @(posedge clk) begin
		if (!reset_n) begin 
			current_state <= `s0; 
			o_output_item <= 0;
		end else begin 
			current_state <= next_state; 
			o_output_item <= output_item;
		end
	end

	// i_trigger_return : 3 cycle delay
	always @(posedge clk) begin
		if (!reset_n) begin
			trigger_return <= 2'b00;	
		end else begin
			if(i_trigger_return == 0)
				trigger_return <= 2'b00;	
			else if((i_trigger_return == 1) && (trigger_return == 2'b00))
				trigger_return <= 2'b01;
			else if(trigger_return == 2'b01)
				trigger_return <= 2'b10;	
			else if(trigger_return == 2'b10)
				trigger_return <= 2'b11;
		end
	end	

endmodule 
