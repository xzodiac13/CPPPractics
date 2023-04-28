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
	cout.fill(' '); cout.width(84);  cout << left << "|��������� ������������� ����������";  cout << "|" << endl;
	cout.width(85); cout.fill('-'); cout << "-" << endl;
	cout.fill(' ');

	cout << left << "|"; myCentr("���������", 16);
	cout << left << "|"; myCentr("������� ", 10);
	cout << left << "|"; myCentr("�������������", 10);
	cout << left << "|"; myCentr("�����", 10);
	cout << left << " |"; myCentr(".����  ", 25);
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
	cout.fill(' '); cout.width(84);  cout << left << fixed << "|����������: �r� - �������, �� - ����������, � - �������"; cout << "|" << endl;
	cout.width(85); cout.fill('-'); cout << "-" << endl;
}

void Zadanie_1()
{
	cout << endl << "������������ 1" << endl;
	cout << endl << "����������. ������� ����� 7" << endl;
}

struct Record Table[10] = { {"�������", "�.�.", 1975, 517.50, {01,02,2010}},
							{"�������", "�.�.", 1956, 219.10, {02,03,2020}},
							{"�������", "�.�.", 1967, 300.10, {12,12,2012}}
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

	cout << "1. ������� ��� ����������, ����� ��������, ������������� �������� � ����� � ������: ";
	cin >> a >> a1 >> a2 >> a3;
	cout << "\n2. ������� ������������ ������, ��� ������, ���� �� 1 �� (���), ����������� ���������� � ������:";
	cin >> b >> b1 >> b2 >> b3;
	cout << "\n3. ������� ������������ ������, ��� ������, ���� �� 1 �� (���), ����������� ���������� � ������:";
	cin >> c >> c1 >> c2 >> c3;


	cout << "+"; cout.width(120); cout.fill('-'); cout << "+" << endl;
	cout.fill(' ');  cout.width(120); cout << left << "| ��������� ������������� ����������"; cout << "|" << endl;
	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
	cout.fill(' ');

	cout.width(30); cout << left << "| ��� ����������";
	cout.width(20); cout << left << "| �. �������� ";
	cout.width(20); cout << left << "| ������������� �������� (��) ";
	cout.width(40); cout << left << "| ����� � ������(���)";
	cout << "|" << endl;

	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
	cout << "|"; cout.width(29); cout.fill(' '); cout << left << a;   cout << "|"; cout.width(19); cout.fill(' '); cout << left << a1;  cout << "|"; cout.width(29); cout.fill(' '); cout << left << a2;  cout << "|"; cout.width(39); cout.fill(' '); cout << left << a3;  cout << "|" << endl;
	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
	cout << "|"; cout.width(29); cout.fill(' '); cout << left << b;   cout << "|"; cout.width(19); cout.fill(' '); cout << left << b1;  cout << "|"; cout.width(29); cout.fill(' '); cout << left << b2;  cout << "|"; cout.width(39); cout.fill(' '); cout << left << b3;  cout << "|" << endl;
	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
	cout << "|"; cout.width(29); cout.fill(' '); cout << left << c;   cout << "|"; cout.width(19); cout.fill(' '); cout << left << c1;  cout << "|"; cout.width(29); cout.fill(' '); cout << left << c2;  cout << "|"; cout.width(39); cout.fill(' '); cout << left << c3;  cout << "|" << endl;
	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
	cout << "|����������: �� - �������, �� - ����������, � - �������"; cout << "                                                                 |" << endl;
	cout << "+"; cout.width(120); cout.fill('-'); cout << right << "+" << endl;
}

int Prak_1()
{
	struct Record records[10];

	records[0] = { "��", "12", 27.55, 75, {01,02,2021} };
	records[1] = { "��", "17", 13.6, 57, {02, 03, 2022}};
	records[2] = { "�", "12�", 57.3, 117,{03, 04, 2023}};
	cout << "������������ 0 " << endl;
	Draw(records, 3);
	Zadanie_1();
	Draw(Table, 10);
	return 0;
}

int Prak_1(Record T[], int& n) // ���������� ������� Prak_1 -- ������ ��� ����������� ������� Table[]
{
	struct Record Table[10];
	Table[0] = { "������", "�.�.", 1975, 517.50, {01,02,2010} };
	Table[1] = { "��������", "�.�.", 1956, 219.10, {02,03,2020} };
	Table[2] = { "����������", "�.�.", 1967, 300.10, {12,12,2012} };
	n = 3;
		Zadanie_1();
	for (int i = 0; i < 10; i++) T[i] = Table[i];
	return 0;
}

Record* Prak_1(int& n) // ���������� ������� Prak_1 -- ���������� ����� ������������ ������� Table[]
{
	static struct Record Table[10];
	Table[0] = { "������", "�.�. (0)", 1975, 517.50, {01,02,2010} };
	Table[1] = { "��������", "�.�. (1)", 1956, 219.10, {02,03,2020} };
	Table[2] = { "����������", "�.�. (2)", 1967, 300.10, {12,12,2012} };
	n = 3;
	return Table;
}


