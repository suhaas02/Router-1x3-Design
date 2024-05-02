module router_sync (input detect_add, 
                    input [1:0] data_in, 
                    input write_enb_reg, 
                    input clock, 
                    input resetn,                     
                    input read_enb_0,
                    input read_enb_1,
                    input read_enb_2,
                    input empty_0,
                    input empty_1,
                    input empty_2, 
                    input full_0, 
                    input full_1,
                    input full_2,
                    output vld_out_0,
                    output vld_out_1,
                    output vld_out_2,
                    output reg [2:0] write_enb, //one hot encoding
                    output reg fifo_full, 
                    output reg soft_reset_0,
                    output reg soft_reset_1,
                    output reg soft_reset_2);


//extracting address
reg [1:0] address;
always@(posedge clock)
    begin 
        if(!resetn)
            address <= 2'b0;
        else if(detect_add == 1'b1)
            address <= data_in;//address of the destination must be here
    end 

//fifo full
always@(posedge clock)
    begin 
        case(address)
            2'b00: fifo_full <= full_0;
            2'b01: fifo_full <= full_1;
            2'b10: fifo_full <= full_2;
            default: fifo_full <= 1'b0;
        endcase
    end 


//one hot encoding for write enable
always@(posedge clock)
    begin 
        if(write_enb_reg)
            begin
                case(address)
                2'b00: begin 
                            write_enb <= 3'b001;
                       end
                2'b01: begin 
                            write_enb <= 3'b010;
                       end
                // write_enb <= 3'b010;
                2'b10: begin 
                            write_enb <= 3'b100;
                       end 
                // write_enb <= 3'b100;
                default: write_enb <= 3'b000;
                endcase 
            end
    end 

assign vld_out_0 = ~empty_0;
assign vld_out_1 = ~empty_1;
assign vld_out_2 = ~empty_2;

//we need to count 30 clock cycles, after that the soft_reset must be high
reg [4:0] temp0 = 5'b00000;
reg [4:0] temp1 = 5'b00000;
reg [4:0] temp2 = 5'b00000;
always@(posedge clock)
    begin 
        if(!resetn)
            begin
                soft_reset_0 <= 1'b0;
                temp0 <= 5'd0;
            end
        else if(vld_out_0)
            begin 
                if(!read_enb_0)
                    begin 
                        if(temp0 == 5'd29)
                            begin 
                                soft_reset_0 <= 1'b1;
                                temp0 <=5'd0;
                            end
                        else 
                            begin 
                                soft_reset_0 = 1'b0;
                                temp0 <= temp0 + 1'b1;
                            end
                    end 
            end
        else
            temp0 <= 5'd0;
    end

always@(posedge clock)
    begin 
        if(!resetn)
            begin
                soft_reset_1 <= 1'b0;
                temp1 <= 5'd0;
            end
        else if(vld_out_1)
            begin 
                if(!read_enb_1)
                    begin 
                        if(temp1 == 5'd29)
                            begin 
                                soft_reset_1 <= 1'b1;
                                temp1 <=5'd0;
                            end
                        else 
                            begin 
                                soft_reset_1 = 1'b0;
                                temp1 <= temp1 + 1'b1;
                            end
                    end 
            end
        else
            temp1 <= 5'd0;
    end

always@(posedge clock)
    begin 
        if(!resetn)
            begin
                soft_reset_2 <= 1'b0;
                temp2 <= 5'd0;
            end
        else if(vld_out_2)
            begin 
                if(!read_enb_2)
                    begin 
                        if(temp2 == 5'd29)
                            begin 
                                soft_reset_2 <= 1'b1;
                                temp2 <=5'd0;
                            end
                        else 
                            begin 
                                soft_reset_2 = 1'b0;
                                temp2 <= temp2 + 1'b1;
                            end
                    end 
            end
        else
            temp2 <= 5'd0;
    end


endmodule 