#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string id;
string full_name;
string password;
string date_of_connect;

void create() {
    ofstream file();
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
    ifstream File1("students.txt");
    while (!File1.eof()) {
        File1 >> Group >> FullName >> Lesson >> Count;
        cout << Group << "\t" << FullName << "\t" << Lesson << "\t" << "\t" << Count << "\t" << endl;
    }
    File1.close();
}

int GroupSearch() {
    ifstream File1("students.txt", ios::in);
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
            Input();
            break;
        case 2:
            cout << "renew";
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