int Prak_2()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	Record MyTable[10] = {};
	int RecordCount = 0, Ocenka;
	std::cout << "�� ����� ������ �����������? (3, 4, 5): "; std::cin >> Ocenka;

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
	cout << "����� ������������ ������� �[" << n << "]: " << A << endl;

	A = (Record*)realloc(A, 10 * sizeof(Record));

	cout << "����� ������������ ������� �[10]: " << A << endl; // ����������� �� ������ �[]? 
	// � ���� ��������� ���-�� ��������� � 2 ����? :
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
		//		B[i]->LastName = A[i].LastName; ---- ������!!!!!!!!
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
	Node* head = NULL; // ������ ������
	Node* current; // ��������� �� ������� �������
	Node* newNode; // ��������� �� �����, ����������� �������
	int rowCountTable;
	Record* MyTable = Prak_1(rowCountTable); // �������� ������ (����������� �����) ��c���� Table[] 

	int regim;
	cout << "���������:" << endl
		<< "0 - � ������ (����������������)" << endl
		<< "1 - � ����� (����������������" << endl
		<< "2 - � ������ (��������������� ���������)" << endl
		<< "3 - � ����� (��������������� ���������)" << endl;
	cin >> regim;

	// 1 ����. ���������� ������ �� �able[]:
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < rowCountTable; j++)
		{
			newNode = new Node;
			if (newNode == nullptr)
			{
				cout << "������ ��������� ������";
				return -1;
			}
			newNode->info = MyTable[j];
			newNode->next = nullptr;
			newNode->prev = nullptr;
			if (!head) // head == NULL ��� head==nullptr
			{
				switch (regim)
				{
				case 2: case 3: {newNode->next = newNode;
					newNode->prev = newNode; }
				case 1: case 0: head = newNode;
				}
			}
			else // ������� � ������ ���� �� 1 �������
			{
				switch (regim)
				{
				case 1: // ���������� � ����� ����������������� ������ 
					for (current = head;
						(current->next);
						current = current->next
						);
					current->next = newNode;
					break;
				case 3: // ���������� � ����� ���������������� ���������� ������
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
				case 2: // ���������� � ������ ���������������� ���������� ������
					newNode->prev = head->prev;
					head->prev->next = newNode;
					head->prev = newNode;
					newNode->next = head;
					head = newNode;
					break;
				case 0: // ���������� � ������ ����������������� ������
				default:
					newNode->next = head;
					head = newNode;
				}
			}
		}

	}

	// 2 ����. ����� �� ����� ���������� ����� (�������� ������)
	cout << "�������� head = " << head << endl;
	switch (regim)
	{
	case 0: case 1: // ���������� � ����� ����������������� ������ 
		for (current = head; (current); current = current->next)
		{
			cout.width(20);
			cout << left << current->info.surName << " " << current->info.ident << "  ���. �����: " << current << " Next=" << current->next << " Prev=" << current->prev << endl;
		}
		break;
	case 2: case 3:; // ���������� � ����� ���������������� ���������� ������
	{
		bool bFirst = true;
		int i;
		cout << "������: " << head << endl;
		for (current = head, i = 0; i < 6; i++, current = current->next)
		{
			if (bFirst) bFirst = false;
			cout.width(20);
			cout << left << current->info.surName << " " << current->info.ident << "  ���. �����: " << current << " Next=" << current->next << " Prev=" << current->prev << endl;
		}
	}
	break;
	}
	cout << "���������� ������ ���������� �����" << endl << endl;

	// 3 ����. ���������� �������
	// ... ���������� ������� �� ��������: ....

	// 4 ����. ����� �� ����� ���������� �������
	cout << "�������� head = " << head << endl;
	switch (regim)
	{
	case 0: case 1: // ���������� � ����� ����������������� ������ 
		for (current = head; current != NULL; current = current->next)
		{
			cout.width(20);
			cout << left << current->info.surName << " " << current->info.ident << "  ���. �����: " << current << " Next=" << current->next << " Prev=" << current->prev << endl;
		}
		break;
	case 2: case 3:; // ���������� � ����� ���������������� ���������� ������
		cout << "������: " << head << endl;
		bool bFirst = true;
		for (current = head; (current != head) | bFirst; current = current->next)
		{
			if (bFirst) bFirst = false;
			cout.width(20);
			cout << left << current->info.surName << " " << current->info.ident << "  ���. �����: " << current << " Next=" << current->next << " Prev=" << current->prev << endl;
		}
		break;
	}
	cout << "���������� ������ ���������� �������" << endl << endl;

	// 5 ����. ������������ ������
	switch (regim)
	{
	case 0: case 1: // ���������� � ����� ����������������� ������ 
		for (current = head; (head);)
		{
			head = current->next;
			delete current;
			current = head; // ��� ������� ����� ������� �� ��������� ��������
		}
		break;
	case 2: case 3:; // ���������� � ����� ���������������� ���������� ������
		bool bFirst = true;
		for (current = head; (current != head) | bFirst; )
		{
			if (bFirst) bFirst = false;
			Node* delNode = current; // ���������� ����, ������� ����� �������	
			current = current->next; // ��� ������� ����� ������� �� ��������� ��������
			delete delNode;
		}
		//		cout << head->info.LastName;
		head = NULL;
		break;
	}
	if (head == NULL) cout << "������ ������, ������ �����������!";
	else cout << "���! ������ �� ������, ������ �� �����������!";
}

