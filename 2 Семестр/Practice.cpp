#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

struct MyDate {
	unsigned short day;
	unsigned short month;
	unsigned short year;
};

struct Record
{
	char surName[20];
	char ident[20];
	double year;
	float salary;
	struct MyDate date;

};

struct Node
{
	Record info;
	Node* next;
	Node* prev;
};

void myCentr(string s, int wLine)
{
	int w = s.length();
	int delta = (wLine - w) / 2;
	cout << std::left;
	cout.width(delta); cout << " ";
	cout << s;
	cout.width(delta + 1); cout << " ";

}

void myCentr(const char* s, int wLine)
{
	int w = strlen(s);
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
	if (day > 9) cout << day; else cout << "0" << day;
	cout << ".";
	if (month > 9) cout << month; else cout << "0" << month;
	cout << ".";
	cout << year;
	cout.width(delta); cout << " ";
}

void printDate(struct MyDate date1, int wLine) 
{
	printDate(date1.day, date1.month, date1.year, wLine);
}

void printDate(struct MyDate* date2, int wLine) 
{
	printDate(date2->day, date2->month, date2->year, wLine);
}

void printDate(struct MyDate& date3, unsigned short wLine) 
{
	printDate(date3.day, date3.month, date3.year, wLine);
}

void Draw(struct Record* records, int RowCount) {
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

void Zadanie_1()
{
	cout << endl << "Практическая 1" << endl;
	cout << endl << "Выполнение. Вариант номер 7" << endl;
}

struct Record Table[10] = { {"Русаков", "А.М.", 1975, 517.50, {01,02,2010}},
							{"Русаков", "А.М.", 1956, 219.10, {02,03,2020}},
							{"Русаков", "А.М.", 1967, 300.10, {12,12,2012}}
};

int Prak_0()
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

int Prak_1()
{
	struct Record records[10];

	records[0] = { "Тр", "12", 27.55, 75, {01,02,2021} };
	records[1] = { "Тс", "17", 13.6, 57, {02, 03, 2022}};
	records[2] = { "А", "12а", 57.3, 117,{03, 04, 2023}};
	cout << "Практическая 0 " << endl;
	Draw(records, 3);
	Zadanie_1();
	Draw(Table, 10);
	return 0;
}

int Prak_1(Record T[], int& n) // перегрузка функции Prak_1 -- только для возвращения массива Table[]
{
	struct Record Table[10];
	Table[0] = { "Иванов", "И.И.", 1975, 517.50, {01,02,2010} };
	Table[1] = { "Петренко", "П.П.", 1956, 219.10, {02,03,2020} };
	Table[2] = { "Панковский", "М.С.", 1967, 300.10, {12,12,2012} };
	n = 3;
		Zadanie_1();
	for (int i = 0; i < 10; i++) T[i] = Table[i];
	return 0;
}

Record* Prak_1(int& n) // перегрузка функции Prak_1 -- возвращаем адрес статического массива Table[]
{
	static struct Record Table[10];
	Table[0] = { "Иванов", "И.И. (0)", 1975, 517.50, {01,02,2010} };
	Table[1] = { "Петренко", "П.П. (1)", 1956, 219.10, {02,03,2020} };
	Table[2] = { "Панковский", "М.С. (2)", 1967, 300.10, {12,12,2012} };
	n = 3;
	return Table;
}


int Prak_2()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	Record MyTable[10] = {};
	int RecordCount = 0, Ocenka;
	std::cout << "На какую оценку претендуете? (3, 4, 5): "; std::cin >> Ocenka;

	if (Ocenka == 3)
		for (int i = 0; i < 3; i++, MyTable[i] = Table[i]);

	if (Ocenka == 4)
		Prak_1(MyTable, RecordCount);

	if (Ocenka == 5)
	{
		Record* StaticTable;
		StaticTable = Prak_1(RecordCount);
		for (int i = 0; i < RecordCount; i++)
		{
			MyTable[i] = *(StaticTable + i);
		}
	}

	int n = MyTable[0].year;

	Record* A, * A_old;
	A = (Record*)malloc(n * sizeof(Record));
	if (A == NULL) return -1;
	for (int i = 0; i < n; i++)
	{
		A[i] = MyTable[i % 3]; // 0, 1, 2, 0, 1, 2, ...
	}

	A_old = A;
	cout << "Адрес расположения массива А[" << n << "]: " << A << endl;

	A = (Record*)realloc(A, 10 * sizeof(Record));

	cout << "Адрес расположения массива А[10]: " << A << endl; // Различаются ли адреса А[]? 
	// А если увеличить кол-во элементов в 2 раза? :
	//	A = (Record*)realloc(A, 2 * n * sizeof(Record));
	if (A == NULL)
		A = A_old;

	Record** B;
	B = new Record * [10];
	for (int i = 0; i < RecordCount; i++)
	{
		B[i] = new Record;
		*(B[i]) = A[i];
		//		B[i]->year = A[i].year; 
		//		B[i]->LastName = A[i].LastName; ---- НЕЛЬЗЯ!!!!!!!!
		//		strcpy(B[i]->LastName, A[i].LastName);
		cout << A[i].ident << " " << A[i].surName << " " << A[i].year << " ";
		printDate(B[i]->date, 10);
		cout << " <-> " << B[i]->ident << " " << B[i]->surName << " " << B[i]->year << " ";
		printDate(B[i]->date, 10);
		cout << endl;
	}
	for (int i = 0; i < RecordCount; delete[]B[i], i++);
	delete B;
	free(A);
	return 0;
}

