#include <iostream>
#include <clocale>

using namespace std;


void fillArray(int arr[], const int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%10;
	}
}

void printArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

void main()
{
	const int SIZE = 10;
	int arr[SIZE];
	fillArray(arr, SIZE);
	printArray(arr, SIZE);
}