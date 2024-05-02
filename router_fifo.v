// //define all the ports
// module router_fifo(input clock, 
//             input resetn, 
//             input write_enb, 
//             input soft_reset, 
//             input read_enb, 
//             input [7:0] data_in, 
//             input lfd_state, 
//             output empty,
//             output full, 
//             output  reg [7:0] data_out);

// //internal variables
// reg [4:0]rd_ptr = 5'b0;
// reg [4:0]wr_ptr = 5'b0;
// reg [8:0] mem [15:0];

// //write operation 
// integer i;
// always@(posedge clock)
//     begin 
        
//         if(!resetn)
//             begin 
//                 for(i = 0; i < 16; i = i + 1)
//                     begin 
//                         mem[i] <= 0;
//                     end
//                 wr_ptr <= 4'b0;
//             end 
//         else if(soft_reset)
//             begin 
//                 for(i = 0; i < 16; i = i + 1)
//                     begin 
//                         mem[i] <= 0;
//                     end
//                 wr_ptr <= 4'b0;
//             end 
//         else if(write_enb == 1'b1 && full == 1'b0)
//             begin 
//                 mem[wr_ptr] <= {lfd_state, data_in};
//                 wr_ptr <= wr_ptr + 1'b1;
//             end 
//         else    
//             begin 
//                 wr_ptr <= wr_ptr;
//             end
//     end 

// //read operation 
// reg [6:0]count;
// always@(posedge clock)
//     begin 
//         if(!resetn)
//             begin 
//                 rd_ptr <= 1'b0;
//                 data_out <= 8'd0;
//             end
//         else if(soft_reset)
//             begin 
//                 data_out <= 8'dz;
//                 rd_ptr <= 1'b0;
//             end 
//         else if(count == 0 && data_out != 0)
//             begin
//                 data_out <= 8'bz;
//             end
//         else if(read_enb == 1'b1 && empty == 1'b0)
//             begin 
//                 data_out <= mem[rd_ptr];
//                 rd_ptr <= rd_ptr + 1'b1;
//             end
//         else    
//             rd_ptr <= rd_ptr;
        
//     end     

// always@(posedge clock)
//     begin 
//         if(!resetn)
//             begin 
//                 count <= 7'b0;
//             end 
//         else if(soft_reset)
//             begin
//                 count <= 0;
//             end
//         else if(read_enb == 1 && empty == 0)
//             begin 
//                 if(mem[rd_ptr[3:0]][8] == 1)
//                     begin 
//                         count <= mem[rd_ptr[3:0]][7:2] + 1'b1;
//                     end
//                 else if(count != 0)
//                     count <= count - 1'b1;
//             end 
//     end 

             




// //full and empty conditions
// assign full = (wr_ptr == rd_ptr) ? 1'b1 : 1'b0;
// assign empty = (wr_ptr ==  {!rd_ptr[4], rd_ptr[3:0]}) ? 1'b1 : 1'b0;
// endmodule 

//define all the ports
module router_fifo(input clock, 
            input resetn, 
            input write_enb, 
            input soft_reset, 
            input read_enb, 
            input [7:0] data_in, 
            input lfd_state, 
            output empty,
            output full, 
            output  reg [7:0] data_out);

//internal variables
reg [3:0]rd_ptr = 4'b0;
reg [3:0]wr_ptr = 4'b0;
reg [8:0] mem [15:0];

//write operation 
integer i;
always@(posedge clock)
    begin 
        
        if(!resetn)
            begin 
                for(i = 0; i < 16; i = i + 1)
                    begin 
                        mem[i] <= 0;
                    end
                wr_ptr <= 4'b0;
            end 
        else if(soft_reset)
            begin 
                for(i = 0; i < 16; i = i + 1)
                    begin 
                        mem[i] <= 0;
                    end
                wr_ptr <= 4'b0;
            end 
        else if(write_enb == 1'b1 && full == 1'b0)
            begin 
                mem[wr_ptr] <= {lfd_state, data_in};
                wr_ptr <= wr_ptr + 1'b1;
            end 
        else    
            begin 
                wr_ptr <= wr_ptr;
            end
    end 

//read operation 
reg [6:0]count;
always@(posedge clock)
    begin 
        if(!resetn)
            begin 
                rd_ptr <= 1'b0;
                data_out <= 8'd0;
            end
        else if(soft_reset)
            begin 
                data_out <= 8'd0;
                rd_ptr <= 1'b0;
            end 
        else if(count == 0)
            begin
                data_out <= 8'bz;
            end
        else if(read_enb == 1'b1 && empty == 1'b0)
            begin 
                data_out <= mem[rd_ptr][7:0];
                rd_ptr <= rd_ptr + 1'b1;
            end
        else    
            rd_ptr <= rd_ptr;
        
    end     

always@(posedge clock)
    begin 
        if(!resetn)
            begin 
                count <= 7'b0;
            end 
        else if(soft_reset)
            begin
                count <= 0;
            end
        else if(read_enb == 1 && empty == 0)
            begin 
                if(lfd_state == 1)
                    begin 
                        count <= mem[rd_ptr[3:0]][7:2] + 1'b1;
                    end
                else if(count != 0)
                    count <= count - 1'b1;
            end 
    end 

             




//full and empty conditions
assign empty = (wr_ptr == rd_ptr) ? 1'b1 : 1'b0;
assign full = (wr_ptr == 4'b1111 && rd_ptr == 4'b0) ? 1'b1 : 1'b0;
endmodule