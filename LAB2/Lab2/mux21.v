
module mux21(S, D0, D1, Y);

    input S; 
    input D0; 
    input D1;
    output Y;

    assign Y = S ? D1 : D0 ; 

endmodule
