#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

struct Date {
	unsigned short day;
	unsigned short month;
	unsigned short year;
};

struct Record
{
	char surName[17];
	char ident[12];
	double year;
	float salary;
	struct Date date;
};

struct node {
	Record data;
	struct node* next;
};

struct node* myHead;
int countItem = 0;

void myCentr(string s, int wLine) {

	int w = s.length();
	int delta = (wLine - w) / 2;
	cout << left;
	cout.width(delta); cout << " ";
	cout << s;
	cout.width(delta + 1); cout << " ";

}

void printDate(unsigned short day, unsigned short month, unsigned short year, int wLine) {
	int w = 10;
	int delta = (wLine - w) / 2 - 1;
	cout << left;
	cout.width(delta); cout << " ";
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
	cout.width(delta); cout << " ";
}

void Draw(struct Record* records) {
	cout << endl;	cout.width(85); cout.fill('-'); cout << "-" << endl;
	cout.fill(' '); cout.width(84);  cout << left << "|Ведомость общественного транспорта";  cout << "|" << endl;
	cout.width(85); cout.fill('-'); cout << "-" << endl;
	cout.fill(' ');

	cout << left << "|"; myCentr("Транспорт", 16);
	cout << left << "|"; myCentr("Маршрут ", 10);
	cout << left << "|"; myCentr("Протяженность", 10);
	cout << left << "|"; myCentr("Время", 10);
	cout << left << " |"; myCentr(".Дата  ", 25);
	cout << "|" << endl;
	cout.width(85); cout.fill('-'); cout << "-" << endl;
	cout.fill(' ');
	for (int i = 0; i < 3; i++) {
		cout << left << "|"; cout.width(16); cout << left << records[i].surName;
		cout << left << "|"; cout.width(11); cout << left << records[i].ident;
		cout << left << "|"; cout.width(15); cout << left << records[i].year;
		std::cout.precision(2);
		cout << left << "|"; cout.width(11); cout << left << records[i].salary;
		cout << left << "|";
		printDate(records[i].date.day, records[i].date.month, records[i].date.year, 28);
		cout << "|" << endl;
	}
	cout.width(85); cout.fill('-'); cout << "-" << endl;
	cout.fill(' '); cout.width(84);  cout << left << fixed << "|Примечание: Тrр - трамвай, Тс - троллейбус, А - автобус"; cout << "|" << endl;
	cout.width(85); cout.fill('-'); cout << "-" << endl;
}


struct Date getMinDate(struct Record* records) {
	unsigned short minYear = records[0].date.year;
	for (int i = 1; i < 3; i++) {
		if (records[i].date.year < minYear)
			minYear = records[i].date.year;
	}

	unsigned short minMonth = records[0].date.month;
	for (int i = 1; i < 3; i++) {
		if (records[i].date.year == minYear and records[i].date.month < minMonth)
			minMonth = records[i].date.month;
	}

	unsigned short minDay = records[0].date.day;
	for (int i = 1; i < 3; i++) {
		if (records[i].date.year == minYear and records[i].date.month == minMonth and records[i].date.day < minDay)
			minDay = records[i].date.day;
	}

	struct Date minDate = { minDay, minMonth, minYear };
	return minDate;
};


struct Date getMaxDate(struct Record* records) {
	unsigned short maxYear = records[0].date.year;
	for (int i = 1; i < 3; i++) {
		if (records[i].date.year > maxYear)
			maxYear = records[i].date.year;
	}

	unsigned short maxMonth = records[0].date.month;
	for (int i = 1; i < 3; i++) {
		if (records[i].date.year == maxYear and records[i].date.month > maxMonth)
			maxMonth = records[i].date.month;
	}

	unsigned short maxDay = records[0].date.day;
	for (int i = 1; i < 3; i++) {
		if (records[i].date.year == maxYear and records[i].date.month == maxMonth and records[i].date.day > maxDay)
			maxDay = records[i].date.day;
	}

	struct Date minDate = { maxDay, maxMonth, maxYear };
	return minDate;
};

int  findIndex(struct Record* records, const struct Date date) {
	int ind = -1;
	for (int i = 0; i < 3; i++) {
		if (records[i].date.year == date.year && records[i].date.month == date.month && records[i].date.day == date.day)
			ind = i;
	}
	return ind;
};

void addItem(Record data)
{
	struct node* newItem = new node();
	newItem->data = data;
	if (countItem == 0) {
		newItem->next = NULL;
	}
	else
	{
		newItem->next = myHead;
	}
	myHead = newItem;
	countItem++;
}

