// module router_fifo_tb();
// reg clock, resetn, write_enb, read_enb, soft_reset, lfd_state; 
// reg [7:0] data_in;
// wire empty, full, data_out; 

// fifo DUT(clock, resetn, write_enb, soft_reset, read_enb, data_in, lfd_state, empty, full, data_out);

// task initialize;
//     begin 
//         write_end = 1'b0;
//         soft_reset = 1'b0;
//         read_enb = 1'b0;
//         data_in = 9'b0;
//         lfd_state = 1'b0;
//     end
// endtask 

// initial 
//     begin 
//         clock = 1'b0;
//         forever #5 clock = ~clock;
//     end

// task resetn;
//     begin 
//         @(negedge clock)
//             resetn = 1'b1;
//         @(negedge clock)
//             resetn = 1'b0;
//     end 
// endtask 


module router_fifo_tb();

reg clock,resetn,soft_reset,write_enb,read_enb,lfd_state;
reg [7:0]data_in;
wire full,empty;
wire [7:0]data_out;

reg[7:0]header,parity;

reg[1:0]addr;
integer i, k;

router_fifo DUT(clock,resetn, write_enb, soft_reset, read_enb, data_in, lfd_state, empty, full,data_out);

initial
begin
  clock=1'b0;
  forever #5 clock = ~clock;
end


task rst();
  begin
    @(negedge clock)
    resetn=1'b0;
    @(negedge clock)
    resetn=1'b1;
  end
endtask

task soft_rst();
  begin
      @(negedge clock)
      soft_reset=1'b1;
      @(negedge clock)
      soft_reset=1'b0;
  end
endtask


task initialize();
  begin
    write_enb=1'b0;
    soft_reset=1'b0;
    read_enb=1'b0;
    data_in=0;
    lfd_state=1'b0;
  end
endtask

task write();
    reg[7:0]payload_data;
	reg[5:0]payload_len;
     begin
     @(negedge clock);
     payload_len=6'd14;
     addr=2'b01;
     header={payload_len,addr};
     data_in=header;
     lfd_state=1'b1; write_enb=1;
     
     for(i=0;i<payload_len;i=i+1)

     begin
    
     @(negedge clock);
     lfd_state = 0;
     payload_data={$random}%256;
     data_in=payload_data;
     end
   
     @(negedge clock);
     parity={$random}%256;
     data_in=parity;
     end
	 endtask


	 
task read;
    begin 
      @(negedge clock)
            read_enb = 1'b1;
    end 
endtask


initial 
begin
initialize; 
rst();
write();
write_enb = 0;

for(k = 0; k < 16; k = k + 1)
    begin 
        read;
    end
// read;
// read_enb = 0;


#250 $finish;
end
endmodule