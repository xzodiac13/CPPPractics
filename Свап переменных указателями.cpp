#include <iostream>

using namespace std;

void replace(int* pa, int* pb)
{
	int* pc;
	pc = new int;
	(*pc) = *pa;
	(*pa) = *pb;
	(*pb) = *pc;

}

void main()
{
	int a;
	int b;
	cin >> a >> b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	cout << "Swap processing..." << endl;
	replace(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "Swap completed!"<< endl;
	cout << "a - b = " << a << " - " << b << " = " << a - b << endl;
}