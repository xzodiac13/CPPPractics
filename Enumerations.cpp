#include <iostream>
#include <string>

using namespace std;


enum Options 
{
	open = 4,
	close = 5,
	wait = 6,
	del = 7
};

struct File
{
	int weight;
	string name;
	Options options;
};




int main()
{
	setlocale(LC_ALL, "RU");

	File my_file;
	my_file.weight = 1.5f;
	my_file.name = "test.txt";
	my_file.options = Options::close;
	
	if (my_file.options == Options::close)
		cout << "File is close" << endl;


	return 0;
}
