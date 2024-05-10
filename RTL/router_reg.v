// module router_reg(input clock, resetn, pkt_valid, fifo_full, rst_int_reg, 
//                   input [7:0] data_in,
//                   input detect_add, ld_state, laf_state, full_state, lfd_state, 
//                   output parity_done, low_pkt_valid, err, 
//                   output reg [7:0] dout);

// reg [7:0] hold_header; 
// reg [7:0] fifo_full_state;
// reg [7:0] internal_parity; 
// reg [7:0] packet_parity; 

// //logic for dout
// always@(posedge clock)
//     begin 
//         if(!resetn)
//             dout <= 0;
		
//         else if(detect_add && pkt_valid && data_in[1:0] != 2'b11)
//             dout <= dout; 
//         else if(lfd_state)
//             dout <= hold_header; 
//         else if(ld_state && !fifo_full)
//             dout <= data_in; 
//         else if(ld_state && fifo_full)
//             fifo_full_state <= data_in; 
//         else if(!laf_state)
//             dout <= fifo_full_state; 
//         else
//             dout <= dout; 
//     end

// //register full state logic 
// always@(posedge clock)
//     begin 
//         if(!resetn)
//             internal_parity <= 8'b0;
//         else if(detect_add)
//             internal_parity <= 8'b0; 
//         else if(lfd_state)
//             internal_parity <= internal_parity ^ hold_header;
//         else if(pkt_valid && ld_state && !full_state)
//             internal_parity <= internal_parity ^ data_in; 
//         else if(rst_int_reg)
//             internal_parity <= 8'b0;
//         else
//             internal_parity <= internal_parity;
//     end 

// //packet parity logic 
// always@(posedge clock)
//     begin 
//         if(!resetn)
//             packet_parity <= 8'b0;
//         else if(detect_add)
//             packet_parity <= 8'b0;
//         else if(ld_state && !pkt_valid)
//             packet_parity <= data_in;
//         else if(rst_int_reg)
//             packet_parity <= 8'b0;
//         else 
//             packet_parity <= packet_parity; 
//     end
        
// //register header logic

// always@(posedge clock)
//     begin 
//         if(!resetn)
//             hold_header <= 8'b0;
//         else if(detect_add && pkt_valid && data_in[1:0] != 2'b11)
//             hold_header <= data_in; 
//         else
//             hold_header <= hold_header; 
//     end 

// // always@(posedge clock)
// // begin
// //     if(rst_int_reg)
// //         begin 
// //             packet_parity <= 8'b0;
// //             internal_parity <= 8'b0;
// //         end 
// //     else    
// //         begin 
// //             packet_parity <= packet_parity; 
// //             internal_parity <= internal_parity; 
// //         end 
// // end

// assign parity_done = (pkt_valid == 1'b0 && ld_state == 1'b1 && lfd_state == 1'b0) ? 1'b1 : 1'b0;
// assign low_pkt_valid = !pkt_valid; 
// assign err = (packet_parity == internal_parity) ? 1'b1 : 1'b0; 

// endmodule 

module router_reg(clock,resetn,pkt_valid,data_in,fifo_full,detect_add,
                  ld_state,laf_state,full_state,lfd_state,rst_int_reg,err,
                  parity_done,low_pkt_valid,dout);

input clock,resetn,pkt_valid,fifo_full,detect_add,ld_state,laf_state,full_state,lfd_state,rst_int_reg;
input [7:0]data_in;
output reg err,parity_done,low_pkt_valid;
output reg [7:0]dout;
reg [7:0]header,int_reg,int_parity,ext_parity;
  
	always@(posedge clock)
   	begin
      if(!resetn)
      	begin
	     dout    	 <=0;
	     header  	 <=0;
	     int_reg 	 <=0;
       	end
      else if(detect_add && pkt_valid && data_in[1:0]!=2'b11)
	     header<=data_in;
      else if(lfd_state)
	     dout<=header;
      else if(ld_state && !fifo_full)
	     dout<=data_in;
      else if(ld_state && fifo_full)
	     int_reg<=data_in;
      else if(laf_state)
	     dout<=int_reg;
     end

    always@(posedge clock)
	   	begin
            if(!resetn)
	 			low_pkt_valid<=0; 
         	else if(rst_int_reg)
	 			low_pkt_valid<=0;
            else if(ld_state && !pkt_valid) 
         		low_pkt_valid<=1;
		end
	
	always@(posedge clock)
	begin
      if(!resetn)
	  parity_done<=0;
     else if(detect_add)
	  parity_done<=0;
      else if((ld_state && !fifo_full && !pkt_valid)
              ||(laf_state && low_pkt_valid && !parity_done))
	  parity_done<=1;
	end

	always@(posedge clock)
	begin
      if(!resetn)
	 int_parity<=0;
	else if(detect_add)
	 int_parity<=0;
	else if(lfd_state && pkt_valid)
	 int_parity<=int_parity^header;
	else if(ld_state && pkt_valid && !full_state)
	 int_parity<=int_parity^data_in;
	else
	 int_parity<=int_parity;
	end
	 
	always@(posedge clock)
		begin
          if(!resetn)
	  			err<=0;
	      else if(parity_done)
	       		begin
	 				if (int_parity==ext_parity)
	    				err<=0;
	 				else 
	    			err<=1;
	 			end
	 	   else
	    		err<=0;
	    end

	always@(posedge clock)
	begin
      if(!resetn)
	  		ext_parity<=0;
      else if(detect_add)
	  		ext_parity<=0;
      else if((ld_state && !fifo_full && !pkt_valid) || (laf_state && !parity_done && low_pkt_valid))
	  		ext_parity<=data_in;
	 end

endmodule