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
	library(library& ob)//конструктор копирования
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
		cout << " |имя = " << setw(15) << this->name;
		cout << " |адресс = " << setw(15) << this->address;
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
		cout << " |Название " << setw(15) << name; cout << " |Автор " << setw(15) << author; cout << " |Находится на " << setw(15) << position; cout << " |Количество страниц" << setw(15) << kol << " |Издательство" << setw(15) << izd << " |Год издательства" << setw(15) << year << " |id последнего читателя" << setw(15) << lastid << " |Состояние" << setw(15);
		if (e) { cout << " У читателя"; }
		else { cout << " В библиотеке"; }
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
		if (sex == "муж") {
			id += 100000;
		}
		else if (sex == "жен") {
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
		cout << " |имя = " << setw(15) << name;
		cout << " |возраст = " << setw(15) << age;
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
		cout << " |Имя " << setw(15) << name << " |Логин " << setw(15) << login << " |Возжмосность добавления администраторов ";
		if (atr) { cout << "да"; }
		else { cout << "нет"; }
		cout << " |Возраст " << setw(15) << age << "|" << endl;
	}
};

class order
{
	client user;
	book boo;
	int id;
public:
	order() { id = 0; }
	~order() { cout << "книга возвращена\n"; }
	void setid(int i) { id = i; }
	void setuser(client a) { user = a; }
	void setbook(book b) { boo = b; }
	client getuser() { return user; }
	book getbook() { return boo; }
	void show() { cout << " заказчик\n"; user.show(); cout << " книга\n"; boo.info_b(); }
};


