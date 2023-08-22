#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <io.h>
#include <Windows.h>
#include<conio.h>
#include<iomanip>
#include <algorithm>

using namespace std;

class library
{
	int id;
	string name;
	string address;
public:
	library()
	{
		name = address = " ";
		id = 0;
	}
	library(library& ob)//����������� �����������
	{
		name = move(ob.name);
		address = move(ob.address);
		id = ob.id;
	}
	library(string name, string address, int id)
	{
		this->name = name;
		this->address = address;
		this->id = id + 100000;
	}
	void setaddress(string address)
	{
		this->address = address;
	}
	void setid(int id)
	{
		this->id = id;
	}
	void setname(string name)
	{
		this->name = name;
	}
	string getname()
	{
		return this->name;
	}
	string getaddress()
	{
		return this->address;
	}
	int getid()
	{
		return id;
	}
	void show() {
		cout << "" << endl;
		cout << " |��� = " << setw(15) << this->name;
		cout << " |������ = " << setw(15) << this->address;
		cout << " |id = " << setw(15) << this->id << "|";
		cout << endl;
	}
};

class book
{
	int id;
	int kol;
	int year;
	bool e;
	string name;
	string author;
	string position;
	string izd;
	int lastid;
public:
	book()
	{
		izd = name = author = position = " ";
		year = lastid = kol = id = 0;
		e = 0;
	}
	void sete() { if (e) { e = 0; } else { e = 1; } }
	void info_b()
	{
		cout << " |�������� " << setw(15) << name; cout << " |����� " << setw(15) << author; cout << " |��������� �� " << setw(15) << position; cout << " |���������� �������" << setw(15) << kol << " |������������" << setw(15) << izd << " |��� ������������" << setw(15) << year << " |id ���������� ��������" << setw(15) << lastid << " |���������" << setw(15);
		if (e) { cout << " � ��������"; }
		else { cout << " � ����������"; }
		cout << "|" << endl;
	}
	void setyear(int i) { year = i; }
	void setlastid(int i) { lastid = i; }
	void setizd(string i) { izd = i; }
	void setid(int pc)
	{
		id += pc;
	}
	void setkol(int k) { kol = k; }
	void setname(string n)
	{
		name = n;
	}
	void setauthor(string a)
	{
		author = a;
	}
	void setposithion(library y)
	{
		position = y.getaddress();
	}
	string getname() { return name; }
	bool gete() { return e; }
	string getauthor() { return author; }
	int getyear() { return year; }
	int getlastid() { return lastid; }
};

class client
{
	int id;
	string name;
	string login;
	string sex;
	int age;
	string password;
	bool e;
public:
	client() :age(0), name(" "), sex(" "), password("1111"), login(" "), id(0), e(0) {}
	void setage(int a)
	{
		age = a;
	}
	void setname(string n)
	{
		name = n;
	}
	void setsex(string s)
	{
		sex = s;
	}
	void setlogin(string l)
	{
		login = l;
	}
	void setpassword(string p)
	{
		password = p;
	}
	void setid(int c)
	{
		id = 0;
		if (sex == "���") {
			id += 100000;
		}
		else if (sex == "���") {
			id += 200000;
		}
		else {
			id += 300000;
		}
		if (age >= 0 && age <= 3)
			id += 10000;
		if (age >= 4 && age <= 8)
			id += 20000;
		if (age >= 9 && age <= 14)
			id += 30000;
		if (age >= 15 && age <= 17)
			id += 40000;
		if (age >= 18 && age <= 29)
			id += 50000;
		if (age >= 30 && age <= 39)
			id += 60000;
		if (age >= 40 && age <= 55)
			id += 70000;
		if (age >= 56 && age <= 70)
			id += 80000;
		if (age >= 71)
			id += 90000;
		id += c;
	}
	void sete() { if (e) { e = 0; } else { e = 1; } }

	string getpassword()
	{
		return password;
	}
	string getlogin()
	{
		return login;
	}
	string getsex()
	{
		return sex;
	}
	string getname()
	{
		return name;
	}
	int getage()
	{
		return age;
	}
	int getid()
	{
		return id;
	}
	bool gete() { return e; }
	void show()
	{
		cout << endl;
		cout << " |��� = " << setw(15) << name;
		cout << " |������� = " << setw(15) << age;
		cout << " |id = " << setw(15) << id << "|";
		cout << endl;
	}

};

class admin
{
	int id;
	bool atr;
	int age;
	string login;
	string name;
	string password;
public:
	admin()
	{
		id = age = 0;
		atr = 0;
		login = name = password = " ";
	}
	void setname(string n) { name = n; }
	void setlogin(string l) { login = l; }
	void setpassword(string p) { password = p; }
	void setage(int a) { age = a; }
	void setid(int i) {
		id = 100000;
		if (age >= 0 && age <= 3)
			id += 10000;
		if (age >= 4 && age <= 8)
			id += 20000;
		if (age >= 9 && age <= 14)
			id += 30000;
		if (age >= 15 && age <= 17)
			id += 40000;
		if (age >= 18 && age <= 29)
			id += 50000;
		if (age >= 30 && age <= 39)
			id += 60000;
		if (age >= 40 && age <= 55)
			id += 70000;
		if (age >= 56 && age <= 70)
			id += 80000;
		if (age >= 71)
			id += 90000;
		id += i;
	}
	void setatr(bool a) { atr = a; }
	string getname() { return name; }
	string getlogin() { return login; }
	string  getpassword() { return password; }
	bool getatr() { return atr; }
	void show() {
		cout << " |��� " << setw(15) << name << " |����� " << setw(15) << login << " |������������ ���������� ��������������� ";
		if (atr) { cout << "��"; }
		else { cout << "���"; }
		cout << " |������� " << setw(15) << age << "|" << endl;
	}
};

class order
{
	client user;
	book boo;
	int id;
public:
	order() { id = 0; }
	~order() { cout << "����� ����������\n"; }
	void setid(int i) { id = i; }
	void setuser(client a) { user = a; }
	void setbook(book b) { boo = b; }
	client getuser() { return user; }
	book getbook() { return boo; }
	void show() { cout << " ��������\n"; user.show(); cout << " �����\n"; boo.info_b(); }
};


