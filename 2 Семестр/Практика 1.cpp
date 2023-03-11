#include <iostream> 
#include <stdio.h>
#include <Windows.h>
#include <clocale>

using namespace std;

struct Date
{
	unsigned short day;
	unsigned short month;
	unsigned short year;
};

struct Record
{
	char Name[20];
	char Type[5];
	float Long;
	int TimeInRoute;
	struct Date date;

};

void PrintDate(unsigned short day, unsigned short month, unsigned short year, int begetsymbol) {
	int fillsl = 10;
	int beta = (begetsymbol - fillsl) / 2 - 1;
	cout << left;
	cout.width(beta); cout << " ";
	if (day > 9) {
		cout << day;
	}
	else {
		cout << "0" << day;
	}
	cout << ".";
	if (month > 9) {
		cout << month;
	}
	else {
		cout << "0" << month;
	}
	cout << ".";
	cout << year;
	cout.width(beta); cout << " ";
}

void Table(struct Record* records) {
	cout << endl;	cout.width(116); cout.fill('-'); cout << "-" << endl;
	cout.fill(' '); cout.width(115);  cout << left << "|Ведомость общественного транспорта"; cout << "|" << endl;
	cout.width(116); cout.fill('-'); cout << "-" << endl;
	cout.fill(' ');

	cout << left << "|Вид транспорта";
	cout << left << "|Н. маршрута";
	cout << left << "|Протяженность маршрута(км) ";
	cout << left << "|Время в дороге(мин) ";
	cout << left << "|Дата поездки                          ";
	cout << "|" << endl;
	cout.width(116); cout.fill('-'); cout << "-" << endl;
	cout.fill(' ');


	for (int i = 0; i < 3; i++) {
		cout << left << "|"; cout.width(14); cout << left << records[i].Name;
		cout << left << "|"; cout.width(11); cout << left << records[i].Type;
		cout << left << "|"; cout.width(27); cout << left << records[i].Long;
		std::cout.precision(2);
		cout << left << "|"; cout.width(20); cout << left << fixed << records[i].TimeInRoute;
		cout << left << "|";
		PrintDate(records[i].date.day, records[i].date.month, records[i].date.year, 41);
		cout << "|" << endl;
	}
	cout.width(116); cout.fill('-'); cout << "-" << endl;
	cout.fill(' '); cout.width(115);  cout << left << "|Примечание: Тр - трамвай, Тс - троллейбус, А - автобус"; cout << "|" << endl;
	cout.width(116); cout.fill('-'); cout << "-" << endl;
}

int main(void)
{

	setlocale(LC_ALL, "Russian");

	struct Record records[10];

	records[0] = { "Тр", "12", 27.55, 75, {24, 02, 2022} };
	records[1] = { "Тс", "17", 13.6, 57, {17, 03, 2022} };
	records[2] = { "А", "12а", 57.3, 117, {10, 05, 2023} };
	Table(records);


}