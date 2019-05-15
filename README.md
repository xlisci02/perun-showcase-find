# Perun fuzz demonstration on std::find

This is an example program that fill the `std::list` with strings from a file, and subsequently search for each of them using the standard function `std::find`.  The project was created to demonstrate the functionality of [Perun](https://github.com/xlisci02/perun) fuzzing machine. 


## Clone the repository
First step is to clone this repository with following command:

    git clone https://github.com/xlisci02/perun-showcase-find
    cd perun-showcase-find

## Build and run for example with seed and mutation file
Notice the time difference between the runtime with initial seed and its mutation.

    make
    time ./list seed2.txt
    time ./list worst-case-muts/worst_case22.txt

## Want to fuzz ? First initialize

Run the following and close the configuration file that pops up:

	perun init --vcs-type=git --configure

## Create output directory and start fuzz
The command for launching the fuzzing machine can look similar to this:

    mkdir output
    perun fuzz -b ./list -w seed2.txt -o output -t 900 -mp 2 -mcs probabilistic -cr 2 
