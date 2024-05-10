// module router_reg_tb();
// reg clock, resetn, pkt_valid, fifo_full, rst_int_reg;
// reg [7:0] data_in; 
// reg detect_add, ld_state, laf_state,full_state, lfd_state; 
// wire [7:0] dout;

// router_reg DUT(clock, resetn, pkt_valid, fifo_full, rst_int_reg, data_in, detect_add, ld_state, laf_state, full_state, lfd_state, dout);


// initial 
//     begin 
//         clock = 1'b0;
//         forever #5 clock = ~clock;
//     end 

// task reset;
//     begin 
//         @(negedge clock)
//             resetn = 1'b0;
//         @(negedge clock)
//             resetn = 1'b1;
//     end 
// endtask 

// //good packet , error will be 0 for this 
// integer i;
// task good_packet_gen;
//     reg [7:0] payload_data, parity, header; 
//     reg [5:0] payload_len;
//     reg [1:0] addr;
//     begin 
//         @(negedge clock)
//             payload_len = 6'd4;
//             addr = 2'b10;
//             pkt_valid = 1;
//             detect_add = 1;
//             header = {payload_len, addr};
//             parity = 8'h00 ^ header; 
//             data_in = header;
//         @(negedge clock)
//             detect_add = 0;
//             lfd_state = 1;
//             full_state = 0;
//             fifo_full = 0;
//             laf_state = 0;
//         for(i = 0; i < payload_len; i = i + 1)
//             begin 
//                 @(negedge clock)
//                     lfd_state = 0;
//                     ld_state = 1; 
//                     payload_data = {$random} % 256; 
//                     data_in = payload_data; 
//                     parity = parity ^ data_in; 
//             end
//         @(negedge clock)
//             pkt_valid = 0;
//             data_in = parity; 
//         @(negedge clock)
//             ld_state = 0;
//     end 
// endtask 

// integer j;
// task bad_packet_gen;
//     reg [7:0] payload_data, parity, header; 
//     reg [5:0] payload_len;
//     reg [1:0] addr;
//     begin 
//         @(negedge clock)
//             payload_len = 6'd4;
//             addr = 2'b10;
//             pkt_valid = 1;
//             detect_add = 1;
//             header = {payload_len, addr};
//             parity = 8'h00 ^ header; 
//             data_in = header;
//         @(negedge clock)
//             detect_add = 0;
//             lfd_state = 1;
//             full_state = 0;
//             fifo_full = 0;
//             laf_state = 0;
//         for(j = 0; j < payload_len; j = j + 1)
//             begin 
//                 @(negedge clock)
//                     lfd_state = 0;
//                     ld_state = 1; 
//                     payload_data = {$random} % 256; 
//                     data_in = payload_data; 
//                     parity = parity ^ data_in; 
//             end
//         @(negedge clock)
//             pkt_valid = 0;
//             data_in = {$random} % 256; 
//         @(negedge clock)
//             ld_state = 0;
//     end 
// endtask 

// initial 
//     begin 
//         reset; 
//         #10; 
//         good_packet_gen; 
//         #10; 
//         bad_packet_gen; 
//     end 

// initial #150 $finish; 

// endmodule 

module router_reg_tb();
reg clock,resetn,pkt_valid,fifo_full,detect_add,ld_state,laf_state,full_state,lfd_state,rst_int_reg;
reg [7:0]data_in;
wire err,parity_done,low_pkt_valid;
wire [7:0]dout;
integer i;
parameter cycle=10;


router_reg DUT(clock,resetn,pkt_valid,data_in,fifo_full,detect_add,ld_state,laf_state,full_state,lfd_state,rst_int_reg,err,parity_done,low_pkt_valid,dout);

initial
begin
  clock=1'b0;
  forever #(cycle/2) clock=~clock;
end

task rst();
  begin
    @(negedge clock)
    resetn=1'b0;
    @(negedge clock)
    resetn=1'b1;
  end
endtask

task initialize();
  begin
   pkt_valid<=1'b0;
   fifo_full<=1'b0;
   detect_add<=1'b0;
   ld_state<=1'b0;
   laf_state<=1'b0;
   full_state<=1'b0;
   lfd_state<=1'b0;
   rst_int_reg<=1'b0;
  end
endtask

task good_pkt_gen_reg;

reg[7:0]payload_data,parity1,header1;
reg[5:0]payload_len;
reg[1:0]addr;

begin
 @(negedge clock)
 payload_len=6'd5;
 addr=2'b10;
 pkt_valid=1;
 detect_add=1;
 header1={payload_len,addr};
 parity1=0^header1;
 data_in=header1;
 @(negedge clock);
 detect_add=0;
 lfd_state=1;
 full_state=0;
 fifo_full=0;
 laf_state=0;
 for(i=0;i<payload_len;i=i+1)
 begin
 @(negedge clock);
  lfd_state=0;
  ld_state=1;
  payload_data={$random}%256;
  data_in=payload_data;
  parity1=parity1^data_in;
 end
 @(negedge clock);
 pkt_valid=0;
 data_in=parity1;
 @(negedge clock);
 ld_state=0;
 end
 endtask


task bad_pkt_gen_reg;
reg[7:0]payload_data,parity1,header1;
reg[5:0]payload_len;
reg[1:0]addr;

begin
 @(negedge clock)
 payload_len=6'd5;
 addr=2'b10;
 pkt_valid=1;
 detect_add=1;
 header1={payload_len,addr};
 parity1=0^header1;
 data_in=header1;
 @(negedge clock);
 detect_add=0;
 lfd_state=1;
 full_state=0;
 fifo_full=0;
 laf_state=0;
 for(i=0;i<payload_len;i=i+1)
 begin
 @(negedge clock);
  lfd_state=0;
  ld_state=1;
  payload_data={$random}%256;
  data_in=payload_data;
  parity1=parity1^data_in;
 end
 @(negedge clock);
 pkt_valid=0;
 data_in=46;
 @(negedge clock);
 ld_state=0;
 end
 endtask
 
 initial
 begin
 rst();
 initialize();
 good_pkt_gen_reg;
 rst();
 bad_pkt_gen_reg;
 #20
 $finish;
 end
 endmodule