int Prak_3()
{
	Node* head = NULL; // Голова списка
	Node* current; // Указатель на текущий элемент
	Node* newNode; // Указатель на новый, создаваемый элемент
	int rowCountTable;
	Record* MyTable = Prak_1(rowCountTable); // получаем ссылку (статический адрес) маcсива Table[] 

	int regim;
	cout << "Добавлять:" << endl
		<< "0 - в начало (однонаправленный)" << endl
		<< "1 - в конец (однонаправленный" << endl
		<< "2 - в начало (двунаправленный кольцевой)" << endl
		<< "3 - в конец (двунаправленный кольцевой)" << endl;
	cin >> regim;

	// 1 этап. Заполнение списка из Тable[]:
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < rowCountTable; j++)
		{
			newNode = new Node;
			if (newNode == nullptr)
			{
				cout << "Ошибка выделения памяти";
				return -1;
			}
			newNode->info = MyTable[j];
			newNode->next = nullptr;
			newNode->prev = nullptr;
			if (!head) // head == NULL или head==nullptr
			{
				switch (regim)
				{
				case 2: case 3: {newNode->next = newNode;
					newNode->prev = newNode; }
				case 1: case 0: head = newNode;
				}
			}
			else // имеется в списке хотя бы 1 элемент
			{
				switch (regim)
				{
				case 1: // добавление в конец однонаправленного списка 
					for (current = head;
						(current->next);
						current = current->next
						);
					current->next = newNode;
					break;
				case 3: // добавление в конец двунаправленного кольцевого списка
				{
					bool bFirst = true;
					for (current = head; (current->next != head) | bFirst; current = current->next)
						if (bFirst) bFirst = false;
					newNode->prev = current;
					newNode->next = head;
					current->next = newNode;
					head->prev = newNode;
					break;
				}
				case 2: // добавление в начало двунаправленного кольцевого списка
					newNode->prev = head->prev;
					head->prev->next = newNode;
					head->prev = newNode;
					newNode->next = head;
					head = newNode;
					break;
				case 0: // добавление в начало однонаправленного списка
				default:
					newNode->next = head;
					head = newNode;
				}
			}
		}

	}

	// 2 этап. Вывод на экран результата ввода (создания списка)
	cout << "Значение head = " << head << endl;
	switch (regim)
	{
	case 0: case 1: // добавление в конец однонаправленного списка 
		for (current = head; (current); current = current->next)
		{
			cout.width(20);
			cout << left << current->info.surName << " " << current->info.ident << "  Тек. адрес: " << current << " Next=" << current->next << " Prev=" << current->prev << endl;
		}
		break;
	case 2: case 3:; // добавление в конец двунаправленного кольцевого списка
	{
		bool bFirst = true;
		int i;
		cout << "Голова: " << head << endl;
		for (current = head, i = 0; i < 6; i++, current = current->next)
		{
			if (bFirst) bFirst = false;
			cout.width(20);
			cout << left << current->info.surName << " " << current->info.ident << "  Тек. адрес: " << current << " Next=" << current->next << " Prev=" << current->prev << endl;
		}
	}
	break;
	}
	cout << "Завершение вывода результата ввода" << endl << endl;

	// 3 этап. Выполнение задания
	// ... реализация задания по варианту: ....

	// 4 этап. Вывод на экран результата задания
	cout << "Значение head = " << head << endl;
	switch (regim)
	{
	case 0: case 1: // добавление в конец однонаправленного списка 
		for (current = head; current != NULL; current = current->next)
		{
			cout.width(20);
			cout << left << current->info.surName << " " << current->info.ident << "  Тек. адрес: " << current << " Next=" << current->next << " Prev=" << current->prev << endl;
		}
		break;
	case 2: case 3:; // добавление в конец двунаправленного кольцевого списка
		cout << "Голова: " << head << endl;
		bool bFirst = true;
		for (current = head; (current != head) | bFirst; current = current->next)
		{
			if (bFirst) bFirst = false;
			cout.width(20);
			cout << left << current->info.surName << " " << current->info.ident << "  Тек. адрес: " << current << " Next=" << current->next << " Prev=" << current->prev << endl;
		}
		break;
	}
	cout << "Завершение вывода результата задания" << endl << endl;

	// 5 этап. Освобождение памяти
	switch (regim)
	{
	case 0: case 1: // добавление в конец однонаправленного списка 
		for (current = head; (head);)
		{
			head = current->next;
			delete current;
			current = head; // тот который будем удалять на следующей итерации
		}
		break;
	case 2: case 3:; // добавление в конец двунаправленного кольцевого списка
		bool bFirst = true;
		for (current = head; (current != head) | bFirst; )
		{
			if (bFirst) bFirst = false;
			Node* delNode = current; // запоминаем узел, который будем удалять	
			current = current->next; // тот который будем удалять на следующей итерации
			delete delNode;
		}
		//		cout << head->info.LastName;
		head = NULL;
		break;
	}
	if (head == NULL) cout << "Список пустой, память освобождена!";
	else cout << "УПС! Список не пустой, память не освобождена!";
}

