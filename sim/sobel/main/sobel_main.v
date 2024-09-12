`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:39:56 09/12/2024 
// Design Name: 
// Module Name:    sobel_main 
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
		parameter IMAGE_WIDHT = 512,
		parameter IMAGE_HIGHT = 512,
		parameter LINE_BUFFER_SIZE = 512, // size of each line
		parameter LINE_BUFFER_LINE_NUMBER = 9
	)
	(
		input wire clk, reset
		//output wire [7:0] sobel_data,
		//output wire sobel_data_valid
    );
	 
	reg [7:0] original_image [0 : LINE_BUFFER_SIZE*LINE_BUFFER_SIZE - 1]; // input image data
	reg [7:0] output_image [LINE_BUFFER_SIZE*LINE_BUFFER_SIZE - 1 : 0]; // output image data

	reg [LINE_BUFFER_LINE_NUMBER - 1:0] line_number;
	reg [LINE_BUFFER_SIZE - 1: 0] ln0, ln1, ln2; // line buffers
	
	localparam [1:0]
		loading = 2'b00,
		loading_init = 2'b01,
		loading_main = 2'b10,
		processing = 2'b11;
	
	reg state_reg, state_next;
	reg state_loading_reg, state_loading_next;
	reg [LINE_BUFFER_LINE_NUMBER:0] line_counter_reg, line_counter_next;
	reg [LINE_BUFFER_LINE_NUMBER:0] line_counter_prev_reg, line_counter_prev_next;
	reg [LINE_BUFFER_LINE_NUMBER:0] byte_counter_reg, byte_counter_next;

	reg load_data;
	reg sobel_active;
	reg done_processing; // Added to track when the entire image has been processed
	
	reg signed [10:0] sobel_x, sobel_y;
	reg signed [10:0] magnitude;
	reg sobel_data_vaild_reg, sobel_data_vaild_next;
	
	integer output_file;

	initial
		begin
			$readmemb("lena_bin.txt", original_image); // load the input image
			line_number = 0;
			done_processing = 0;
			output_file = $fopen("filtered_lena_bin.txt", "wb");
		end
	
	always@(posedge clk, posedge reset)
		if(reset)
			begin
				state_reg <= loading;
				state_loading_reg <= loading_init;
				line_counter_reg <= 0;
				line_counter_prev_reg <= 0;
				byte_counter_reg <= 0;
				sobel_data_vaild_reg <= 0;
			end
		else
			begin
				state_reg <= state_next;
				state_loading_reg <= state_loading_next;
				line_counter_reg <= line_counter_next;
				byte_counter_reg <= byte_counter_next;
				sobel_data_vaild_reg <= sobel_data_vaild_next;
				
				if(state_reg == loading)
					begin
						if(line_counter_reg == 0) // Initialize line buffers
							begin
								ln0[line_counter_reg] <= 512'b0;
								ln1[line_counter_reg] <= original_image[line_counter_reg * LINE_BUFFER_SIZE +: LINE_BUFFER_SIZE];
								ln2[line_counter_reg] <= original_image[line_counter_reg * LINE_BUFFER_SIZE + LINE_BUFFER_SIZE +: LINE_BUFFER_SIZE];
							end
						else if (line_number < IMAGE_HIGHT - 1) // Handle all lines except the last one
							begin
								ln0 <= ln1;
								ln1 <= ln2;
								ln2[line_counter_reg] <= original_image[line_counter_reg + line_number*LINE_BUFFER_SIZE];
							end
						else
							begin
								ln0 <= ln1;
								ln1 <= ln2;
								ln2[line_counter_reg] <= 512'b0;
							end
				end
			end
			
	always@(*)
		begin
			state_next = state_reg;
			state_loading_next = state_loading_reg;
			line_counter_next = line_counter_reg;
			byte_counter_next = byte_counter_reg;
			sobel_data_vaild_next = sobel_data_vaild_reg;

			case(state_reg)
				loading:
					begin
//						if(sobel_data_vaild_reg)
//							sobel_data_vaild_next = 0;
						case(state_loading_reg)
							loading_init:
								begin
									if(line_counter_reg < 3)
										begin
											line_counter_next = line_counter_reg + 1;
										end
									else
										begin
											state_next = processing;
											state_loading_next = loading_main;
											byte_counter_next = 0;
											line_counter_prev_next = line_counter_prev_reg;
										end
								end
							loading_main:
								begin
									if(line_counter_prev_reg < line_counter_reg)
										begin
											state_next = processing;
											byte_counter_next = 0;
										end
									else
										begin
											line_counter_next = line_counter_reg + 1;
										end
								end
						endcase
					end
				processing:
					begin
						if(line_counter_reg < IMAGE_HIGHT)
							begin
								if (byte_counter_reg == 0) // Left edge
									begin
										sobel_x = (0 - ln0[byte_counter_reg+1]) + (2 * (0 - ln1[byte_counter_reg+1])) + (0 - ln2[byte_counter_reg+1]);
										sobel_y = (0 - ln2[byte_counter_reg]) + (2 * (ln0[byte_counter_reg] - ln2[byte_counter_reg])) + (ln0[byte_counter_reg+1] - ln2[byte_counter_reg+1]);
									end
								else if (byte_counter_reg == LINE_BUFFER_SIZE - 1) // Right edge
									begin
										sobel_x = (ln0[byte_counter_reg-1] - 0) + (2 * (ln1[byte_counter_reg-1] - 0)) + (ln2[byte_counter_reg-1] - 0);
										sobel_y = (ln0[byte_counter_reg-1] - ln2[byte_counter_reg-1]) + (2 * (ln0[byte_counter_reg] - ln2[byte_counter_reg])) + (0 - 0);
									end
								else // Normal operation for middle pixels
									begin
										sobel_x = (ln0[byte_counter_reg-1] - ln0[byte_counter_reg+1]) + (2 * (ln1[byte_counter_reg-1] - ln1[byte_counter_reg+1])) + (ln2[byte_counter_reg-1] - ln2[byte_counter_reg+1]);
										sobel_y = (ln0[byte_counter_reg-1] - ln2[byte_counter_reg-1]) + (2 * (ln0[byte_counter_reg] - ln2[byte_counter_reg])) + (ln0[byte_counter_reg+1] - ln2[byte_counter_reg+1]);
									end

								// Compute the magnitude as the sum of absolute values (simplified approximation)
								magnitude = (sobel_x < 0 ? -sobel_x : sobel_x) + (sobel_y < 0 ? -sobel_y : sobel_y);

								// Clamp the magnitude to fit in 8 bits (0-255)


								// Write the magnitude directly to the output file as an 8-bit binary value
								if (line_number > 2) // Start writing results after the first valid Sobel calculation
									$fwrite(output_file, "%b\n", ((magnitude > 255) ? 0 : 1)); // Write as 8-bit binary
								
								// sobel_data_vaild_next = 1;

								if(byte_counter_reg < LINE_BUFFER_SIZE)
										byte_counter_next = byte_counter_reg + 1;
								else
									begin
										byte_counter_next = 0;
										state_next = loading;
									end
							end
						else
							begin
								$stop;
							end
					end
			endcase
		end

endmodule
