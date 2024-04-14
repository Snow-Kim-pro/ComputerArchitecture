
module PVSWriteEn(reset, clk, PVSclock);
    input reset;
    input clk;
    output reg PVSclock;

    initial begin
        PVSclock = 0;
    end

    always @(posedge clk) begin
        if (reset)
            PVSclock <= 0;
        else    
            PVSclock <= 0;           
    end
endmodule
