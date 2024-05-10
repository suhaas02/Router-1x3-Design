//defining all the ports
module router_fsm(input clock, resetn, pkt_valid, 
                  input parity_done, soft_reset_0, soft_reset_1, soft_reset_2, fifo_full, 
                  input [1:0] data_in,
                  input low_pkt_valid, fifo_empty_0, fifo_empty_1, fifo_empty_2, 
                  output busy, detect_add, ld_state, laf_state, full_state, write_enb_reg, rst_int_reg, lfd_state);

//declare the states as parameters
parameter DECODE_ADDRESS = 4'b0000,
          LOAD_FIRST_DATA = 4'b0001, 
          LOAD_DATA = 4'b0010, 
          FIFO_FULL_STATE = 4'b0011, 
          LOAD_AFTER_FULL = 4'b0100, 
          LOAD_PARITY = 4'b0101, 
          CHECK_PARITY_ERROR = 4'b0110, 
          WAIT_TILL_EMPTY = 4'b0111;

//declare internal variables
reg [3:0] state;
reg[3:0]next_state;

//temp variable for storing the address; 
reg [1:0]address;
always@(posedge clock)
    begin 
        if(!resetn)
            address <= 2'bzz;
        else
            address <= data_in; 
    end

//current state logic 
always@(posedge clock)
    begin 
        if(!resetn)
            state <= DECODE_ADDRESS; 
        else if(soft_reset_0 && address == 2'b00 || soft_reset_1 && address == 2'b01|| soft_reset_2 && address == 2'b10)   
            state <= DECODE_ADDRESS; 
        else 
            state <= next_state; 
    end 

//next state logic 
always@(*)
    begin 
        case(state)
            DECODE_ADDRESS: 
                            begin 
                                if((pkt_valid && data_in == 2'b00 && fifo_empty_0) || (pkt_valid && data_in == 2'b01 && fifo_empty_1) || 
                                (pkt_valid && data_in == 2'b10 && fifo_empty_2))
                                    next_state <= LOAD_FIRST_DATA;
                                else if((pkt_valid && data_in == 2'b00 && !fifo_empty_0) || (pkt_valid && data_in == 2'b01 && !fifo_empty_1) || 
                                (pkt_valid && data_in == 2'b10 && !fifo_empty_2))
                                    next_state <= WAIT_TILL_EMPTY; 
                                else    
                                    next_state <= DECODE_ADDRESS; 
                            end 
            
            LOAD_FIRST_DATA: 
                            begin
                                next_state <= LOAD_DATA; 
                            end 
            
            LOAD_DATA: 
                        begin 
                            if(fifo_full)
                                next_state <= FIFO_FULL_STATE; 
                            else if(!fifo_full && !pkt_valid)
                                next_state <= LOAD_PARITY; 
                            else 
                                next_state <= LOAD_DATA; 
                        end 
            
            FIFO_FULL_STATE: 
                            begin 
                                if(!fifo_full)
                                    next_state <= LOAD_AFTER_FULL;
                                else
                                    next_state <= FIFO_FULL_STATE; 
                            end 

            LOAD_AFTER_FULL: 
                            begin 
                                if(!parity_done && low_pkt_valid)
                                    next_state <= LOAD_PARITY; 
                                else if(!parity_done && !low_pkt_valid)
                                    next_state <= LOAD_DATA; 
                                else if(parity_done)
                                    next_state <= DECODE_ADDRESS; 
                            end 
            
            LOAD_PARITY: 
                        begin 
                            next_state <= CHECK_PARITY_ERROR; 
                        end 
            
            CHECK_PARITY_ERROR: 
                                begin 
                                    if(!fifo_full)
                                        next_state <= DECODE_ADDRESS; 
                                    else if(fifo_full)
                                        next_state <= FIFO_FULL_STATE;
                                end 
                                
            WAIT_TILL_EMPTY : 
                            begin 
                                if((fifo_empty_0 && address ==  2'b00) || (fifo_empty_1 && address ==  2'b01) ||
                                (fifo_empty_2 && address ==  2'b10))
                                    next_state <= LOAD_FIRST_DATA;
                                else    
                                    next_state <= WAIT_TILL_EMPTY; 
                            end 
        endcase
    end 

assign detect_add = (state == DECODE_ADDRESS) ? 1'b1 : 1'b0;
assign ld_state = (state == LOAD_DATA) ? 1'b1 : 1'b0;
assign laf_state = (state == LOAD_AFTER_FULL) ? 1'b1 : 1'b0;
assign full_state = (state == FIFO_FULL_STATE) ? 1'b1 : 1'b0;
assign write_enb_reg = (state == LOAD_PARITY || state == LOAD_AFTER_FULL || state == LOAD_DATA) ? 1'b1 : 1'b0;
assign rst_int_reg = (state == CHECK_PARITY_ERROR) ? 1'b1 : 1'b0;
assign lfd_state = (state == LOAD_FIRST_DATA) ? 1'b1 : 1'b0;
assign busy = (state == LOAD_DATA || state == LOAD_AFTER_FULL || state == FIFO_FULL_STATE || state == LOAD_PARITY || state == WAIT_TILL_EMPTY || 
                state == LOAD_FIRST_DATA) ? 1'b1 : 1'b0;
endmodule 