template <typename T>
void cen(T* v, int b, int e)
{
	while (true)
	{
		while (!(cin >> *v) || (cin.peek() != '\n')) {
			cin.clear();
			while (cin.get() != '\n');
			cout << "�������� �������� ��������\n";
		}
		if (b == e) {
			if (b == 0) { return; }
			else if (*v > 0) { return; }
			else { cout << "�������� �������� ��������\n"; }
		}
		else {
			if (*v >= b && *v <= e) { return; }
			else { cout << "�������� �������� ��������\n"; }
		}
		cout << endl << endl;
	}
}

void admin_enter(FILE*);
void user_enter();

void enter_in_acc(FILE*, FILE*, FILE*, FILE*);
void enter_without_acc(FILE*, FILE*);

void registr_acc(FILE*);
void showusers(FILE*);

void showlibrary(FILE*);
void addlibrary(FILE*);

void addbook(FILE*, FILE*);
void showbooks(FILE*);

void addadmin(FILE*);
void showadmin(FILE*);

void addorder(FILE*, client, FILE*);
void deleteorder(client, FILE*, FILE*);
void showorder(FILE*);

void showbooks_indiv(FILE*, int);

library searchlibrary(string, FILE*);
book searchbook(string, FILE*);
client searchuser(string, FILE*);
admin searchadmin(string, FILE*);
order searchorder(string, FILE*, FILE*);

void editl(library&);
void editl1(FILE*);

void editb(book&, FILE*);
void editb1(FILE*, FILE*);

void editc(client&);
void editc1(FILE*);
void editc2(FILE*, client&);

void edita(admin&);
void edita1(FILE*);
void edita2(FILE*, admin&);

int comparel(const void*, const void*);
int compareb(const void*, const void*);
int compareb1(const void*, const void*);
int compareu(const void*, const void*);
int compareo(const void*, const void*);
int comparea(const void*, const void*);


int main()
{
	FILE* adm = 0;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	fopen_s(&adm, "adm.txt", "ab");
	if (adm != 0)
	{
		admin s;
		int g = _filelength(_fileno(adm)) / sizeof(admin);
		if (g == 0)
		{
			s.setage(17);
			s.setlogin("dytni");
			s.setname("����");
			s.setatr(1);
			s.setpassword("1331");
			s.setid(0);
			fwrite(&s, sizeof(admin), 1, adm);
		}
		fclose(adm);
	}
	else {
		cout << "������ �������� �����" << endl;
		system("pause");
		return 0;
	}
	int c;
	do {
		system("cls");
		cout << " ������� 1 ��� ����� ��� ������������ \n" << " ������� 2 ��� ����� ��� �������������� \n ������� 0 ��� ������ �� ���������\n";
		cen(&c, 0, 2);
		switch (c) {
		case 2: {
			system("cls");
			admin_enter(adm);
			break;
		}
		case 1: {
			system("cls");
			user_enter();
			break;
		}
		}
	} while (c != 0);

}

void admin_enter(FILE* adm)
{
	FILE* user = 0, * lib = 0, * books = 0, * ord = 0;

	string l;
	admin a;
	int j;
	do {
		cout << "������� ����� \n";
		cin >> l;
		a = searchadmin(l, adm);
		if (a.getlogin() == " ")
		{
			cout << "������������ �� ������\t ����������� ��� ��� - ENTER\t ����� - ����� �������\n";
			j = _getch();
		}
	} while (a.getlogin() == " " && j == 13);
	if (a.getlogin() == " " && j != 13)
	{
		system("cls");
		return;
	}
	cout << "������� ������ \n";
	cin >> l;
	j = 0;
	if (l != a.getpassword())
	{
		do {
			cout << "������� ������ ��� ��� \n";
			cin >> l;
			if (l != a.getpassword())
			{
				cout << "������� ENTER � ���������� ��� ��� ��� ������� ����� ������� ��� ������\n";
				j = _getch();
				if (j != 13) { return; }
			}
		} while (a.getpassword() != l);
	}
	system("cls");
	if (a.getatr()) {
		int c;
		do {
			cout << "\n\n\n �������� �������� �������\n 1. �������� �������������\n 2. �������� ����\n 3. �������� ���������\n 4. ���������� �������������\n 5. ���������� ����\n 6. ���������� ���������\n 7. �������������� �������������\n 8. �������������� ����\n 9. �������������� ���������\n 10. �������� ���������������\n 11. ���������� ��������������� \n 12. ������ �������������� ���� ������� ��� �������� ��� ���� \n 13. �������������� ������ ��������\n 14. �������� �������\n 15. ����� �������� ����� ��������� ����\n ������� 0 ��� ������ �� ������ ��������������\n";

			cen(&c, 0, 15);
			switch (c) {
			case 1:
				system("cls");
				showusers(user);
				break;
			case 3:
				system("cls");
				showlibrary(lib);
				break;
			case 6:
				system("cls");
				addlibrary(lib);
				break;
			case 2:
				system("cls");
				showbooks(books);
				break;
			case 5:
				system("cls");
				addbook(books, lib);
				break;
			case 4:
				system("cls");
				registr_acc(user);
				break;
			case 7: {
				system("cls");
				showusers(user);
				editc1(user);
				break;
			}
			case 8:
			{
				system("cls");
				showbooks(books);
				editb1(books, lib);
				break;
			}
			case 9:
			{
				system("cls");
				showlibrary(lib);
				editl1(lib);
				break;
			}
			case 10:
			{
				system("cls");
				showadmin(adm);
				break;
			}
			case 11:
			{
				system("cls");
				addadmin(adm);
				break;
			}
			case 12:
			{
				system("cls");
				showadmin(adm);
				edita1(adm);
				break;
			}
			case 13:
			{
				system("cls");
				edita2(adm, a);
				break;
			}
			case 14:
			{
				system("cls");
				showorder(ord);
				break;
			}
			case 15: {
				system("cls");
				int key;
				cout << "������� ���\n";
				cen(&key, 1, 1);
				showbooks_indiv(books, key);
				break;
			}
			}
		} while (c != 0);
	}
	else {
		int c;
		do {
			cout << "\n\n\n �������� �������� �������\n 1. �������� �������������\n 2. �������� ����\n 3. �������� ���������\n 4. ���������� �������������\n 5. ���������� ����\n 6. ���������� ���������\n 7. �������������� �������������\n 8. �������������� ����\n 9. �������������� ���������\n 10. �������� �������\n 11. ����� �������� ����� ��������� ����\n ������� 0 ��� ������ �� ������ ��������������\n";

			cen(&c, 0, 11);
			switch (c) {
			case 1:
				system("cls");
				showusers(user);
				break;
			case 3:
				system("cls");
				showlibrary(lib);
				break;
			case 6:
				system("cls");
				addlibrary(lib);
				break;
			case 2:
				system("cls");
				showbooks(books);
				break;
			case 5:
				system("cls");
				addbook(books, lib);
				break;
			case 4:
				system("cls");
				registr_acc(user);
				break;
			case 7: {
				system("cls");
				showusers(user);
				editc1(user);
				break;
			}
			case 8:
			{
				system("cls");
				showbooks(books);
				editb1(books, lib);
				break;
			}
			case 9:
			{
				system("cls");
				showlibrary(lib);
				editl1(lib);
				break;
			}
			case 10:
			{
				system("cls");
				showorder(ord);
				break;
			}
			case 11: {
				system("cls");
				int key;
				cout << "������� ���\n";
				cen(&key, 1, 1);
				showbooks_indiv(books, key);
				break;
			}
			}
		} while (c != 0);
	}
	return;
}
void user_enter()
{
	FILE* user = 0, * books = 0, * lib = 0, * ord = 0;
	int c;
	do {
		system("cls");
		cout << " ������������ \n" << " ������� 1 ��� ����� � �������\n" << " ������� 2 ��� �����������\n" << " ������� 3 ��� ����� ��� �������\n\n ������� 0 ��� ������ �� ������ ������������\n";
		cen(&c, 0, 3);
		switch (c) {
		case 1:
			system("cls");
			enter_in_acc(user, books, lib, ord);
			break;
		case 2:

			system("cls");
			registr_acc(user);
			break;
		case 3:
			system("cls");
			enter_without_acc(books, lib);
			break;
		}
	} while (c != 0);
	return;
}

