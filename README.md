PDS project: Sobel edge detection simulation

- Usage: https://fesb-my.sharepoint.com/:v:/g/personal/agrbav02_fesb_hr/Ea0Y55TYeYlHrej2nr-afGwBipJPtLrbdfHmO7G69aj-eA?nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJPbmVEcml2ZUZvckJ1c2luZXNzIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXciLCJyZWZlcnJhbFZpZXciOiJNeUZpbGVzTGlua0NvcHkifX0&e=01dx9d

- sim/sobel/run_sobel.sh:
  -  dependencies:
      - VM Linux Oracle 6.7
      - python 3.6.5 and up (VM Linux Oracle 6.7)
      - pip cmd (VM Linux Oracle 6.7)

Description:

run_sobel.sh Bash script automates testing of a Sobel edge-detection hardware design on multiple images using different configuration settings.

The script first defines directories, file names, and configuration parameters. It specifies a directory that contains the original JPG images, a directory where processed output images will be saved, and the Verilog source file that implements the Sobel filter. It also defines a list of Sobel threshold values, two output color modes (black-on-white and white-on-black), and the names of text files used to exchange image data with the simulation.

Next, the script searches the input directory and collects all JPG files into an array. These files are processed one by one.

For each input image, the script iterates through all defined Sobel threshold values. For each threshold, it then iterates through both color modes. This results in testing every possible combination of image, threshold value, and color mode.

Before each simulation run, the script modifies the Verilog source file. It replaces the Sobel threshold value in the conditional statement that compares the Sobel gradient magnitude with a constant. It also updates pixel output values to control whether detected edges appear as black on a white background or white on a black background.

After updating the Verilog file, the script generates a descriptive output filename that includes the original image name, the selected threshold value, and the selected color mode.

The input JPG image is then converted into a binary text file using a Python script. This binary file is used as input data for the Verilog testbench.

The modified Verilog design is compiled using a simulation tool, producing a simulation executable. The simulation is then executed in batch mode using a TCL script. During simulation, the Sobel filter processes the image data and writes the result to an output binary text file.

Finally, another Python script converts the output binary file produced by the simulation back into a JPG image. The resulting image is saved in the output directory using the previously generated filename.

This process is repeated automatically for all input images and for all combinations of threshold values and color modes, producing a complete set of Sobel-filtered output images for analysis and comparison.
