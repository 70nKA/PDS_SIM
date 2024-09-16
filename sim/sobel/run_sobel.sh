#!/bin/bash

# Specify the directory containing the input .jpg files
in_dir="original_images/"
# Specify the directory containing the output .jpg files
out_dir="output_images"

main_script="main/sobel_main.v"
threshold=(63 127 191 255 319)
picture_color=("bw" "wb")
sobel_in="img_bin.txt"
sobel_out="sobel_img_bin.txt"

# Use find to get the list of .jpg files and save them to an array
mapfile -t jpg_files < <(find "$in_dir" -type f -name "*.jpg")


# for loop which goes throught all input files in original_images folder
for file in "${jpg_files[@]}"
do
    # for loop which goes throught threshold options defined in threshold array
    for value in "${threshold[@]}"
    do
        # for loop which goes throught color options defined in  picture_color array
        for color in "${picture_color[@]}"
        do
            # command which updates sobel threshold in the sobel_main.v file
            sed -i "179s/if(sobel_xy > [0-9]\{1,4\})/if(sobel_xy > $value)/" $main_script

            if [ "$color" = "bw" ]; then
                # command which updates picture color to black and white in the sobel_main.v file
                sed -i '180s/00000000/11111111/' $main_script
                sed -i '182s/11111111/00000000/' $main_script
            else
                # command which updates picture color to white and black in the sobel_main.v file
                sed -i '180s/11111111/00000000/' $main_script
                sed -i '182s/00000000/11111111/' $main_script
            fi

            # creates filename for the output file: input_image_name + threshold + color
            basename=$(basename "$file" .jpg)
            file_out="${out_dir}/${basename}_${value}_${color}.jpg"

            # runs python script which converts jpt image to binary file
            python36 ./jpg_conversion/jpg2bin $file $sobel_in
            # compiles the overwritten code
            fuse -prj *.prj -top main_test -o main_test_sim.exe
            # runs the simulation
            ./main_test_sim.exe -tclbatch simulation.tcl
            # converts the binray sobel output to jpg
            python36 ./jpg_conversion/bin2jpg $sobel_out "$file_out"
        done
    done
done

