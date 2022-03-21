#include <iostream>
#include <string>

using namespace std;

void first() {
	string word[3];
	cout << "Enter words" << endl;
	for (int i = 0; i < 3; i++) {
		cin >> word[i];
		cout << "Lenght of word: " << word[i].length() << endl;
	}
}
void second()
{
	string word[3];
	int counter;
	cout << "Enter words" << endl;
	for (int i = 0; i < 3; i++) {
		cin >> word[i];
		counter = 0;
		for (int j = 0; word[i][j]; j++)
			counter++;
		cout << "Lenght of word: " << counter << endl;
	}
}


void main()
{
	setlocale(0," ");
	wstring word;
	cout << "Enter a word" << endl;
	wcin >> word;
	int counter = 0;
	for (int i = 0; word[i]; i++)
	{
		if (word[i] == 'a' || word[i] == 'A')
			counter++;
	}
	cout<< "Count of 'a': " << counter << endl;
	cout << endl;
	cout << "First" << endl;
	first();
	cout << "Second" << endl;
	second();
}