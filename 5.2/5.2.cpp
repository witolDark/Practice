#include <iostream>
#include <conio.h>
#include <time.h>
#include <Windows.h>

using namespace std;

#define n 10

int goal[n];
int miss[n];


int randint(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

void with_3_rd()
{
	srand(time(NULL));
	int intermediate[n];
	for (int i = 0; i < n; i++) {
		goal[i] = randint(0, 4);
		miss[i] = randint(0, 4);
		intermediate[i] = goal[i] - miss[i];
	}
	cout << "Goals:  ";
	for (int i = 0; i < n; i++) 
		cout << goal[i] << " ";
	cout << endl;
	cout << "Misses: ";
	for (int i = 0; i < n; i++)
		cout << miss[i] << " ";
	cout << endl;
	cout << "Results: ";
	for (int i = 0; i < n; i++) {
		if (intermediate[i] > 0)
			cout << "Win" << " ";
		else if (intermediate[i] < 0)
			cout << "Lose" << " ";
		else cout << "Draw" << " ";
	}
}

void without_3_rd()
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		goal[i] = randint(0, 4);
		miss[i] = randint(0, 4);
	}
	cout << "Goals:  ";
	for (int i = 0; i < n; i++)
		cout << goal[i] << " ";
	cout << endl;
	cout << "Misses: ";
	for (int i = 0; i < n; i++)
		cout << miss[i] << " ";
	cout << endl;
	cout << "Results: ";
	for (int i = 0; i < n; i++) {
		if (goal[i] > miss[i])
			cout << "Win" << " ";
		else if (goal[i] < miss[i])
			cout << "Lose" << " ";
		else cout << "Draw" << " ";
	}
}

void main()
{
	srand(time(NULL));
	cout << "With 3rd" << endl;
	with_3_rd();
	cout << endl;
	Sleep(1000);
	cout << "Without 3rd" << endl;
	without_3_rd();
}