void enter_in_acc(FILE* user, FILE* books, FILE* lib, FILE* ord)
{
	string l;
	client a;
	int j = 0;
	do {
		cout << "������� ����� \n";
		cin >> l;
		a = searchuser(l, user);
		if (a.getlogin() == " ")
		{
			cout << "������������ �� ������\t ����������� ��� ��� - ENTER\t ����� - ����� �������\n";
			j = _getch();
		}
	} while (a.getlogin() == " " && j == 13);
	if (a.getlogin() == " ")
	{
		system("cls");
		return;
	}
	cout << "������� ������ \n";
	cin >> l;
	j = 0;
	if (l != a.getpassword())
	{
		do {
			cout << "������� ������ ��� ��� \n";
			cin >> l;
			if (l != a.getpassword())
			{
				cout << "������� ENTER � ���������� ��� ��� ��� ������� ����� ������� � ���������� � �������������� ��� �������������� ������\n";
				j = _getch();
				if (j != 13) { return; }
			}
		} while (a.getpassword() != l);
	}
	j = -1;
	system("cls");
	cout << "������������ " << a.getname() << endl;;
	do {
		cout << "\n\n\n �������� �������� �������\n 1. �������� ����\n 2. �������� ���������\n 3. �������������� ��������\n 4. ����� �����\n 5. ������� �����\n 6. ����� �������� ����� ��������� ����\n ������� 0 ��� ������ �� ������ ��������������\n";
		cen(&j, 0, 6);
		switch (j)
		{
		case 1:
			system("cls");
			showbooks(books);
			break;
		case 2:
			system("cls");
			showlibrary(lib);
			break;
		case 3: {
			system("cls");
			showusers(user);
			editc2(user, a);
			break;
		}
		case 4:
		{
			if (a.gete())
			{
				cout << "�� ���� ��� �������� �����\n";
				break;
			}
			system("cls");
			showbooks(books);
			addorder(ord, a, books);
			fopen_s(&user, "user.txt", "r+b");
			if (user != 0)
			{
				int id = 0;
				int g = _filelength(_fileno(user)) / sizeof(client);
				client* arr = new client[g];
				fread(arr, sizeof(client), g, user);
				client s;
				string l = a.getlogin();
				while (fread(&arr, sizeof(client), 1, user))
				{
					if (arr[id].getlogin() == l)
						break;
					id++;
				}
				s = arr[id];
				s.sete();
				a = s;
				fseek(user, id * sizeof(client), 0);
				fwrite(&s, sizeof(client), 1, user);
				fclose(user);
			}
			else
			{
				cout << "������ �������� �����" << endl;
				return;
			}
			break;
		}
		case 5:
		{
			if (!a.gete())
			{
				cout << "� ��� ��� ����\n";
				break;
			}
			system("cls");
			deleteorder(a, ord, books);
			int id = 0;
			fopen_s(&user, "user.txt", "r+b");
			if (user != 0)
			{
				int g = _filelength(_fileno(user)) / sizeof(client);
				client* arr = new client[g];
				fread(arr, sizeof(client), g, user);
				client s;
				string l = a.getlogin();
				while (fread(&arr, sizeof(client), 1, user))
				{
					if (arr[id].getlogin() == l)
						break;
					id++;
				}
				s = arr[id];
				s.sete();
				a = s;
				fseek(user, id * sizeof(client), 0);
				fwrite(&s, sizeof(client), 1, user);
				fclose(user);
			}
			else
			{
				cout << "������ �������� �����" << endl;
				return;
			}
			break;
		}
		case 6: {
			system("cls");
			int key;
			cout << "������� ���\n";
			cen(&key, 1, 1);
			showbooks_indiv(books, key);
			break; }
		}
	} while (j != 0);
}
void enter_without_acc(FILE* books, FILE* lib)
{
	int j;
	system("cls");
	cout << "������������ " << endl;;
	do {
		cout << "\n\n\n �������� �������� �������\n 1. �������� ����\n 2. �������� ���������\n 3. ����� �������� ����� ��������� ����\n ������� 0 ��� ������ �� ������ ��������������\n";
		cen(&j, 0, 3);
		switch (j)
		{
		case 1:
			system("cls");
			showbooks(books);
			break;
		case 2:
			system("cls");
			showlibrary(lib);
			break;
		case 3: {
			system("cls");
			int key;
			cout << "������� ���\n";
			cen(&key, 1, 1);
			showbooks_indiv(books, key);
			break;
		}
		}
	} while (j != 0);
}

