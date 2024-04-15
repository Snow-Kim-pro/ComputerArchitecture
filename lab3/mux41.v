
module mux41 #(parameter data_width = 32) (S, D0, D1, D2, D3, Y);

    input [1 : 0]S; 
    input [data_width-1 : 0] D0; 
    input [data_width-1 : 0] D1;
    input [data_width-1 : 0] D2; 
    input [data_width-1 : 0] D3;
    output reg [data_width-1 : 0] Y;

    always @(*)begin 
        case(S) 
            2`b00 : Y = D0;
            2`b01 : Y = D1;
            2`b10 : Y = D2;
            2`b11 : Y = D3;
        endcase
    end

endmodule