void insertItem(int index, Record data) {
	if (not (index >= 0 and index <= countItem and countItem >= 0))
		return;
	if (index == 0) {
		addItem(data);
	}
	else {
		struct node* current = myHead;
		for (int i = 0; i < index - 1; i++) {
			current = current->next;
		}
		struct node* newItem = new node();
		newItem->data = data;
		newItem->next = current->next;
		current->next = newItem;
		countItem++;
	}
}

void editItem(int index, Record data) {
	if (index >= 0 and index < countItem and countItem>0) {
		struct node* current = myHead;
		for (int i = 0; i < index; i++) {
			current = current->next;
		}
		current->data = data;
	}
	else {
		cout << endl << "Error Index";
	}
}

void deleteItem(int index) {
	if (index >= 0 and index < countItem and countItem>0) {
		struct node* current = myHead;
		struct node* old;
		if (index == 0) {
			old = myHead;
			myHead = current->next;
			delete old;
			countItem--;
		}
		else {
			int i = 0;
			while (current) {
				if (i == index - 1) {
					old = current->next->next;
					delete current->next;
					current->next = old;
					countItem--;
					break;
				}
				i++;
				current = current->next;
			}
		}
	}

}

void printMyList() {
	struct node* current = myHead;
	cout << endl;
	while (current) {
		cout << " " << current->data.surName;
		current = current->next;
	}
}

void DrawWithList() {
	cout << endl;	cout.width(85); cout.fill('-'); cout << "-" << endl;
	cout.fill(' '); cout.width(84);  cout << left << "|Ведомость общественного транспорта";  cout << "|" << endl;
	cout.width(85); cout.fill('-'); cout << "-" << endl;
	cout.fill(' ');

	cout << left << "|"; myCentr("Транспорт", 16);
	cout << left << "|"; myCentr("Маршрут ", 10);
	cout << left << "|"; myCentr("Протяженность", 10);
	cout << left << "|"; myCentr("Время", 10);
	cout << left << " |"; myCentr(".Дата  ", 25);
	cout << "|" << endl;
	cout.width(85); cout.fill('-'); cout << "-" << endl;
	cout.fill(' ');

	struct node* current = myHead;
	while (current) {
		cout << left << "|"; cout.width(16); cout << left << current->data.surName;
		cout << left << "|"; cout.width(11); cout << left << current->data.ident;
		cout << left << "|"; cout.width(15); cout << left << current->data.year;
		std::cout.precision(2);
		cout << left << "|"; cout.width(11); cout << left << fixed << current->data.salary;
		cout << left << "|";
		printDate(current->data.date.day, current->data.date.month, current->data.date.year, 28);
		cout << "|" << endl;
		current = current->next;
	}
	cout.width(85); cout.fill('-'); cout << "-" << endl;
	cout.fill(' '); cout.width(84);  cout << left << "|Примечание: Тrр - трамвай, Тс - троллейбус, А - автобус"; cout << "|" << endl;
	cout.width(85); cout.fill('-'); cout << "-" << endl;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	struct Record records[10];

	records[0] = { "Тр", "12", 27.55, 75, {24, 02, 2022} };
	records[1] = { "Тс", "17", 13.6, 57, {17, 03, 2022} };
	records[2] = { "А", "12а", 57.3, 117, {10, 05, 2023} };
	Draw(records);

	cout << endl << "Вариант задания: Изменить записи (элементы массива структур), содержащие вводимое с клавиатуры строковое значение в поле транспорт, на значение «Русаков»" << endl;

	struct Date minDate = getMinDate(records);
	cout << "Min Date: "; cout.fill(' ');
	printDate(minDate.day, minDate.month, minDate.year, 16);
	cout << endl;

	struct Date maxDate = getMaxDate(records);
	cout << "Max Date: "; cout.fill(' ');
	printDate(maxDate.day, maxDate.month, maxDate.year, 16);
	cout << endl;

	int indMaxDate = findIndex(records, maxDate);
	int indMinDate = findIndex(records, minDate);

	struct Record newRecords[10];
	for (int i = 0; i < 3; i++) {
		if (i == indMaxDate)
			newRecords[i] = records[indMinDate];
		else if (i == indMinDate)
			newRecords[i] = records[indMaxDate];
		else
			newRecords[i] = records[i];
	}

	cout << "Practice 3 dynamic array " << endl;

	addItem(records[0]);
	addItem(records[1]);
	addItem(records[2]);
	DrawWithList();
	struct Record newRecord = { "Русаков", "А.М.", 75, 57, {01,02,2023} };
	insertItem(1, newRecord);
	DrawWithList();
	deleteItem(3);
	DrawWithList();
	struct Record editRecord = { "Мерсов", "А.А.", 75, 57, {01,02,2023} };
}



















































































































































//ok