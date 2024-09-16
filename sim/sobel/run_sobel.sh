#!/bin/bash

# Specify the directory containing the .jpg files
in_dir="original_images/"
out_dir="output_images"
main_script="main/sobel_main.v"
threshold=(63 127 191 255 319)
picture_color=("bw" "wb")
sobel_in="img_bin.txt"
sobel_out="sobel_img_bin.txt"

# Use find to get the list of .jpg files and save them to an array
mapfile -t jpg_files < <(find "$in_dir" -type f -name "*.jpg")

filename="example.txt"
basename="${filename%.*}"
echo "$basename"  # Outputs: example


# Print the array elements
for file in "${jpg_files[@]}"
do
    for value in "${threshold[@]}"
    do
        for color in "${picture_color[@]}"
        do
            sed -i "179s/if(sobel_xy > [0-9]\{1,4\})/if(sobel_xy > $value)/" $main_script

            if [ "$color" = "bw" ]; then
                sed -i '180s/00000000/11111111/' $main_script
                sed -i '182s/11111111/00000000/' $main_script
            else
                sed -i '180s/11111111/00000000/' $main_script
                sed -i '182s/00000000/11111111/' $main_script
            fi

            basename=$(basename "$file" .jpg)
            file_out="${out_dir}/${basename}_${value}_${color}.jpg"

            python36 ./jpg_conversion/jpg2bin $file $sobel_in
            fuse -prj *.prj -top main_test -o main_test_sim.exe
            ./main_test_sim.exe -tclbatch simulation.tcl
            python36 ./jpg_conversion/bin2jpg $sobel_out "$file_out"
        done
    done
done

