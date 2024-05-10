module router_top_tb();

reg [7:0]data_in;
reg pkt_valid,clock,resetn,read_enb_0,read_enb_1,read_enb_2;
wire [7:0] data_out_0,data_out_1,data_out_2;
wire vld_out_0,vld_out_1,vld_out_2,err,busy;

router_top DUT(clock,resetn,pkt_valid,read_enb_0,read_enb_1,read_enb_2,data_in,
				    busy,err,vld_out_0,vld_out_1,vld_out_2,data_out_0,data_out_1,data_out_2);
			   
initial 
	begin
	clock = 1;
	forever 
	#5 clock=~clock;
	end
	
	
	task reset;
		begin
		    @(negedge clock)
			resetn=1'b0;
			@(negedge clock)
			resetn=1'b1;
		end
	endtask
	
	task initialize;
	    begin
            data_in = 8'b0;
		   {read_enb_0, read_enb_1, read_enb_2, pkt_valid}=0;
		end
    endtask

integer i; 
task pkt_gen_14; 
    reg [7:0] payload_data, parity, header; 
    reg [5:0] payload_len;
    reg [1:0] addr;
    
    begin 
        @(negedge clock)
        wait(~busy)
        @(negedge clock)
        payload_len = 6'd14;
        addr = 2'b01;
        header = {payload_len, addr};
        parity = 0; 
        data_in = header; 
        pkt_valid = 1'b1;
        parity = parity ^ header; 
        @(negedge clock)
        wait(~busy)
        for(i = 0; i < payload_len; i = i + 1)
            begin 
                @(negedge clock)
                wait(~busy)
                payload_data = {$random} % 256; 
                data_in = payload_data; 
                parity = parity ^ payload_data;
            end 
        @(negedge clock)
        wait(~busy)
        pkt_valid = 0; 
        data_in = parity; 
     
    @(negedge clock)
    read_enb_1 = 1'b0;

    wait(DUT.FIFO1.empty)
    @(negedge clock)
    read_enb_1 = 1'b1;
    end
endtask  

task pkt_gen_16; 
    reg [7:0] payload_data, parity, header; 
    reg [5:0] payload_len;
    reg [1:0] addr;
    
    begin 
        @(negedge clock)
        wait(~busy)
        @(negedge clock)
        payload_len = 6'd16;
        addr = 2'b01;
        header = {payload_len, addr};
        parity = 0; 
        data_in = header; 
        pkt_valid = 1'b1;
        parity = parity ^ header; 
        @(negedge clock)
        wait(~busy)
        for(i = 0; i < payload_len; i = i + 1)
            begin 
                @(negedge clock)
                wait(~busy)
                payload_data = {$random} % 256; 
                data_in = payload_data; 
                parity = parity ^ payload_data;
            end 
        @(negedge clock)
        wait(~busy)
        pkt_valid = 0; 
        data_in = parity; 
     
    @(negedge clock)
    read_enb_1 = 1'b1;
    wait(DUT.FIFO1.empty)
    @(negedge clock)
    read_enb_1 = 1'b0;
    end
endtask  

task pkt_gen_6; 
    reg [7:0] payload_data, parity, header; 
    reg [5:0] payload_len;
    reg [1:0] addr;
    
    begin 
        @(negedge clock)
        wait(~busy)
        @(negedge clock)
        payload_len = 6'd6;
        addr = 2'b01;
        header = {payload_len, addr};
        parity = 0; 
        data_in = header; 
        pkt_valid = 1'b1;
        parity = parity ^ header; 
        @(negedge clock)
        wait(~busy)
        for(i = 0; i < payload_len; i = i + 1)
            begin 
                @(negedge clock)
                wait(~busy)
                payload_data = {$random} % 256; 
                data_in = payload_data; 
                parity = parity ^ payload_data;
            end 
        @(negedge clock)
        wait(~busy)
        pkt_valid = 0; 
        data_in = parity; 
     
    @(negedge clock)
    read_enb_1 = 1'b1;
    wait(DUT.FIFO1.empty)
    @(negedge clock)
    read_enb_1 = 1'b0;
    end
endtask  

initial 
    begin 
        initialize;
        reset; 
        pkt_gen_14; 
        // reset;
        #10; 
        // pkt_gen_16;
        // reset; 
        // #10;
        // pkt_gen_6;
        // reset;  
        // #10;
    end
initial #300 $finish; 
endmodule 