int Prak_4()
{
	int RecordCount = 0;
	Record* Table2file = Prak_1(RecordCount);
	FILE* textFile;
	cout << "\nИсходные данные (массив):\n"; Draw(Table2file, RecordCount);

	// Создаем тектовый файл
	fopen_s(&textFile, "Filatov.txt", "w+");
	for (int i = 0; i < RecordCount; i++) {
		fprintf(textFile, "%s %s %d %f %d.%d.%d\n", Table2file[i].surName, Table2file[i].ident,
			Table2file[i].year, Table2file[i].salary,
			Table2file[i].date.day, Table2file[i].date.month, Table2file[i].date.year);
	}
	fclose(textFile);

	//	2.	Считать 3 записи из файла в текстовом формате и отобразить.
	fopen_s(&textFile, "Filatov.txt", "r");
	Record readRecords[3] = {};
	for (int i = 0; i < 3; i++) {
		fscanf_s(textFile, "%s", readRecords[i].surName, _countof(readRecords[i].surName));
		fscanf_s(textFile, "%s", readRecords[i].ident, _countof(readRecords[i].ident));
		fscanf_s(textFile, "%d", &readRecords[i].year);
		fscanf_s(textFile, "%f", &readRecords[i].salary);
		fscanf_s(textFile, "%d.%d.%d", &readRecords[i].date.day, &readRecords[i].date.month, &readRecords[i].date.year);
	}
	fclose(textFile);
	cout << "\nПрочитано из тектового файла (пробел-разделитель исказил данные...):\n"; Draw(readRecords, 3);

	// 1.	Записать записи(три строки(records) из таблицы практики 0) в файл в бинарном формате.
	Record tmpRecord;
	FILE* binaryFile;
	fopen_s(&binaryFile, "Filatov.bin", "w");
	for (int i = 0; i < RecordCount; i++)
	{
		tmpRecord = Table2file[i];
		fwrite(&tmpRecord, sizeof(tmpRecord), 1, binaryFile);
	}
	fclose(binaryFile);
	// return 0;
	// 2.	Записать 3 записи(три строки(records) из таблицы практики 0) в файл в бинарном формате.
	fopen_s(&binaryFile, "Filatov.bin", "rb+");
	int iRec = 0;
	int sizeRecord = sizeof(Record);
	fread(&tmpRecord, sizeRecord, 1, binaryFile);
	while (!feof(binaryFile))
	{
		if (tmpRecord.year < 2000)			// если год рождения до 2000
		{									// ^^^ выполняем "задание" vvv
			tmpRecord.salary += 1000;		// увеличиваем зарплату
			fseek(binaryFile, -sizeRecord, SEEK_CUR);        // возвращаем указатель на начало текущей записи
			fwrite(&tmpRecord, sizeRecord, 1, binaryFile);	// сохраняем измененую в записи зарплату...
			fseek(binaryFile, 0, SEEK_CUR);					// "костыль")), без этого -- зацикливается... 
		}
		Draw(&tmpRecord, 1);					// вывели текущую запись на экран в виде отдельной таблички)))
		// readRecords[iRec] = tmpRecord;		// сохранили в массиве для вывода
		iRec++;									// подсчитываем количество записей
		fread(&tmpRecord, sizeRecord, 1, binaryFile);	// считываем следующий блок (запись) из файла, чтобы feof() отработал...
	}
	fclose(binaryFile);
	cout << "\nДанные были считаны из бинарного файла. Кол-во записей: " << iRec << ":\n"; // Draw(readRecords, iRec);

	return 0;
}

