`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:43:23 09/12/2024 
// Design Name: 
// Module Name:    sobel_main1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module sobel_main
	#(
		parameter IMAGE_WIDTH_E = 9,
		parameter IMAGE_HIGHT_E = 9,
		parameter IMAGE_WIDTH = 2**IMAGE_WIDTH_E,
		parameter IMAGE_HIGHT = 2**IMAGE_HIGHT_E,
		
		parameter IMAGE_SIZE = IMAGE_WIDTH*IMAGE_HIGHT
	)
	(
		input wire clk, reset
    );
	 
	localparam BYTE_SIZE = 8;
	
	localparam INIT_LINE_NUM_COUNT = 0;
	localparam INIT_LINE_NUM_COUNT_TRIGGER = 1;
	 
	reg [BYTE_SIZE - 1:0] original_image [0:IMAGE_SIZE - 1];
	reg [BYTE_SIZE - 1:0] ln0 [0:IMAGE_WIDTH - 1];
	reg [BYTE_SIZE - 1:0] ln1 [0:IMAGE_WIDTH - 1];
	reg [BYTE_SIZE - 1:0] ln2 [0:IMAGE_WIDTH - 1];
	
	localparam STATE_BIT_NUMBER = 1;
	
	localparam [STATE_BIT_NUMBER:0]
		init = 'b0,
		loading = 'b1,
		processing = 'b10,
		fin = 'b11;
	
	reg [STATE_BIT_NUMBER:0] state_reg, state_next;
	reg [IMAGE_WIDTH_E:0] line_counter_reg, line_counter_next;
	reg [IMAGE_WIDTH_E-1:0] byte_counter_reg, byte_counter_next;
	
	reg signed [10:0] sobel_x, sobel_y;
	reg signed [10:0] sobel_xy;
	reg [BYTE_SIZE-1:0] sobel_8xy;
	
	integer output_file;
	
	initial
		begin
			$readmemb("lena_bin.txt", original_image); // load the input image
			output_file = $fopen("filtered_lena_bin.txt", "w");
		end
	
	always@(posedge clk, posedge reset)
		if(reset)
			begin
				state_reg <= init;

				line_counter_reg <= 0;
				byte_counter_reg <= 0;
			end
		else
			begin
				if(state_reg == init)
					begin
						state_reg <= state_next;

						line_counter_reg <= line_counter_next;
						byte_counter_reg <= byte_counter_next;
					end
				else if(state_reg == loading)
					begin
						if(line_counter_reg == 0)
							begin
								if(byte_counter_reg < IMAGE_WIDTH - 1)
									byte_counter_reg <= byte_counter_reg + 1;
								else
									begin
										state_reg <= processing;

										line_counter_reg <= 1;
										byte_counter_reg <= 0;
									end
								
								ln0[byte_counter_reg] <= 0; // Top padding
								ln1[byte_counter_reg] <= original_image[line_counter_reg*IMAGE_WIDTH + byte_counter_reg];
								ln2[byte_counter_reg] <= original_image[(line_counter_reg + 1)*IMAGE_WIDTH + byte_counter_reg];
							end
						else if (line_counter_reg < IMAGE_HIGHT - 1) // Handle all lines except the last one
							begin
								if(byte_counter_reg < IMAGE_WIDTH - 1)
									byte_counter_reg <= byte_counter_reg + 1;
								else
									begin
										state_reg <= processing;
										
										line_counter_reg <= line_counter_reg + 1;
										byte_counter_reg <= 0;
									end
								
								ln0[byte_counter_reg] <= original_image[(line_counter_reg - 1)*IMAGE_WIDTH + byte_counter_reg];
								ln1[byte_counter_reg] <= original_image[line_counter_reg*IMAGE_WIDTH + byte_counter_reg];
								ln2[byte_counter_reg] <= original_image[(line_counter_reg + 1)*IMAGE_WIDTH + byte_counter_reg];
							end
						else
							begin
								if(byte_counter_reg < IMAGE_WIDTH - 1)
									byte_counter_reg <= byte_counter_reg + 1;
								else
									begin
										state_reg <= processing;
										
										line_counter_reg <= line_counter_reg + 1;
										byte_counter_reg <= 0;
									end
								
								ln0[byte_counter_reg] <= original_image[(line_counter_reg - 1)*IMAGE_WIDTH + byte_counter_reg];
								ln1[byte_counter_reg] <= original_image[line_counter_reg*IMAGE_WIDTH + byte_counter_reg];
								ln2[byte_counter_reg] <= 0;
							end
					end
				else if(state_reg == processing)
					begin
						state_reg <= state_next;

						line_counter_reg <= line_counter_next;
						byte_counter_reg <= byte_counter_next;
					end
			end
	
	always@*
		begin
			state_next = state_reg;
			
			line_counter_next = line_counter_reg;
			byte_counter_next = byte_counter_reg;

			case(state_reg)
				init:
					begin
						state_next = loading;
						line_counter_next = 0;
						byte_counter_next = 0;
					end
				processing:
					begin						
						if (byte_counter_reg == 0) // Left edge
									begin
										sobel_x = (0 - ln0[byte_counter_reg + 1]) + (2 * (0 - ln1[byte_counter_reg + 1])) + (0 - ln2[byte_counter_reg+1]);
										sobel_y = (0 - ln2[byte_counter_reg]) + (2 * (ln0[byte_counter_reg] - ln2[byte_counter_reg])) + (ln0[byte_counter_reg+1] - ln2[byte_counter_reg+1]);
									end
								else if (byte_counter_reg == IMAGE_WIDTH - 1) // Right edge
									begin
										sobel_x = (ln0[byte_counter_reg-1] - 0) + (2 * (ln1[byte_counter_reg-1] - 0)) + (ln2[byte_counter_reg-1] - 0);
										sobel_y = (ln0[byte_counter_reg-1] - ln2[byte_counter_reg-1]) + (2 * (ln0[byte_counter_reg] - ln2[byte_counter_reg])) + (0 - 0);
									end
								else // Normal operation for middle pixels
									begin
										sobel_x = (ln0[byte_counter_reg-1] - ln0[byte_counter_reg+1]) + (2 * (ln1[byte_counter_reg-1] - ln1[byte_counter_reg+1])) + (ln2[byte_counter_reg-1] - ln2[byte_counter_reg+1]);
										sobel_y = (ln0[byte_counter_reg-1] - ln2[byte_counter_reg-1]) + (2 * (ln0[byte_counter_reg] - ln2[byte_counter_reg])) + (ln0[byte_counter_reg+1] - ln2[byte_counter_reg+1]);
									end
						
						sobel_xy = (sobel_x < 0 ? -sobel_x : sobel_x) + (sobel_y < 0 ? -sobel_y : sobel_y);
						
						if(sobel_xy > 255)
							sobel_8xy = 8'b00000000;
						else
							sobel_8xy = 8'b11111111;					
						
						$fwrite(output_file, "%b\n", sobel_8xy);
						
						if(line_counter_reg < IMAGE_HIGHT)
							if(byte_counter_reg < IMAGE_WIDTH - 1)
								byte_counter_next = byte_counter_reg + 1;
							else
								begin
									state_next = loading;
										
									byte_counter_next = 0;
							end
						else
							begin
								if(byte_counter_reg < IMAGE_WIDTH - 1)
								byte_counter_next = byte_counter_reg + 1;
							else
								begin
									state_next = fin;
										
									byte_counter_next = 0;
							end
						end
					end
				fin:
					begin
						$fclose(output_file);
						$stop;
					end
			endcase
		end

endmodule
