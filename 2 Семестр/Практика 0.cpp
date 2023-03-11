#include <iostream> 
#include <stdio.h>
#include <Windows.h>
#include <clocale>

using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

	char a[120];
	char a1[120];
	float a2;
	int a3;

	char b[120];
	char b1[120];
	double b2;
	int b3;

	char c[120];
	char c1[120];
	double c2;
	int c3;

	cout << "1. Введите вид транспорта, номер маршрута, протяженность маршрута и время в дороге: ";
	cin >> a >> a1 >> a2 >> a3;
	cout << "\n2. Введите наименование товара, тип товара, цена за 1 шт (грн), минимальное количество в партии:";
	cin >> b >> b1 >> b2 >> b3;
	cout << "\n3. Введите наименование товара, тип товара, цена за 1 шт (грн), минимальное количество в партии:";
	cin >> c >> c1 >> c2 >> c3;


	cout << "+"; cout.width(120); cout.fill('-'); cout << "+" << endl;
	cout.fill(' ');  cout.width(120); cout << left << "| Ведомость общественного транспорта"; cout << "|" << endl;
	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
	cout.fill(' ');

	cout.width(30); cout << left << "| Вид транспорта";
	cout.width(20); cout << left << "| Н. маршрута ";
	cout.width(20); cout << left << "| Протяженность маршрута (км) ";
	cout.width(40); cout << left << "| Время в дороге(мин)";
	cout << "|" << endl;

	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
	cout << "|"; cout.width(29); cout.fill(' '); cout << left << a;   cout << "|"; cout.width(19); cout.fill(' '); cout << left << a1;  cout << "|"; cout.width(29); cout.fill(' '); cout << left << a2;  cout << "|"; cout.width(39); cout.fill(' '); cout << left << a3;  cout << "|" << endl;
	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
	cout << "|"; cout.width(29); cout.fill(' '); cout << left << b;   cout << "|"; cout.width(19); cout.fill(' '); cout << left << b1;  cout << "|"; cout.width(29); cout.fill(' '); cout << left << b2;  cout << "|"; cout.width(39); cout.fill(' '); cout << left << b3;  cout << "|" << endl;
	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
	cout << "|"; cout.width(29); cout.fill(' '); cout << left << c;   cout << "|"; cout.width(19); cout.fill(' '); cout << left << c1;  cout << "|"; cout.width(29); cout.fill(' '); cout << left << c2;  cout << "|"; cout.width(39); cout.fill(' '); cout << left << c3;  cout << "|" << endl;
	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
	cout << "|Примечание: Тр - трамвай, Тс - троллейбус, А - автобус"; cout << "                                                                 |" << endl;
	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
}