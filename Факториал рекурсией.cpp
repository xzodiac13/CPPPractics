#include <iostream>

int Factorial(int N)
{
	if ((N == 0) || (N == 1))
		return 1;

	return N * Factorial(N - 1);
}

void main()
{
	int j;
	std::cin >> j; 
	std::cout << Factorial(j);
}