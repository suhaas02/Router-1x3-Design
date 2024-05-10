// module router_fsm_tb();
// reg clock, resetn, pkt_valid; 
// reg parity_done, soft_reset_0, soft_reset_1, soft_reset_2, fifo_full; 
// reg [1:0]data_in;
// reg low_pkt_valid, fifo_empty_0, fifo_empty_1, fifo_empty_2;
// wire busy, detect_add, ld_state, laf_state, full_state, write_enb_reg, rst_int_reg, lfd_state;

// router_fsm DUT(clock, resetn, pkt_valid, parity_done, soft_reset_0, soft_reset_1, soft_reset_2, fifo_full, data_in, low_pkt_valid, fifo_empty_0, 
//                fifo_empty_1, fifo_empty_2, busy, detect_add, ld_state, laf_state, full_state, write_enb_reg, rst_int_reg, lfd_state);

// initial 
//     begin 
//         clock = 1'b0;
//         forever #5 clock = ~clock;
//     end 

// task rst();
//     begin 
//         @(negedge clock)
//             resetn = 1'b0;
//         @(negedge clock)
//             resetn = 1'b1;
//     end 
// endtask 

// task t1;
//     begin 
//         @(negedge clock)
//             pkt_valid = 1'b1;
//             data_in = 2'b01;
//             fifo_empty_1 = 1'b1;
//         @(negedge clock)
//         @(negedge clock)
//             fifo_full = 1'b0;
//             pkt_valid = 1'b0;
//         @(negedge clock)
//         @(negedge clock)
//             fifo_full = 1'b0;
//     end 
// endtask 

// initial 
//     begin 
//         rst;
//         #10;
//         t1; 
//     end 

// initial #250 $finish; 
// endmodule 

module router_fsm_tb();

reg clock,resetn,pkt_valid,fifo_full,fifo_empty_0,fifo_empty_1,fifo_empty_2,soft_reset_0,soft_reset_1,soft_reset_2,parity_done,low_packet_valid;
reg [1:0] data_in;
wire write_enb_reg,detect_add,ld_state,laf_state,lfd_state,full_state,rst_int_reg,busy;

parameter cycle=10;

router_fsm DUT(clock,resetn,pkt_valid,data_in,fifo_full,fifo_empty_0,fifo_empty_1,fifo_empty_2,soft_reset_0,soft_reset_1,soft_reset_2,parity_done,low_packet_valid,write_enb_reg,detect_add,ld_state,laf_state,lfd_state,full_state,rst_int_reg,busy);
  initial
   begin
    clock=1'b1;
    forever #cycle clock = ~clock;
   end

   task initialize;
   begin
   {pkt_valid,fifo_empty_0,fifo_empty_1,fifo_empty_2,fifo_full,parity_done,low_packet_valid}=0;
   end
   endtask

   task rst;
   begin
   @(negedge clock)
    resetn=1'b0;
   @(negedge clock)
    resetn=1'b1;
   end
   endtask

   task t1;
   begin
   @(negedge clock) 
   begin
   pkt_valid<=1;
   data_in[1:0]<=0;
   fifo_empty_0<=1;
   end              
   @(negedge clock) 
   @(negedge clock) 
   begin
   fifo_full<=0;
   pkt_valid<=0;
   end
   @(negedge clock) 
   @(negedge clock) 
   fifo_full<=0;
   end
   endtask

   task t2;
   begin
   @(negedge clock)
   begin
   pkt_valid<=1;
   data_in[1:0]<=0;
   fifo_empty_0<=1;
   end
   @(negedge clock)
   @(negedge clock)
   fifo_full<=1;
   @(negedge clock)
   fifo_full<=0;
   @(negedge clock)
   begin
   parity_done<=0;
   low_packet_valid<=1;
   end
   @(negedge clock)
   @(negedge clock)
   fifo_full<=0;
   end
   endtask

   task t3;
   begin
   @(negedge clock) 
   begin
   pkt_valid<=1;
   data_in[1:0]<=0;
   fifo_empty_0<=1;
   end
   @(negedge clock) 
   @(negedge clock)
   fifo_full<=1;
   @(negedge clock) 
   fifo_full<=0;
   @(negedge clock)  
   begin
      low_packet_valid<=0;
	parity_done<=0;

   end  // LP
   @(negedge clock)
   begin
   fifo_full<=0;
   pkt_valid<=0;
   end
   @(negedge clock) 
   @(negedge clock) 
   fifo_full<=0;
   end
   endtask
   
   task t4;
   begin
   @(negedge clock)  
   begin
   pkt_valid<=1;
   data_in[1:0]<=0;
   fifo_empty_0<=1;
   end        
   @(negedge clock)   
   @(negedge clock)   
   begin
   fifo_full<=0;
   pkt_valid<=0;
   end
   @(negedge clock)   
   @(negedge clock)  
   fifo_full<=1;
   @(negedge clock)   
   fifo_full<=0;
  @(negedge clock)    
   parity_done=1;
   end
   endtask


initial
   begin
    rst;
    initialize;
        t1;
        t2;
        t3;
        t4;
    end 
   endmodule