void registr_acc(FILE* user)
{
	fopen_s(&user, "user.txt", "ab");
	if (user != 0) {
		cout << "\n������������ \n";
		string n, pas1, pas2;
		int age;
		client per;
		cout << "\n������� �����\n";
		cin >> n;
		per.setlogin(n);
		cout << "������� ���\n";
		cin >> n;
		per.setname(n);
		cout << "������� ��� � ������� ���/��� ��� ��������\n";
		cin >> n;
		per.setsex(n);
		cout << "������� ������� \n";
		cen(&age, 1, 1);
		per.setage(age);

		cout << "���������� ������\n";
		cin >> pas1;
		do {
			cout << "����������� ��� ������\n";
			cin >> pas2;
			if (pas1 != pas2) {
				cout << "������ �� ��������� ���������� ��� ���\n";
			}
		} while (pas1 != pas2);
		per.setpassword(pas2);
		cout << "��� �������������� ����� ������� ENTER\n";
		int b = _getch();
		if (b == 13)
		{
			editc(per);
		}
		int g = _filelength(_fileno(user)) / sizeof(client);
		per.setid(g);
		fwrite(&per, sizeof(client), 1, user);
		fclose(user);
		return;
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}
}
void showusers(FILE* user)
{
	fopen_s(&user, "user.txt", "rb");
	if (user != 0) {
		int g = _filelength(_fileno(user)) / sizeof(client);
		client per, * arr = new client[g];
		fread(arr, sizeof(client), g, user);
		fclose(user);
		qsort(arr, g, sizeof(client), compareu);
		fopen_s(&user, "user.txt", "wb");
		if (user != 0)
		{
			fwrite(arr, sizeof(client), g, user);
			fclose(user);
		}
		else
		{
			cout << "������ �������� �����" << endl;
			system("pause");
			return;
		}
		fopen_s(&user, "user.txt", "rb");
		if (user != 0)
		{
			client per;
			int k = 1;
			fread(arr, sizeof(client), g, user);
			if (g > 0)
			{
				for (int i = 0; i < g; i++)
				{
					fread(&arr, sizeof(client), 1, user);
					arr[i].show();
				}
			}
			fclose(user);


		}
		else
		{
			cout << "������ �������� �����" << endl;
			return;
		}
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}

}//���������� �� �� ���� ����

void addlibrary(FILE* lib)
{
	fopen_s(&lib, "lib.txt", "ab");
	cout << "\n������������ \n";
	if (lib != 0) {
		string n, a;
		cout << "\n������� ������\n";
		cin >> n;
		cout << "������� �������� ����������\n";
		cin >> a;
		int g = _filelength(_fileno(lib)) / sizeof(library);
		library per(a, n, g);
		fwrite(&per, sizeof(library), 1, lib);
		fclose(lib);
		return;
	}
	else {
		cout << " ������ �������� �����\n";
		return;
	}
}
void showlibrary(FILE* lib)
{
	fopen_s(&lib, "lib.txt", "r+b");
	if (lib != 0)
	{
		int g = _filelength(_fileno(lib)) / sizeof(library);
		library per;
		library* arr = new library[g];
		fread(arr, sizeof(library), g, lib);
		fclose(lib);
		qsort(arr, g, sizeof(library), comparel);
		fopen_s(&lib, "lib.txt", "wb");
		if (lib != 0)
		{
			fwrite(arr, sizeof(library), g, lib);
			fclose(lib);
		}
		else
		{
			cout << "������ �������� �����" << endl;
			system("pause");
			return;
		}
		fopen_s(&lib, "lib.txt", "rb");
		if (lib != 0)
		{
			library per;
			int k = 1;
			fread(arr, sizeof(library), g, lib);
			if (g > 0)
			{
				for (int i = 0; i < g; i++)
				{
					fread(&arr, sizeof(library), 1, lib);
					arr[i].show();
				}
			}
			fclose(lib);
			return;
		}
		else
		{
			return;
		}
		return;
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}
}// yes

