module router_sync_tb();
reg detect_add, write_enb_reg, clock, resetn, read_enb_0, read_enb_1, read_enb_2;
reg empty_0, empty_1, empty_2, full_0, full_1, full_2;
reg [1:0] data_in;
wire vld_out_0, vld_out_1, vld_out_2, fifo_full, soft_reset_0, soft_reset_1, soft_reset_2; 
wire [2:0] write_enb;

router_sync DUT(detect_add, data_in, write_enb_reg, clock, resetn, read_enb_0, read_enb_1, read_enb_2, 
                empty_0, empty_1, empty_2, full_0, full_1, full_2, 
                vld_out_0, vld_out_1, vld_out_2, 
                write_enb, fifo_full, soft_reset_0, soft_reset_1, soft_reset_2);


initial 
    begin 
        clock = 1'b0;
        forever #5 clock = ~clock;
    end 

task reset;
    begin 
        @(negedge clock)    
            resetn = 1'b0;
        @(negedge clock)
            resetn = 1'b1;
    end 
endtask 

initial 
    begin
        reset;
        detect_add = 1'b1;
        data_in = 2'b01;
        read_enb_0 = 1'b0;
        read_enb_1 = 1'b1;
        read_enb_2 = 1'b0;
        write_enb_reg = 1'b1;
        full_0 = 1'b0;
        full_1 = 1'b1;
        full_2 = 1'b0;
        empty_0 = 1'b1;
        empty_1 = 1'b1;
        empty_2 = 1'b0;
        
    end

initial #400 $finish;
endmodule 
