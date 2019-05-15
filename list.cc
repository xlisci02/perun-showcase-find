// list::push_back
#include <iostream>
#include <list>
#include <algorithm>    // std::find
#include <string>
#include <time.h>
#include <fstream>

int main (int argc, char ** argv)
{
	std::list<std::string> mylist;
	int a;
	srand(time(NULL));

	std::ifstream file;
	file.open(argv[1]);
	if (!file.is_open()) return 0;

	std::string word;
	while (file >> word){
		mylist.push_back(word);
	}

	file.clear();
	file.seekg(0, std::ios::beg);

	std::list<std::string>::iterator it;

	while (file >> word){
		it = std::find (mylist.begin(), mylist.end(), word );
	}

	file.close();

	std::cout << "mylist stores " << mylist.size() << " words.\n";
	// for (auto v : mylist)
	// 	std::cout << v << std::endl;
  return 0;
}