template <typename T>
void cen(T* v, int b, int e)
{
	while (true)
	{
		while (!(cin >> *v) || (cin.peek() != '\n')) {
			cin.clear();
			while (cin.get() != '\n');
			cout << "введенно неверное значение\n";
		}
		if (b == e) {
			if (b == 0) { return; }
			else if (*v > 0) { return; }
			else { cout << "введенно неверное значение\n"; }
		}
		else {
			if (*v >= b && *v <= e) { return; }
			else { cout << "введенно неверное значение\n"; }
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
			s.setname("коля");
			s.setatr(1);
			s.setpassword("1331");
			s.setid(0);
			fwrite(&s, sizeof(admin), 1, adm);
		}
		fclose(adm);
	}
	else {
		cout << "Ошибка открытия файла" << endl;
		system("pause");
		return 0;
	}
	int c;
	do {
		system("cls");
		cout << " Нажмите 1 для входа как пользавателя \n" << " Нажмите 2 для входа как администратора \n Введите 0 для выхода из программы\n";
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
		cout << "Введите логин \n";
		cin >> l;
		a = searchadmin(l, adm);
		if (a.getlogin() == " ")
		{
			cout << "пользователь не найден\t попробовать еще раз - ENTER\t Выйти - любая клавиша\n";
			j = _getch();
		}
	} while (a.getlogin() == " " && j == 13);
	if (a.getlogin() == " " && j != 13)
	{
		system("cls");
		return;
	}
	cout << "Введите пароль \n";
	cin >> l;
	j = 0;
	if (l != a.getpassword())
	{
		do {
			cout << "Введите пароль еще раз \n";
			cin >> l;
			if (l != a.getpassword())
			{
				cout << "Нажмите ENTER и попробуйте еще раз или нажмите любую клавишу для выхода\n";
				j = _getch();
				if (j != 13) { return; }
			}
		} while (a.getpassword() != l);
	}
	system("cls");
	if (a.getatr()) {
		int c;
		do {
			cout << "\n\n\n Выберите желаймую функцию\n 1. Просмотр пользователей\n 2. Просмотр книг\n 3. Просмотр библиотек\n 4. Добавление пользователей\n 5. Добавление книг\n 6. Добавление библиотек\n 7. Редактирование пользователей\n 8. Редактирование книг\n 9. Редактирование библиотек\n 10. Просмотр администраторов\n 11. Добавление администраторов \n 12. Выдать администратору ключ доступа или изменить его поля \n 13. Редактирование своего аккаунта\n 14. Просмотр заказов\n 15. Книги изданные после заданного года\n Введите 0 для выхода из режима администратора\n";

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
				cout << "Задайте год\n";
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
			cout << "\n\n\n Выберите желаймую функцию\n 1. Просмотр пользователей\n 2. Просмотр книг\n 3. Просмотр библиотек\n 4. Добавление пользователей\n 5. Добавление книг\n 6. Добавление библиотек\n 7. Редактирование пользователей\n 8. Редактирование книг\n 9. Редактирование библиотек\n 10. Просмотр заказов\n 11. Книги изданные после заданного года\n Введите 0 для выхода из режима администратора\n";

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
				cout << "Задайте год\n";
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
		cout << " Здравствуйте \n" << " Нажмите 1 для входа в аккаунт\n" << " Нажмите 2 для регистрации\n" << " Нажмите 3 для входа без аккунта\n\n Введите 0 для выхода из режима пользователя\n";
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
		cout << "Введите логин \n";
		cin >> l;
		a = searchuser(l, user);
		if (a.getlogin() == " ")
		{
			cout << "пользователь не найден\t попробовать еще раз - ENTER\t Выйти - любая клавиша\n";
			j = _getch();
		}
	} while (a.getlogin() == " " && j == 13);
	if (a.getlogin() == " ")
	{
		system("cls");
		return;
	}
	cout << "Введите пароль \n";
	cin >> l;
	j = 0;
	if (l != a.getpassword())
	{
		do {
			cout << "Введите пароль еще раз \n";
			cin >> l;
			if (l != a.getpassword())
			{
				cout << "Нажмите ENTER и попробуйте еще раз или нажмите любую клавишу и обратитесь к администратору для восстановления пароля\n";
				j = _getch();
				if (j != 13) { return; }
			}
		} while (a.getpassword() != l);
	}
	j = -1;
	system("cls");
	cout << "Здравствуйте " << a.getname() << endl;;
	do {
		cout << "\n\n\n Выберите желаймую функцию\n 1. Просмотр книг\n 2. Просмотр библиотек\n 3. Редактирование аккаунта\n 4. Заказ книги\n 5. Вернуть книгу\n 6. Книги изданные после заданного года\n Введите 0 для выхода из режима администратора\n";
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
				cout << "за вами уже числится книга\n";
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
				cout << "Ошибка открытия файла" << endl;
				return;
			}
			break;
		}
		case 5:
		{
			if (!a.gete())
			{
				cout << "у вас нет книг\n";
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
				cout << "Ошибка открытия файла" << endl;
				return;
			}
			break;
		}
		case 6: {
			system("cls");
			int key;
			cout << "Задайте год\n";
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
	cout << "Здравствуйте " << endl;;
	do {
		cout << "\n\n\n Выберите желаймую функцию\n 1. Просмотр книг\n 2. Просмотр библиотек\n 3. Книги изданные после заданного года\n Введите 0 для выхода из режима администратора\n";
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
			cout << "Задайте год\n";
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
		cout << "\nЗдравствуйте \n";
		string n, pas1, pas2;
		int age;
		client per;
		cout << "\nВведите логин\n";
		cin >> n;
		per.setlogin(n);
		cout << "Введите имя\n";
		cin >> n;
		per.setname(n);
		cout << "Введите пол в формате муж/жен без пробелов\n";
		cin >> n;
		per.setsex(n);
		cout << "Введите возраст \n";
		cen(&age, 1, 1);
		per.setage(age);

		cout << "Придумайте пароль\n";
		cin >> pas1;
		do {
			cout << "Подтвердите ваш пароль\n";
			cin >> pas2;
			if (pas1 != pas2) {
				cout << "Пароли не совпадают попробуйте еще раз\n";
			}
		} while (pas1 != pas2);
		per.setpassword(pas2);
		cout << "Для редактирования полей нажмите ENTER\n";
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
		cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
			return;
		}
	}
	else
	{
		cout << "Ошибка открытия файла" << endl;
		return;
	}

}//переписать на си плюс плюс

