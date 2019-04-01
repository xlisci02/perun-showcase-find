// vector::push_back
#include <iostream>
#include <vector>
#include <algorithm>    // std::find
#include <string>
#include <time.h>
#include <fstream>

int main (int argc, char ** argv)
{
	std::vector<std::string> myvector;
	int a;
	srand(time(NULL));

	std::ifstream file;
	file.open (argv[1]);
	if (!file.is_open()) return 0;

	std::string word;
	while (file >> word){
		myvector.push_back(word);
	}

  	// std::random_shuffle ( myvector.begin(), myvector.end() );

	file.clear();
	file.seekg(0, std::ios::beg);
	
	std::vector<std::string>::iterator it;
	while (file >> word){
		it = std::find (myvector.begin(), myvector.end(), word );
	}
	
	file.close();
 	
	std::cout << "myvector stores " << myvector.size() << " words.\n";
//	for (auto v : myvector)
//		std::cout << v << std::endl;
  return 0;
}