library searchlibrary(string key, FILE* lib)
{
	library a;
	fopen_s(&lib, "lib.txt", "r+b");
	if (lib != 0)
	{
		int g = _filelength(_fileno(lib)) / sizeof(library);

		library* arr = new library[g];
		int l = 0, m = 0, r = g - 1;
		bool b = false;
		int i = 0;
		fread(arr, sizeof(library), g, lib);
		fclose(lib);
		qsort(arr, g, sizeof(library), comparel);
		fopen_s(&lib, "lib.txt", "wb");
		if (lib != 0)
		{
			fwrite(arr, sizeof(library), g, lib);
			fclose(lib);
		}
		else
		{
			cout << "������ �������� �����" << endl;
			system("pause");
			return a;
		}
		fopen_s(&lib, "lib.txt", "rb");
		if (lib != 0)
		{
			fread(arr, sizeof(library), g, lib);
			while (b == false && (l <= r))
			{
				m = (l + r) / 2;
				if (arr[m].getname() == key) { b = true; }
				if (arr[m].getname() < key) { l = m + 1; }
				else r = m - 1;
			}
			a = arr[m];
			cout << arr[m].getaddress() << endl << arr[m].getid() << endl;
			fclose(lib);
			return a;
		}
		else {
			cout << "������ �������� �����" << endl;
			return a;
		}
	}
	else {
		cout << "������ �������� �����" << endl;
		return a;
	}
}
book searchbook(string key, FILE* books)
{
	book a;
	fopen_s(&books, "book.txt", "r+b");
	if (books != 0)
	{
		int g = _filelength(_fileno(books)) / sizeof(book);

		book* arr = new book[g];
		int l = 0, m = 0, r = g - 1;
		bool b = false;
		int i = 0;
		fread(arr, sizeof(book), g, books);
		fclose(books);
		qsort(arr, g, sizeof(book), compareb);
		fopen_s(&books, "book.txt", "wb");
		if (books != 0)
		{
			fwrite(arr, sizeof(book), g, books);
			fclose(books);
		}
		else
		{
			cout << "������ �������� �����" << endl;
			system("pause");
			return a;
		}
		fopen_s(&books, "book.txt", "rb");
		if (books != 0)
		{
			fread(arr, sizeof(book), g, books);
			while (b == false && (l <= r))
			{
				m = (l + r) / 2;
				if (arr[m].getname() == key) { b = true; }
				if (arr[m].getname() < key) { l = m + 1; }
				else r = m - 1;
			}
			a = arr[m];
			return a;
		}
		else {
			cout << "������ �������� �����" << endl;
			return a;
		}
	}
	else {
		cout << "������ �������� �����" << endl;
		return a;
	}
}
client searchuser(string key, FILE* user)
{
	client a;
	fopen_s(&user, "user.txt", "r+b");
	if (user != 0)
	{
		int g = _filelength(_fileno(user)) / sizeof(client);

		client* arr = new client[g];
		int l = 0, m = 0, r = g - 1;
		bool b = false;
		int i = 0;
		fread(arr, sizeof(client), g, user);
		fclose(user);
		qsort(arr, g, sizeof(client), compareu);
		fopen_s(&user, "user.txt", "wb");
		if (user != 0)
		{
			fwrite(arr, sizeof(client), g, user);
			fclose(user);
		}
		else
		{
			cout << "������ �������� �����" << endl;
			system("pause");
			return a;
		}
		fopen_s(&user, "user.txt", "rb");
		if (user != 0)
		{
			fread(arr, sizeof(client), g, user);
			while (b == false && (l <= r))
			{
				m = (l + r) / 2;
				if (arr[m].getlogin() == key) { b = true; }
				if (arr[m].getlogin() < key) { l = m + 1; }
				else r = m - 1;
			}
			a = arr[m];
			return a;
		}
		else {
			cout << "������ �������� �����" << endl;
			return a;
		}
	}
	else {
		cout << "������ �������� �����" << endl;
		return a;
	}
}
admin searchadmin(string key, FILE* adm)
{
	admin a;
	fopen_s(&adm, "adm.txt", "rb");
	if (adm != 0)
	{
		int g = _filelength(_fileno(adm)) / sizeof(admin);

		admin* arr = new admin[g];
		int l = 0, m = 0, r = g - 1;
		bool b = false;
		int i = 0;
		fread(arr, sizeof(admin), g, adm);
		fclose(adm);
		qsort(arr, g, sizeof(admin), comparea);
		fopen_s(&adm, "adm.txt", "wb");
		if (adm != 0)
		{
			fwrite(arr, sizeof(admin), g, adm);
			fclose(adm);
		}
		else
		{
			cout << "������ �������� �����" << endl;
			system("pause");
			return a;
		}
		fopen_s(&adm, "adm.txt", "rb");
		if (adm != 0)
		{
			fread(arr, sizeof(admin), g, adm);
			while (b == false && (l <= r))
			{
				m = (l + r) / 2;
				if (arr[m].getlogin() == key) { b = true; }
				if (arr[m].getlogin() < key) { l = m + 1; }
				else r = m - 1;
			}
			a = arr[m];
			return a;
		}
		else {
			cout << "������ �������� �����" << endl;
			return a;
		}
	}
	else {

		cout << "������ �������� �����" << endl;
		return a;
	}
}
order searchorder(string key, FILE* ord)
{
	order a;
	fopen_s(&ord, "ord.txt", "rb");
	if (ord != 0)
	{
		int g = _filelength(_fileno(ord)) / sizeof(order);

		order* arr = new order[g];
		int l = 0, m = 0, r = g - 1;
		bool b = false;
		int i = 0;
		fread(arr, sizeof(order), g, ord);
		fclose(ord);
		qsort(arr, g, sizeof(order), compareo);
		fopen_s(&ord, "ord.txt", "wb");
		if (ord != 0)
		{
			fwrite(arr, sizeof(order), g, ord);
			fclose(ord);
		}
		else
		{
			cout << "������ �������� �����" << endl;
			system("pause");
			return a;
		}
		fopen_s(&ord, "ord.txt", "rb");
		if (ord != 0)
		{
			fread(arr, sizeof(order), g, ord);
			while (b == false && (l <= r))
			{
				m = (l + r) / 2;
				if (arr[m].getuser().getname() == key) { b = true; }
				if (arr[m].getuser().getname() < key) { l = m + 1; }
				else r = m - 1;
			}
			a = arr[m];
			return a;
		}
		else {
			cout << "������ �������� �����" << endl;
			return a;
		}
	}
	else {

		cout << "������ �������� �����" << endl;
		return a;
	}
}

