restart    ; # Restart the simulation from time 0
onerror {quit -f}   ; # Automatically quit on any stop or error
run all    ; # Run the simulation until $stop or $finish
quit -f    ; # Ensure the simulator quits after the simulation ends
