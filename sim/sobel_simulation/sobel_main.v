`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:44:23 09/11/2024 
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
    );
	 
	reg [7:0] original_image [LINE_BUFFER_SIZE*LINE_BUFFER_SIZE - 1 : 0]; // input image data
	reg [7:0] output_image [LINE_BUFFER_SIZE*LINE_BUFFER_SIZE - 1 : 0]; // output image data

	reg [LINE_BUFFER_LINE_NUMBER - 1:0] line_number;
	reg [LINE_BUFFER_SIZE - 1: 0] ln0, ln1, ln2; // line buffers
	
	reg state_reg, state_next;
	reg [LINE_BUFFER_LINE_NUMBER] line_counter_reg, line_counter_next;
	reg [LINE_BUFFER_LINE_NUMBER] byte_counter_reg, byte_counter_next;

	reg load_data;
	reg sobel_active;
	reg done_processing; // Added to track when the entire image has been processed

	initial
		begin
			$readmemb("lena_bin.txt", original_image); // load the input image
			line_number = 0;
			done_processing = 0;
		end

	integer i;
	integer sobel_x, sobel_y;
	integer magnitude;
	
	always@(posedge clk, posedge reset)
		if(reset)
			begin
				state_reg <= loading;
				line_counter_reg <= 0;
				byte_counter_reg <= 0;
			end
		else
			begin
				state_reg <= state_next;
				line_counter_reg <= line_counter_next;
				byte_counter_reg <= byte_counter_next;
				
				if(state_reg == loading)
					begin
						if(line_counter_reg == 0) // Initialize line buffers
							begin
								ln0[byte_counter_reg] <= 0; // Top padding
								ln1[byte_counter_reg] <= original_image[byte_counter_reg];
								ln2[byte_counter_reg] <= original_image[byte_counter_reg + LINE_BUFFER_SIZE];
							end
						else if (line_number < IMAGE_HIGHT - 1) // Handle all lines except the last one
							begin
								if(byte_counter_reg == 0)
									begin
										ln0 <= ln1;
										ln1 <= ln2;
										ln2[byte_counter_reg] <= original_image[byte_counter_reg + line_number*LINE_BUFFER_SIZE];
									end
								else
									begin
										ln2[byte_counter_reg] <= original_image[byte_counter_reg + line_number*LINE_BUFFER_SIZE];
									end
							end
						else
							begin
								if(byte_counter_reg == 0)
									begin
										ln0 <= ln1;
										ln1 <= ln2;
										ln2[byte_counter_reg] <= 0;
									end
								else
									begin
										ln2[byte_counter_reg] <= 0;
									end
							end
					end
				else if(state_reg == processing)
					begin
						if (byte_counter_reg == 0) // Left edge
							begin
								sobel_x <= (0 - ln0[byte_counter_reg+1]) + (2 * (0 - ln1[byte_counter_reg+1])) + (0 - ln2[byte_counter_reg+1]);
								sobel_y <= (0 - ln2[byte_counter_reg]) + (2 * (ln0[byte_counter_reg] - ln2[byte_counter_reg])) + (ln0[byte_counter_reg+1] - ln2[byte_counter_reg+1]);
							end
						else if (byte_counter_reg == LINE_BUFFER_SIZE - 1) // Right edge
							begin
								sobel_x <= (ln0[byte_counter_reg-1] - 0) + (2 * (ln1[byte_counter_reg-1] - 0)) + (ln2[byte_counter_reg-1] - 0);
								sobel_y <= (ln0[byte_counter_reg-1] - ln2[byte_counter_reg-1]) + (2 * (ln0[byte_counter_reg] - ln2[byte_counter_reg])) + (0 - 0);
							end
						else // Normal operation for middle pixels
							begin
								sobel_x <= (ln0[byte_counter_reg-1] - ln0[byte_counter_reg+1]) + (2 * (ln1[byte_counter_reg-1] - ln1[byte_counter_reg+1])) + (ln2[byte_counter_reg-1] - ln2[byte_counter_reg+1]);
								sobel_y <= (ln0[byte_counter_reg-1] - ln2[byte_counter_reg-1]) + (2 * (ln0[byte_counter_reg] - ln2[byte_counter_reg])) + (ln0[byte_counter_reg+1] - ln2[byte_counter_reg+1]);
							end

								// Compute the magnitude as the sum of absolute values (simplified approximation)
								magnitude = (sobel_x < 0 ? -sobel_x : sobel_x) + (sobel_y < 0 ? -sobel_y : sobel_y);

								// Clamp the magnitude to fit in 8 bits (0-255)
								if (magnitude > 255)
									magnitude = 255;

								// Write the magnitude directly to the output file as an 8-bit binary value
								if (line_number > 2) // Start writing results after the first valid Sobel calculation
									$fwrite(output_file, "%b\n", magnitude[7:0]); // Write as 8-bit binary
					end
			end
			
	always@(*)
		begin
			state_next = state_reg;
			line_counter_next = line_counter_reg;
			byte_counter_next = byte_counter_reg;

			case(state_reg)
				loading:
					begin
						case(state_loading_reg)
							loading_init:
								begin
									if(line_counter_reg < 3)
										begin
											if(byte_counter_reg < LINE_BUFFER_SIZE)
												byte_counter_next = byte_counter_reg + 1;
											else
												begin
													byte_counter_next = 0;
													line_counter_next = line_counter_reg + 1;
												end
										end
									else
										begin
											state_next = processing;
											state_loading_next = loading_main;
										end
								end
						endcase
					end
				processing:
					begin
						if(line_counter_reg < IMAGE_HIGHT)
							begin
								if(byte_counter_reg < LINE_BUFFER_SIZE)
										byte_counter_next = byte_counter_reg + 1;
								else
									begin
										byte_counter_next = 0;
										line_counter_next = line_counter_reg + 1;
										state_next = loading;
									end
							end
						else
							begin
								
							end
					end

			endcase
		end
		
		

	// Load image data into line buffers and update the lines dynamically
	always@(posedge clk)
		begin
			if(!done_processing) begin // Only proceed if the image processing is not finished


				if (sobel_active)
					begin
						// Loop over each pixel to apply the Sobel filter with padding
						for (i = 0; i < LINE_BUFFER_SIZE; i = i + 1)
							begin
								

								// Compute the magnitude as the sum of absolute values (simplified approximation)
								magnitude = (sobel_x < 0 ? -sobel_x : sobel_x) + (sobel_y < 0 ? -sobel_y : sobel_y);

								// Clamp the magnitude to fit in 8 bits (0-255)
								if (magnitude > 255)
									magnitude = 255;

								// Store the magnitude result in the output image as an 8-bit value
								if (line_number > 2) // Start storing results only after the first valid Sobel calculation
									output_image[i+(line_number-3)*LINE_BUFFER_SIZE] <= magnitude[7:0]; // Store as 8-bit value
							end

						// If the entire image has been processed
						if (line_number >= LINE_BUFFER_SIZE)
							begin
								sobel_active <= 0;
								done_processing <= 1; // Mark processing as done
							end
						else
							begin
								load_data <= 1;
								sobel_active <= 0;
							end
					end
			end
			else if(done_processing) begin
				// Write the output image to a file after processing is done
				$writememb("filtered_lena_bin.txt", output_image); 
				done_processing <= 0; // Prevent further writing to file in subsequent clock cycles
			end
		end

endmodule
