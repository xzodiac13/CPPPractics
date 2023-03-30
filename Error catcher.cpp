#include <iostream>
#include <string>

using namespace std;

void divide(float a, float b)
{
	if (b == 0) throw 100;
	cout << a / b << endl;
}

int main()
{
	setlocale(LC_ALL, "RU");

	try {
		divide(5.2, 0.0);
	}
	catch (int err) {
		if (err == 100) cout <<
			"Ошибка при делении на ноль!";
	}



	return 0;
}
