#include <iostream>
#include <string>

using namespace std;


struct Point{
	int x, y;
};

struct Tree 
{
	string name;
	int age;
	bool is_alive;
	float height;
	Point place;

	void get_info() {
		cout << "Name: " << name << endl << "Age: " << age << endl << "Is alive: " 
			<< is_alive << endl << "Height: " << height << endl << "Place: " 
			<< "x_" << place.x << " " << "y_" << place.y;
	}
};

int main()
{
	setlocale(LC_ALL, "RU");

	Tree dub;
	dub.name = "Дуб";
	dub.is_alive = true;
	dub.age = 14;
	dub.height = 12.98;
	dub.place.x = 100;
	dub.place.y = 10;

	Tree yelka;
	yelka.name = "Ёлка";
	yelka.is_alive = false;
	yelka.age = 24;
	yelka.height = 18.12;
	yelka.place.x = 90;
	yelka.place.y = 20;

	dub.get_info();
	cout << endl << endl << endl;
	yelka.get_info();
	cout << endl << endl << endl;

	return 0;
}
