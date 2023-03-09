//Заполнить массив случайными числами и вывести минимальное и максимальное из них

#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int SIZE = 10;
	int array[SIZE];

	bool alreadyHave;

	for (int i = 0; i < SIZE;)
	{
		alreadyHave = false;
		int newRandomValue = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (array[j] == newRandomValue)
				alreadyHave = true;
		}
		if (!alreadyHave)
		{
			array[i] = newRandomValue;
			i++;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Element " << i << " = " << array[i] << endl;
	}
	
	cout << endl;

	int min_elem = array[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (min_elem > array[i])
			min_elem = array[i];
	}
	
	int max_elem = array[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (max_elem < array[i])
			max_elem = array[i];
	}
	cout << "Min element is " << min_elem << endl;
	cout << "Max element is " << max_elem <<endl;
}