void addbook(FILE* books, FILE* lib)
{
	fopen_s(&lib, "lib.txt", "rb");
	if (lib != 0)
	{
		int g = _filelength(_fileno(lib)) / sizeof(library);
		if (g == 0)
		{
			cout << "��� ���������� ����������\n";
			return;
		}
		fclose(lib);
	}
	else
	{
		cout << "��� ���������� ����������\n" << endl;
		return;
	}
	fopen_s(&books, "book.txt", "ab");
	if (books != 0) {
		cout << "\n������������ \n";
		string n;
		int g;
		int j = 1;
		book per;
		library a;
		cout << "\n������� ������\n";
		cin >> n;
		per.setauthor(n);
		cout << "������� �������� �����\n";
		cin >> n;
		per.setname(n);
		cout << "������� ���������� �������\n";
		cen(&g, 1, 1);
		per.setkol(g);
		cout << " ������� ��� �������\n";
		cen(&g, 1, 1);
		per.setyear(g);
		cout << " ������� ������������\n";
		cin >> n;
		per.setizd(n);
		do {
			cout << "������� ��� ���������� � ������� ����� ��������� �����\n";
			cin >> n;
			a = searchlibrary(n, lib);
			if (a.getaddress() == " ")
			{
				cout << "���������� �� �������\t ����������� ��� ��� - ENTER\t �������� ��� ������� - ����� �������\n";
				j = _getch();
			}
		} while (a.getaddress() == " " || j != 13);
		per.setposithion(a);
		g = _filelength(_fileno(books)) / sizeof(book);
		per.setid(g);
		fwrite(&per, sizeof(book), 1, books);
		fclose(books);
		return;
	}
	else
	{
		cout << " ������ �������� �����\n";
		return;
	}
}
void showbooks_indiv(FILE* books, int key)
{
	fopen_s(&books, "book.txt", "r+b");
	if (books != 0)
	{
		int g = _filelength(_fileno(books)) / sizeof(book);
		book per;
		book* arr = new book[g];
		fread(arr, sizeof(book), g, books);
		fclose(books);
		qsort(arr, g, sizeof(book), compareb1);
		fopen_s(&books, "book.txt", "rb");
		if (books != 0)
		{
			book per;
			int k = 1;
			fread(arr, sizeof(book), g, books);
			if (g > 0)
			{
				for (int i = 0; i < g; i++)
				{
					fread(&arr, sizeof(book), 1, books);
					if (arr[i].getyear() >= key) {
						arr[i].info_b();
					}
				}

			}
			fclose(books);
			return;
		}
		else
		{
			cout << "������ �������� �����" << endl;
			return;
		}
		return;
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}

}//yes
void showbooks(FILE* books)
{
	fopen_s(&books, "book.txt", "r+b");
	if (books != 0)
	{
		int g = _filelength(_fileno(books)) / sizeof(book);
		book per;
		book* arr = new book[g];
		fread(arr, sizeof(book), g, books);
		fclose(books);
		qsort(arr, g, sizeof(book), compareb);
		fopen_s(&books, "book.txt", "wb");
		if (books != 0)
		{
			fwrite(arr, sizeof(book), g, books);
			fclose(books);
		}
		else
		{
			cout << "������ �������� �����" << endl;
			system("pause");
			return;
		}
		fopen_s(&books, "book.txt", "rb");
		if (books != 0)
		{
			book per;
			int k = 1;
			fread(arr, sizeof(book), g, books);
			if (g > 0)
			{
				for (int i = 0; i < g; i++)
				{
					fread(&arr, sizeof(book), 1, books);
					arr[i].info_b();
				}

			}
			fclose(books);
			return;
		}
		else
		{
			cout << "������ �������� �����" << endl;
			return;
		}
		return;
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}

}//yes

void addadmin(FILE* adm)
{
	fopen_s(&adm, "adm.txt", "ab");
	if (adm != 0) {
		cout << "\n������������ \n";
		string n, pas1, pas2;
		int age;
		admin per;
		cout << "\n������� �����\n";
		cin >> n;
		per.setlogin(n);
		cout << "������� ���\n";
		cin >> n;
		per.setname(n);
		cout << "������� ������� \n";
		cen(&age, 1, 1);
		per.setage(age);

		cout << "���������� ������\n";
		cin >> pas1;
		do {
			cout << "����������� ��� ������\n";
			cin >> pas2;
			if (pas1 != pas2) {
				cout << "������ �� ��������� ���������� ��� ���\n";
			}
		} while (pas1 != pas2);
		per.setpassword(pas2);
		int g = _filelength(_fileno(adm)) / sizeof(admin);
		per.setid(g);
		fwrite(&per, sizeof(admin), 1, adm);
		fclose(adm);
		return;
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}
}
void showadmin(FILE* adm)
{
	fopen_s(&adm, "adm.txt", "rb");
	if (adm != 0) {
		int g = _filelength(_fileno(adm)) / sizeof(admin);
		admin per, * arr = new admin[g];
		fread(arr, sizeof(admin), g, adm);
		fclose(adm);
		qsort(arr, g, sizeof(adm), comparea);
		fopen_s(&adm, "adm.txt", "wb");
		if (adm != 0)
		{
			fwrite(arr, sizeof(admin), g, adm);
			fclose(adm);
		}
		else
		{
			cout << "������ �������� �����" << endl;
			system("pause");
			return;
		}
		fopen_s(&adm, "adm.txt", "rb");
		if (adm != 0)
		{
			admin per;
			int k = 1;
			fread(arr, sizeof(admin), g, adm);
			if (g > 0)
			{
				for (int i = 0; i < g; i++)
				{
					fread(&arr, sizeof(admin), 1, adm);
					arr[i].show();
				}
			}
			fclose(adm);


		}
		else
		{
			cout << "������ �������� �����" << endl;
			return;
		}
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}

}//���������� �� �� ���� ����

