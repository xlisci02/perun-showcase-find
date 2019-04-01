all: vector

vector: vector.cc
	g++ -g --coverage vector.cc -o vector

clean:
	rm -rf vector *.gc* 