class clDate
{
	// private:
	int year;
	int month;
	int day;
public:
	clDate() // Конструктор по умолчанию
	{
		day = 0; month = 0; year = 0;
	}
	clDate(int d, int m, int y) // Конструктор  с параметами
	{
		setDate(d, m, y);
	}
	clDate(struct MyDate mD)
	{
		day = mD.day; month = mD.month; year = mD.year;
	}
	clDate(struct MyDate* pD)
	{
		day = pD->day; month = pD->month; year = pD->year;
	}
	~clDate() { cout << "Диструктор класса clDate...\n"; }// Деструктор  

	MyDate getDate()
	{
		MyDate MD; MD.year = year;
		MD.month = month;
		MD.day = day;
		return MD;
	}

	bool setDate(MyDate mD)
		// { day = mD.day; month = mD.month; year = mD.year; }
	{
		return setDate(mD.day, mD.month, mD.year);
	}

	bool setDate(int d, int m, int y); // проверка корректности даты... см. ниже

	void addDay(int delta)
	{
		if (!setDate(day + delta, month, year)) // проверяем увеличенную дату...
			cout << "\n Дата: " << day + delta << "." << month << "." << year << " не корректна...\n";
	}

	void printDate() { cout << day << "." << month << "." << year << "\n"; }
};

int Prak_5()
{
	// Создание статических объектов D5:
	clDate D1; cout << "\n  D1 = "; D1.printDate(); // по умолчанию
	clDate D2(2, 2, 2022); cout << "\n  D2 = "; D2.printDate();

	struct MyDate MD = { 3, 3, 2023 };
	// printDate(MD, 16);
	clDate D3(MD); cout << "\n  D3 = "; D3.printDate();
	clDate D4(&MD); cout << "\n  D4 = "; D4.printDate();
	// Создание динамического объекта D5:
	clDate* D5;
	D5 = new clDate(5, 5, 2000); cout << "\n  D5 = "; D5->printDate();

	clDate D6 = *D5; cout << "\n  D6 = "; D6.printDate();
	D6.addDay(5); cout << "\n  D6 + 5 дней = "; D6.printDate();
	D6.addDay(23); cout << "\n  D6 = "; D6.printDate();

	delete D5;
	return 0;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	//Prak_0(); //нулевая практическая -- ввод записей
	//Prak_1();  // первая практическая -- статический массив записей
	//Prak_2();  // вторая практическая -- динамические массивы записей
	//Prak_3();  // третья пратическая -- связанные списки
	//Prak_4();  // четвертая практическая -- файлы
	//Prak_5();  // пятая -- классы, объекты 

}


bool clDate::setDate(int d, int m, int y) // проверка корректности даты
{
	if (m > 0 && m < 13)
	{
		int maxDay;
		switch (m)
		{
		case 2: maxDay = (y % 4 == 0) ? 29 : 28; // високосный год
		case 1: case 3: case 5: case 7:case 8: case 10: case 12: maxDay = 31;
		default: maxDay = 30;
		}
		if (d > 0 && d <= maxDay)
		{
			day = d; month = m; year = y;
			return true;
		}
		else return false;
	}
	return false;

}