void addorder(FILE* ord, client a, FILE* books)
{
	fopen_s(&ord, "ord.txt", "ab");
	if (ord != 0) {
		cout << "\n������������ \n";
		string n;
		order o;
		int id = 0, i = 0;
		book s;
		fopen_s(&books, "book.txt", "r+b");
		if (books != 0)
		{

			string l;
			cout << "������ ��� �����\n";
			cin >> l;
			while (fread(&s, sizeof(book), 1, books))
			{
				if (s.getname() == l)
					break;
				id++;
			}
			if (s.gete())
			{
				fclose(books);
				fclose(ord);
				cout << "�������� ����� ��������� � ��������\n";
				return;
			}
			s.setlastid(a.getid());
			fseek(books, id * sizeof(book), 0);
			fwrite(&s, sizeof(book), 1, books);
			fclose(books);
		}
		else
		{
			cout << "������ �������� �����" << endl;
			return;
		}
		s.sete();
		o.setbook(s);
		o.setuser(a);
		int g = _filelength(_fileno(ord)) / sizeof(order);
		o.setid(g);
		fwrite(&o, sizeof(order), 1, ord);
		fclose(ord);
		return;
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}
}
void deleteorder(client u, FILE* ord, FILE* books)
{
	order a = searchorder(u.getname(), ord);
	book b;
	int id = 0;
	fopen_s(&books, "book.txt", "r+b");
	if (books != 0)
	{
		int g = _filelength(_fileno(books)) / sizeof(book);
		book* arr = new book[g];
		fread(arr, sizeof(book), g, books);
		string l = a.getbook().getname();
		while (fread(&arr, sizeof(book), 1, books))
		{
			if (arr[id].getname() == l)
				break;
			id++;
		}
		b = arr[id];
		b.sete();
		fseek(books, id * sizeof(book), 0);
		fwrite(&b, sizeof(book), 1, books);
		fclose(books);
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}
	fopen_s(&ord, "ord.txt", "r+b");
	if (ord != 0)
	{
		int g = _filelength(_fileno(ord)) / sizeof(order);
		order* arr = new order[g];
		fread(arr, sizeof(order), g, ord);
		string l = u.getname();
		while (fread(&arr, sizeof(order), 1, ord))
		{
			if (arr[id].getuser().getname() == l)
				break;
			id++;
		}
		fseek(ord, (id + 1) * sizeof(order), 0);
		while (fread(&a, sizeof(order), 1, ord)) {

			fseek(ord, id * sizeof(order), 0);
			fwrite(&a, sizeof(order), 1, ord);
			fseek(ord, sizeof(order), 1);
		}
		int r = _chsize(_fileno(ord), sizeof(order) * (g - 1));
		fclose(ord);
		return;
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}

}
void showorder(FILE* ord)
{
	fopen_s(&ord, "ord.txt", "rb");
	if (ord != 0) {
		int g = _filelength(_fileno(ord)) / sizeof(order);
		order per, * arr = new order[g];
		fread(arr, sizeof(order), g, ord);
		fclose(ord);
		fopen_s(&ord, "ord.txt", "rb");
		if (ord != 0)
		{
			order per;
			int k = 1;
			fread(arr, sizeof(order), g, ord);
			if (g > 0)
			{
				for (int i = 0; i < g; i++)
				{
					fread(&arr, sizeof(order), 1, ord);
					arr[i].show();
				}
			}
			fclose(ord);


		}
		else
		{
			cout << "������ �������� �����" << endl;
			return;
		}
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}

}//���������� �� �� ���� ����

void editl(library& a)
{
	int c = 1;
	do {
		cout << "��� �������������� ������� ������� - 1\t ��� ����� - 2\t ��� ������ - 0\n";
		cen(&c, 0, 2);;
		switch (c)
		{
		case 1: {
			string l;
			cout << "������� ����� ������\n";
			cin >> l;
			a.setaddress(l);
			break; }
		case 2: {
			string na;
			cout << "������ ����� ���\n";
			cin >> na;
			a.setname(na);
			break; }
		}
	} while (c != 0);
}
void editl1(FILE* lib)
{
	int id = 0;
	fopen_s(&lib, "lib.txt", "r+b");
	if (lib != 0)
	{
		int g = _filelength(_fileno(lib)) / sizeof(library);
		library* arr = new library[g];
		fread(arr, sizeof(library), g, lib);
		library s;
		string l;
		cout << "������ ����� ������������� ����������\n";
		cin >> l;
		while (fread(&arr, sizeof(library), 1, lib))
		{
			if (arr[id].getname() == l)
				break;
			id++;
		}
		s = arr[id];
		editl(s);
		fseek(lib, id * sizeof(library), 0);
		fwrite(&s, sizeof(library), 1, lib);
		fclose(lib);
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}


}

void editb(book& boo, FILE* lib)
{
	int c = 1;
	do {
		cout << "��� �������������� ������ ������� - 1\t ��� ����� - 2\t ��� ���������� ������� - 3\t ��� ������� - 4\t ��� ������������ - 5\t ��� ���� ������� - 6\t ��� ������ - 0\n";
		cen(&c, 0, 6);
		switch (c)
		{
		case 1: {
			string l;
			cout << "������� ������ ������\n";
			cin >> l;
			boo.setauthor(l);
			break; }
		case 2:
		{
			string na;
			cout << "������ ����� ���\n";
			cin >> na;
			boo.setname(na);
			break; }
		case 3:
		{
			int b;
			cout << "������� ����������\n";
			cen(&b, 1, 1);
			boo.setkol(b);
			break; }
		case 4:
		{
			string p;
			fopen_s(&lib, "lib.txt", "rb");
			if (lib != 0)
			{
				int g = _filelength(_fileno(lib)) / sizeof(library);
				if (g == 0)
				{
					cout << "��� ���������� ����������\n";
					return;
				}
				fclose(lib);
			}
			else
			{
				cout << "��� ���������� ����������\n" << endl;
				return;
			}
			bool j = 1;
			library a;
			do {
				showlibrary(lib);
				cout << "������� ��� ���������� � ������� ����� ��������� �����\n";
				cin >> p;
				a = searchlibrary(p, lib);
				if (a.getaddress() == " ")
				{
					cout << "���������� �� �������\t ����������� ��� ��� - 1\t �������� ��� ������� - 0\n";
					cin >> j;
				}
			} while (a.getaddress() == " " && j != 0);
			boo.setposithion(a);
			break; }
		case 5:
		{
			string l;
			cout << "������� ����� ������������\n";
			cin >> l;
			boo.setizd(l);
			break;
		}
		case 6:
		{
			int y;
			cout << "������� ���\n";
			cen(&y, 1, 1);
			boo.setyear(y);
			break;
		}
		}
	} while (c != 0);
}
void editb1(FILE* books, FILE* lib)
{
	int id = 0;
	fopen_s(&books, "book.txt", "r+b");
	if (books != 0)
	{
		int g = _filelength(_fileno(books)) / sizeof(book);
		book* arr = new book[g];
		fread(arr, sizeof(book), g, books);
		book s;
		string l;
		cout << "������ ��� ������������� �����\n";
		cin >> l;
		while (fread(&arr, sizeof(book), 1, books))
		{
			if (arr[id].getname() == l)
				break;
			id++;
		}
		s = arr[id];
		editb(s, lib);
		fseek(books, id * sizeof(book), 0);
		fwrite(&s, sizeof(book), 1, books);
		fclose(books);
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}


}

