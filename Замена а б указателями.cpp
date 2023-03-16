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
	int a = 5;
	int b = 10;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	cout << "Foo" << endl;
	replace(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}