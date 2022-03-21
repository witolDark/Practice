#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;

string Group;
string FullName, Lesson;
string Count, User_Group;
string file_path;
string Create()
{
    string name;
    cout << "Enter name of file: ";
    cin >> name;
    file_path = name + ".txt";
    ofstream file(file_path);
    if (file.is_open() == 1)
        cout << "File created" << endl;
    else cout << "Failed to create file" << endl;
    file.close();
    return file_path;
}


void Input() {
    int choose;
    ofstream File1(file_path);

    while (!File1.eof()) {
        cout << "Enter Group, FullName, Lesson, Count \n";
        getline(cin, Group);
        getline(cin, FullName);
        getline(cin, Lesson);
        getline(cin, Count);
        File1 << Group << "\t" << FullName << "\t" << Lesson << "\t" << "\t" << Count << "\t" << endl; // Çàïèñóºìî äàí³ ó ôàéë
        cout << "----------------------------------" << endl;
        cout << "Continue? 1 - yes; 0 - no " << endl;
        cin >> choose;
        if (choose == 0) File1.close();
    }

}

void Renew() {
    int choose;
    ofstream File1(file_path);
    File1.open(file_path, ofstream::app);
    do {
        cout << "Enter Group, FullName, Lesson, Count \n";
        cin >> Group >> FullName >> Lesson >> Count;
        File1 << Group << "\t" << FullName << "\t" << Lesson << "\t" << "\t" << Count << "\t" << endl; // Çàïèñóºìî äàí³ ó ôàéë
        cout << "----------------------------------" << endl;
        cout << "Continue? 1 - yes; 0 - no " << endl;
        cin >> choose;
    } while (choose != 0);
    if (choose == 0) File1.close();
}

void Output() {
    cout << "Our file \n";
    ifstream File1(file_path);
    while (!File1.eof()) {
        File1 >> Group >> FullName >> Lesson >> Count;
        cout << Group << "\t" << FullName << "\t" << Lesson << "\t" << "\t" << Count << "\t" << endl;
    }
    File1.close();
}

int GroupSearch() {
    ifstream File1(file_path, ios::in);
    int choose;
    do {
        cout << "Enter group to find: ";
        cin >> User_Group;
        if (User_Group == Group) {
            cout << "Student: " << endl;
            cout << Group << "\t" << FullName << "\t" << Lesson << "\t" << "\t" << Count << "\t" << User_Group << endl;
        }
        cout << "Continue? 1 - yes; 0 - no " << endl;
        cin >> choose;
    } while (choose != 0);
    File1.close();
    return 0;
}


int main() {
    int pick;

    do {
        cout << "Choose mode:" << endl;
        cout << "1 - create" << endl;
        cout << "2 - renew" << endl;
        cout << "3 - search" << endl;
        cout << "4 - output" << endl;
        cout << "5 - exit" << endl;
        cin >> pick;
        switch (pick) {
        case 1:
            Create();
            break;
        case 2:
            Input();
            break;
        case 3:
            GroupSearch();
            break;
        case 4:
            Output();
            break;
        }
    } while (pick != 5);


}