void editc(client& a)
{
	int c = 1;
	do {
		cout << "��� �������������� ������ ������� - 1\t ��� ����� - 2\t ��� �������� - 3\t ��� ���� - 4\t ��� ������ - 5\t ��� ������ - 0\n";
		cen(&c, 0, 5);;
		switch (c)
		{
		case 1: {
			string l;
			cout << "������� ����� �����\n";
			cin >> l;
			a.setlogin(l);
			break; }
		case 2: {
			string na;
			cout << "������ ����� ���\n";
			cin >> na;
			a.setname(na);
			break; }
		case 3: {
			int b;
			cout << "������� ����� �������\n";
			cen(&b, 1, 1);;
			a.setage(b);
			break; }
		case 4: {
			string p;
			cout << "������� ����� ���\n";
			cin >> p;
			a.setsex(p);
			break; }
		case 5: {
			string pas1, pas2;
			cout << "������� ����� ������\n";
			cin >> pas1;
			do {
				cout << "����������� ��� ������\n";
				cin >> pas2;
				if (pas1 != pas2) {
					cout << "������ �� ��������� ���������� ��� ���\n";
				}
			} while (pas1 != pas2);
			a.setpassword(pas2);
			break; }
		}
	} while (c != 0);
}
void editc1(FILE* user)
{
	int id = 0;
	fopen_s(&user, "user.txt", "r+b");
	if (user != 0)
	{
		int g = _filelength(_fileno(user)) / sizeof(client);
		client* arr = new client[g];
		fread(arr, sizeof(client), g, user);
		client s;
		string l;
		cout << "������ ����� �������������� �������\n";
		cin >> l;
		while (fread(&arr, sizeof(client), 1, user))
		{
			if (arr[id].getlogin() == l)
				break;
			id++;
		}
		s = arr[id];
		editc(s);
		s.setid(g);
		fseek(user, id * sizeof(client), 0);
		fwrite(&s, sizeof(client), 1, user);
		fclose(user);
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}


}
void editc2(FILE* user, client& u)
{
	int id = 0;
	fopen_s(&user, "user.txt", "rb");
	if (user != 0)
	{
		editc(u);
		int g = _filelength(_fileno(user)) / sizeof(client);
		u.setid(g);
		fseek(user, id * sizeof(client), 0);
		fwrite(&u, sizeof(client), 1, user);
		fclose(user);
	}
}

void edita(admin& a)
{
	int c = 1;
	do {
		cout << "��� �������������� ������ ������� - 1\t ��� ����� - 2\t ��� �������� - 3\t ��� ������ - 4\t ��� ������ ����� ������� - 5\t ��� ������ - 0\n";
		cen(&c, 0, 5);
		switch (c)
		{
		case 1: {
			string l;
			cout << "������� ����� �����\n";
			cin >> l;
			a.setlogin(l);
			break; }
		case 2: {
			string na;
			cout << "������ ����� ���\n";
			cin >> na;
			a.setname(na);
			break; }
		case 3: {
			int b;
			cout << "������� ����� �������\n";
			cen(&b, 1, 1);;
			a.setage(b);
			break; }
		case 4: {
			string pas1, pas2;
			cout << "������� ����� ������\n";
			cin >> pas1;
			do {
				cout << "����������� ��� ������\n";
				cin >> pas2;
				if (pas1 != pas2) {
					cout << "������ �� ��������� ���������� ��� ���\n";
				}
			} while (pas1 != pas2);
			a.setpassword(pas2);
			break; }
		case 5:
		{
			cout << "��� ������ ����� ������� ������� ENTER\n";
			int g = _getch();
			if (g == 13) {
				a.setatr(1);
				cout << "���� �����\n";
			}
			else if (g == 27)
			{
				a.setatr(0);
				cout << "���� �����\n";
			}
			else { cout << "���� �� �����\n"; }
			break;
		}
		}
	} while (c != 0);
}
void edita1(FILE* adm)
{
	int id = 0;
	fopen_s(&adm, "adm.txt", "r+b");
	if (adm != 0)
	{
		int g = _filelength(_fileno(adm)) / sizeof(admin);
		admin* arr = new admin[g];
		fread(arr, sizeof(admin), g, adm);
		admin s;
		string l;
		cout << "������ ����� �������������� ��������������\n";
		cin >> l;
		while (fread(&arr, sizeof(admin), 1, adm))
		{
			if (arr[id].getlogin() == l)
				break;
			id++;
		}
		s = arr[id];
		edita(s);
		s.setid(g);
		fseek(adm, id * sizeof(admin), 0);
		fwrite(&s, sizeof(admin), 1, adm);
		fclose(adm);
	}
	else
	{
		cout << "������ �������� �����" << endl;
		return;
	}


}
void edita2(FILE* adm, admin& u)
{
	int id = 0;
	fopen_s(&adm, "adm.txt", "r+b");
	if (adm != 0)
	{
		edita(u);
		int g = _filelength(_fileno(adm)) / sizeof(admin);
		u.setid(g);
		fseek(adm, id * sizeof(admin), 0);
		fwrite(&u, sizeof(admin), 1, adm);
		fclose(adm);
	}
}

int comparel(const void* a, const void* b)
{
	library* x = (library*)a;
	library* y = (library*)b;
	int result = x->getname().compare(y->getname());
	return result;
}
int compareb1(const void* a, const void* b)
{
	book* x = (book*)a;
	book* y = (book*)b;
	int result = x->getauthor().compare(y->getauthor());
	return result;
}
int compareb(const void* a, const void* b)
{
	book* x = (book*)a;
	book* y = (book*)b;
	int result = x->getname().compare(y->getname());
	return result;
}
int compareu(const void* a, const void* b)
{
	client* x = (client*)a;
	client* y = (client*)b;
	int result = x->getlogin().compare(y->getlogin());
	return result;
}
int compareo(const void* a, const void* b)
{
	order* x = (order*)a;
	order* y = (order*)b;
	int result = x->getuser().getname().compare(y->getuser().getname());
	return result;
}
int comparea(const void* a, const void* b)
{
	admin* x = (admin*)a;
	admin* y = (admin*)b;
	int result = x->getlogin().compare(y->getlogin());
	return result;
}


