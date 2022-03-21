#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;

string Group;
string FullName, Lesson;
string Count;
string file_path;

void Create()
{
    string name;
    cout << "Enter name of file: ";
    cin >> name;
    file_path = name + ".txt";
    ofstream File1(file_path);
    if (File1.is_open() == 1)
        cout << "File succesfully created" << endl;
    else cout << "Failed to create file" << endl;
    File1.close();
}


void Input() {
    int choose;
    ofstream File1(file_path, fstream::app);
    again:
        cout << "Enter Group, FullName, Lesson, Count \n";
        getline(cin, Group);
        getline(cin, FullName);
        getline(cin, Lesson);
        getline(cin, Count);
        File1 << Group << "\t" << FullName << "\t" << Lesson << "\t" << Count << endl;
        cout << "----------------------------------" << endl;
    pick:
        cout << "Continue? 1 - yes; 0 - no " << endl;
        cin >> choose;
        if (choose == 1) goto again;
        if (choose == 0) goto end;
        else goto pick;
end:
    File1.close();
}


int GroupSearch() {
    string name;
    cout << "Enter name of file: ";
    cin >> name;
    file_path = name + ".txt";
    ifstream File1(file_path, ios::in);
    int choose;
again1:
    string User_Group;
    cout << "Enter group to find: ";
    cin >> User_Group;
    while (!File1.eof()) {
       /* Group = "";
        FullName = "";
        Lesson = "";
        Count = "";*/
        File1 >> Group >> FullName >> Lesson >> Count;
        if (User_Group == Group) {
            cout << "Student: " << endl;

            cout << Group << "\t" << FullName << "\t" << Lesson << "\t" << "\t" << Count << "\t" << User_Group << endl;
        }
    pick1:
        cout << "Continue? 1 - yes; 0 - no " << endl;
        cin >> choose;
        if (choose == 1) goto again1;
        if (choose == 0) goto end1;
        else goto pick1;
    }
end1:
    File1.close();
    return 0;
}

void Output() {
    string name;
    cout << "Enter name of file: ";
    cin >> name;
    file_path = name + ".txt";
    ifstream File1(file_path);
    while (!File1.eof()) {
        Group = "";
        FullName = "";
        Lesson = "";
        Count = "";
        File1 >> Group >> FullName >> Lesson >> Count;
        cout << Group << "\t" << FullName << "\t" << Count << "\t" << endl;
    }
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