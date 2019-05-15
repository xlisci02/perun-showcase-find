# perun-showcase-find

```
# clone
git clone https://github.com/xlisci02/perun-showcase-find
cd perun-showcase-find

# build and run
make
time ./list seed2.txt
time ./list worst-case-muts/worst_case22.txt

# to fuzz, first initialize as perun repo
perun init --vsc-type=git --configure

# fuzz example
perun fuzz -b ./list -w seed2.txt -o output -t 900 -mp 2 -mcs probabilistic -cr 2 
```
