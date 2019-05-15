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
	
## Make sure your account's default identity is set
Run the following command to check your git settings:

	git config --list --show-origin

In case your identity is not defined, set your user name and email address like this:

	git config user.email "you@example.com"
	git config user.name "Your Name"

## Finally, create output directory and start fuzz
The command for launching the fuzzing machine can look similar to this:

    mkdir output
    perun fuzz -b ./list -w seed2.txt -o output -t 900 -mp 2 -mcs probabilistic -cr 2 -s . -g .