void addlibrary(FILE* lib)
{
	fopen_s(&lib, "lib.txt", "ab");
	cout << "\nЗдравствуйте \n";
	if (lib != 0) {
		string n, a;
		cout << "\nВведите адресс\n";
		cin >> n;
		cout << "Введите название библиотеки\n";
		cin >> a;
		int g = _filelength(_fileno(lib)) / sizeof(library);
		library per(a, n, g);
		fwrite(&per, sizeof(library), 1, lib);
		fclose(lib);
		return;
	}
	else {
		cout << " Ошибка открытия файла\n";
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
			cout << "Ошибка открытия файла" << endl;
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
		cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
			return a;
		}
	}
	else {
		cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
			return a;
		}
	}
	else {
		cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
			return a;
		}
	}
	else {
		cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
			return a;
		}
	}
	else {

		cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
			return a;
		}
	}
	else {

		cout << "Ошибка открытия файла" << endl;
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
			cout << "Нет подходящей библиотеки\n";
			return;
		}
		fclose(lib);
	}
	else
	{
		cout << "Нет подходящей библиотеки\n" << endl;
		return;
	}
	fopen_s(&books, "book.txt", "ab");
	if (books != 0) {
		cout << "\nЗдравствуйте \n";
		string n;
		int g;
		int j = 1;
		book per;
		library a;
		cout << "\nВведите автора\n";
		cin >> n;
		per.setauthor(n);
		cout << "Введите название книги\n";
		cin >> n;
		per.setname(n);
		cout << "Введите количество страниц\n";
		cen(&g, 1, 1);
		per.setkol(g);
		cout << " Введите год издания\n";
		cen(&g, 1, 1);
		per.setyear(g);
		cout << " Введите издательство\n";
		cin >> n;
		per.setizd(n);
		do {
			cout << "Введите имя библиотеки в которой будет находится книги\n";
			cin >> n;
			a = searchlibrary(n, lib);
			if (a.getaddress() == " ")
			{
				cout << "библиотека не найдена\t попробовать еще раз - ENTER\t оставить без адресса - любая клавиша\n";
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
		cout << " Ошибка открытия файла\n";
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
			cout << "Ошибка открытия файла" << endl;
			return;
		}
		return;
	}
	else
	{
		cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
			return;
		}
		return;
	}
	else
	{
		cout << "Ошибка открытия файла" << endl;
		return;
	}

}//yes

void addadmin(FILE* adm)
{
	fopen_s(&adm, "adm.txt", "ab");
	if (adm != 0) {
		cout << "\nЗдравствуйте \n";
		string n, pas1, pas2;
		int age;
		admin per;
		cout << "\nВведите логин\n";
		cin >> n;
		per.setlogin(n);
		cout << "Введите имя\n";
		cin >> n;
		per.setname(n);
		cout << "Введите возраст \n";
		cen(&age, 1, 1);
		per.setage(age);

		cout << "Придумайте пароль\n";
		cin >> pas1;
		do {
			cout << "Подтвердите ваш пароль\n";
			cin >> pas2;
			if (pas1 != pas2) {
				cout << "Пароли не совпадают попробуйте еще раз\n";
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
		cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
			return;
		}
	}
	else
	{
		cout << "Ошибка открытия файла" << endl;
		return;
	}

}//переписать на си плюс плюс

void addorder(FILE* ord, client a, FILE* books)
{
	fopen_s(&ord, "ord.txt", "ab");
	if (ord != 0) {
		cout << "\nЗдравствуйте \n";
		string n;
		order o;
		int id = 0, i = 0;
		book s;
		fopen_s(&books, "book.txt", "r+b");
		if (books != 0)
		{

			string l;
			cout << "Ведите имя книги\n";
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
				cout << "Извините книга находится у читателя\n";
				return;
			}
			s.setlastid(a.getid());
			fseek(books, id * sizeof(book), 0);
			fwrite(&s, sizeof(book), 1, books);
			fclose(books);
		}
		else
		{
			cout << "Ошибка открытия файла" << endl;
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
		cout << "Ошибка открытия файла" << endl;
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
		cout << "Ошибка открытия файла" << endl;
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
		cout << "Ошибка открытия файла" << endl;
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
			cout << "Ошибка открытия файла" << endl;
			return;
		}
	}
	else
	{
		cout << "Ошибка открытия файла" << endl;
		return;
	}

}//переписать на си плюс плюс