int Prak_4()
{
	int RecordCount = 0;
	Record* Table2file = Prak_1(RecordCount);
	FILE* textFile;
	cout << "\n�������� ������ (������):\n"; Draw(Table2file, RecordCount);

	// ������� �������� ����
	fopen_s(&textFile, "Filatov.txt", "w+");
	for (int i = 0; i < RecordCount; i++) {
		fprintf(textFile, "%s %s %d %f %d.%d.%d\n", Table2file[i].surName, Table2file[i].ident,
			Table2file[i].year, Table2file[i].salary,
			Table2file[i].date.day, Table2file[i].date.month, Table2file[i].date.year);
	}
	fclose(textFile);

	//	2.	������� 3 ������ �� ����� � ��������� ������� � ����������.
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
	cout << "\n��������� �� ��������� ����� (������-����������� ������� ������...):\n"; Draw(readRecords, 3);

	// 1.	�������� ������(��� ������(records) �� ������� �������� 0) � ���� � �������� �������.
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
	// 2.	�������� 3 ������(��� ������(records) �� ������� �������� 0) � ���� � �������� �������.
	fopen_s(&binaryFile, "Filatov.bin", "rb+");
	int iRec = 0;
	int sizeRecord = sizeof(Record);
	fread(&tmpRecord, sizeRecord, 1, binaryFile);
	while (!feof(binaryFile))
	{
		if (tmpRecord.year < 2000)			// ���� ��� �������� �� 2000
		{									// ^^^ ��������� "�������" vvv
			tmpRecord.salary += 1000;		// ����������� ��������
			fseek(binaryFile, -sizeRecord, SEEK_CUR);        // ���������� ��������� �� ������ ������� ������
			fwrite(&tmpRecord, sizeRecord, 1, binaryFile);	// ��������� ��������� � ������ ��������...
			fseek(binaryFile, 0, SEEK_CUR);					// "�������")), ��� ����� -- �������������... 
		}
		Draw(&tmpRecord, 1);					// ������ ������� ������ �� ����� � ���� ��������� ��������)))
		// readRecords[iRec] = tmpRecord;		// ��������� � ������� ��� ������
		iRec++;									// ������������ ���������� �������
		fread(&tmpRecord, sizeRecord, 1, binaryFile);	// ��������� ��������� ���� (������) �� �����, ����� feof() ���������...
	}
	fclose(binaryFile);
	cout << "\n������ ���� ������� �� ��������� �����. ���-�� �������: " << iRec << ":\n"; // Draw(readRecords, iRec);

	return 0;
}

class clDate
{
	// private:
	int year;
	int month;
	int day;
public:
	clDate() // ����������� �� ���������
	{
		day = 0; month = 0; year = 0;
	}
	clDate(int d, int m, int y) // �����������  � ����������
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
	~clDate() { cout << "���������� ������ clDate...\n"; }// ����������  

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

	bool setDate(int d, int m, int y); // �������� ������������ ����... ��. ����

	void addDay(int delta)
	{
		if (!setDate(day + delta, month, year)) // ��������� ����������� ����...
			cout << "\n ����: " << day + delta << "." << month << "." << year << " �� ���������...\n";
	}

	void printDate() { cout << day << "." << month << "." << year << "\n"; }
};

int Prak_5()
{
	// �������� ����������� �������� D5:
	clDate D1; cout << "\n  D1 = "; D1.printDate(); // �� ���������
	clDate D2(2, 2, 2022); cout << "\n  D2 = "; D2.printDate();

	struct MyDate MD = { 3, 3, 2023 };
	// printDate(MD, 16);
	clDate D3(MD); cout << "\n  D3 = "; D3.printDate();
	clDate D4(&MD); cout << "\n  D4 = "; D4.printDate();
	// �������� ������������� ������� D5:
	clDate* D5;
	D5 = new clDate(5, 5, 2000); cout << "\n  D5 = "; D5->printDate();

	clDate D6 = *D5; cout << "\n  D6 = "; D6.printDate();
	D6.addDay(5); cout << "\n  D6 + 5 ���� = "; D6.printDate();
	D6.addDay(23); cout << "\n  D6 = "; D6.printDate();

	delete D5;
	return 0;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	//Prak_0(); //������� ������������ -- ���� �������
	//Prak_1();  // ������ ������������ -- ����������� ������ �������
	//Prak_2();  // ������ ������������ -- ������������ ������� �������
	//Prak_3();  // ������ ����������� -- ��������� ������
	//Prak_4();  // ��������� ������������ -- �����
	//Prak_5();  // ����� -- ������, ������� 

}


bool clDate::setDate(int d, int m, int y) // �������� ������������ ����
{
	if (m > 0 && m < 13)
	{
		int maxDay;
		switch (m)
		{
		case 2: maxDay = (y % 4 == 0) ? 29 : 28; // ���������� ���
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