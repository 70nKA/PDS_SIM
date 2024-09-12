`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:00:21 09/12/2024
// Design Name:   sobel_main
// Module Name:   /home/ise/sim/sobel/main/main_test.v
// Project Name:  sobel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sobel_main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module main_test;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	//wire [7:0] sobel_data;
	//wire sobel_data_valid;

	// Instantiate the Unit Under Test (UUT)
	sobel_main1 uut (
		.clk(clk), 
		.reset(reset)
		//.sobel_data(sobel_data), 
		//.sobel_data_valid(sobel_data_valid)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 0;
        
		// Add stimulus here

	end
	
	always #0.5 clk = ~clk;
      
endmodule