void editl(library& a)
{
	int c = 1;
	do {
		cout << "Для редактирования адресса введите - 1\t для имени - 2\t для выхода - 0\n";
		cen(&c, 0, 2);;
		switch (c)
		{
		case 1: {
			string l;
			cout << "Введите новый адресс\n";
			cin >> l;
			a.setaddress(l);
			break; }
		case 2: {
			string na;
			cout << "Ведите новое имя\n";
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
		cout << "Ведите логин редактируемой библиотеки\n";
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
		cout << "Ошибка открытия файла" << endl;
		return;
	}


}

void editb(book& boo, FILE* lib)
{
	int c = 1;
	do {
		cout << "Для редактирования автора введите - 1\t для имени - 2\t для количества страниц - 3\t для адресса - 4\t для издательства - 5\t для года издания - 6\t для выхода - 0\n";
		cen(&c, 0, 6);
		switch (c)
		{
		case 1: {
			string l;
			cout << "Введите нового автора\n";
			cin >> l;
			boo.setauthor(l);
			break; }
		case 2:
		{
			string na;
			cout << "Ведите новое имя\n";
			cin >> na;
			boo.setname(na);
			break; }
		case 3:
		{
			int b;
			cout << "Введите количество\n";
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
					cout << "Нет подходящей библиотеки\n";
					return;
				}
				fclose(lib);
			}
			else
			{
				cout << "Нет подходящей библиотеки\n" << endl;
				return;
			}
			bool j = 1;
			library a;
			do {
				showlibrary(lib);
				cout << "Введите имя библиотеки в которой будет находится книги\n";
				cin >> p;
				a = searchlibrary(p, lib);
				if (a.getaddress() == " ")
				{
					cout << "библиотека не найдена\t попробовать еще раз - 1\t оставить без адресса - 0\n";
					cin >> j;
				}
			} while (a.getaddress() == " " && j != 0);
			boo.setposithion(a);
			break; }
		case 5:
		{
			string l;
			cout << "Введите новое издательство\n";
			cin >> l;
			boo.setizd(l);
			break;
		}
		case 6:
		{
			int y;
			cout << "Введите год\n";
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
		cout << "Ведите имя редактируемой книги\n";
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
		cout << "Ошибка открытия файла" << endl;
		return;
	}


}

void editc(client& a)
{
	int c = 1;
	do {
		cout << "Для редактирования логина введите - 1\t для имени - 2\t для возраста - 3\t для пола - 4\t для пароля - 5\t для выхода - 0\n";
		cen(&c, 0, 5);;
		switch (c)
		{
		case 1: {
			string l;
			cout << "Введите новый логин\n";
			cin >> l;
			a.setlogin(l);
			break; }
		case 2: {
			string na;
			cout << "Ведите новое имя\n";
			cin >> na;
			a.setname(na);
			break; }
		case 3: {
			int b;
			cout << "Введите новый возраст\n";
			cen(&b, 1, 1);;
			a.setage(b);
			break; }
		case 4: {
			string p;
			cout << "Введите новый пол\n";
			cin >> p;
			a.setsex(p);
			break; }
		case 5: {
			string pas1, pas2;
			cout << "Введите новый пароль\n";
			cin >> pas1;
			do {
				cout << "Подтвердите ваш пароль\n";
				cin >> pas2;
				if (pas1 != pas2) {
					cout << "Пароли не совпадают попробуйте еще раз\n";
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
		cout << "Ведите логин редактируемого клиента\n";
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
		cout << "Ошибка открытия файла" << endl;
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
		cout << "Для редактирования логина введите - 1\t для имени - 2\t для возраста - 3\t для пароля - 4\t для выдачи ключа доступа - 5\t для выхода - 0\n";
		cen(&c, 0, 5);
		switch (c)
		{
		case 1: {
			string l;
			cout << "Введите новый логин\n";
			cin >> l;
			a.setlogin(l);
			break; }
		case 2: {
			string na;
			cout << "Ведите новое имя\n";
			cin >> na;
			a.setname(na);
			break; }
		case 3: {
			int b;
			cout << "Введите новый возраст\n";
			cen(&b, 1, 1);;
			a.setage(b);
			break; }
		case 4: {
			string pas1, pas2;
			cout << "Введите новый пароль\n";
			cin >> pas1;
			do {
				cout << "Подтвердите ваш пароль\n";
				cin >> pas2;
				if (pas1 != pas2) {
					cout << "Пароли не совпадают попробуйте еще раз\n";
				}
			} while (pas1 != pas2);
			a.setpassword(pas2);
			break; }
		case 5:
		{
			cout << "Для выдачи ключа доступа нажмите ENTER\n";
			int g = _getch();
			if (g == 13) {
				a.setatr(1);
				cout << "Ключ выдан\n";
			}
			else if (g == 27)
			{
				a.setatr(0);
				cout << "Ключ изьят\n";
			}
			else { cout << "Ключ не выдан\n"; }
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
		cout << "Ведите логин редактируемого администратора\n";
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
		cout << "Ошибка открытия файла" << endl;
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


