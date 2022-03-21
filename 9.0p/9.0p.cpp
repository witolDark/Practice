#include <fstream>
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int menu()
{
	cout << "========MENU========" << endl;
	cout << "1) Create Data Base" << endl;
	cout << "2) Edit Data Base" << endl;
	cout << "3) Browse" << endl;
	cout << "4) Show Data Base" << endl;
	cout << "5) Exit" << endl;
	while (true) {
		if (_kbhit()) {
			switch (_getch()) {
			case 49: { return 1; break; }
			case 50: { return 2; break; }
			case 51: { return 3; break; }
			case 52: { return 4; break; }
			case 53: { return 5; break; }
			}
			break;
		}
	}
	return 0;
}

string get_path()
{
	string name;
	string file_path;
	cout << "Enter a name of file: ";
	getline(cin, name);
	return name + ".txt";
}

string create()
{
	string file_path = get_path();
	ofstream file(file_path);
	if (file.is_open())
		cout << "File created" << endl;
	else cout << "Failed to create file" << endl;
	file.close();
	return "";
}

string edit()
{
restart:
	string file_path = get_path();
	ifstream file(file_path);
	restart3:
	if (file.is_open()) {
		ofstream file(file_path, fstream::app);
		cout << "1) Add" << endl;
		cout << "2) Delete" << endl;
		cout << "3) Back" << endl;
		while (true) {
			if (_kbhit()) {
				switch (_getch()) {
				case 49: {
				another_one:
					char id[10], full_name[20], password[10], date_of_connect[20];
					cout << "Enter a code: ";
					cin.getline(id, 10);
					cout << "Enter a full name: ";
					cin.getline(full_name, 20);
					cout << "Enter a password: ";
					cin.getline(password, 10);
					cout << "Enter a date of connect: ";
					cin.getline(date_of_connect, 20);
					file << id << "\t" << full_name << "\t" << password << "\t" << date_of_connect << endl;
					cout << "Wanna add more? 1 - yes ,other - no" << endl;
					if (_getch() == 49)
						goto another_one;
					else goto restart3;
					break;
				}
				case 50: {
					file.close();
					file.open(file_path);
					cout << "Deleted" << endl;
					goto restart3;
					break;
				}
				case 51: return file_path;
					break;
				}
			}
		}
		file.close();
	}
	else {
		cout << "Invalid name of file" << endl;
		goto restart;
	}
	return "";
}

string out()
{
restart1:
	string file_path = get_path();
	ifstream file(file_path);
	if (file.is_open()) {
		while (file) {
			string id = "", first_name = "", last_name = "", password = "", date_of_connect = "";
			file >> id >> first_name >> last_name >> password >> date_of_connect;
			cout << id << "\t" << first_name << " " << last_name << "\t" << password << "\t" << date_of_connect << endl;
		}
		file.close();
		return file_path;
	}
	else {
		cout << "Invalid name of file, restart" << endl;
		goto restart1;
	}
	return "";
}

string search()
{
restart2:
	string file_path = get_path();
	ifstream file(file_path);
	if (file.is_open()) {
		string date;
		cout << "Enter a required date: ";
		getline(cin, date);
		cout << "===========Result=============" << endl;
		while (file) {
			string id = "", first_name = "", last_name = "", password = "", date_of_connect = "";
			file >> id >> first_name >> last_name >> password >> date_of_connect;
			if (date_of_connect == date)
				cout << id << "\t" << first_name << " " << last_name << "\t" << password << "\t" << date_of_connect << endl;
		}
		file.close();
		return "";
	}
	else {
		cout << "Invalid name of file, retry" << endl;
		goto restart2;
	}
	return "";
}

void main()
{
	while (true) {
		switch (menu()) {
		case 1: { create(); break; }
		case 2: { edit();   break; }
		case 3: { search(); break; }
		case 4: { out(); break; }
		case 5: { exit(0); break; }
		}
	}
}