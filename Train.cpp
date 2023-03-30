#include <iostream>
#include <string>

using namespace std;

void minimal(int* arr, int size);

int main()
{
	setlocale(LC_ALL, "Ru");
	
	int arr[] = { 5, 7, 3, 5, -2 };
	minimal(arr, 5);
}

void minimal(int* arr, int size)
{
	int min = *arr;
	for (int i = 0; i < size; i++)
	{
		if (min > *(arr + i))
			min = *(arr + i);

	}
	cout << "Minimal Element: " << min << endl;
}