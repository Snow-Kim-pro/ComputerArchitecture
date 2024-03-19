
module mux21 #(parameter data_width = 32) (S, D0, D1, Y);

    input S; 
    input [data_width-1 : 0] D0; 
    input [data_width-1 : 0] D1;
    output [data_width-1 : 0] Y;

    assign Y = S ? D1 : D0 ; 

endmodule
