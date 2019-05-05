all: list

list: list.cc
	g++ -g --coverage list.cc -o list

clean:
	rm -rf list *.gc* 
