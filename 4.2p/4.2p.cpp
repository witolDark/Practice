#include <iostream>
#include "C:\Users\Witold\Downloads\variadic_table-master\variadic_table-master\include\VariadicTable.h"
#define n 10

using namespace std;

int randint(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

int Y(int i, int k)
{
	return  k * randint(-i * randint(0, 50), 100);
}

void main() {
	srand(time(NULL));
	int i = 19, count = 0;
	int array[n];
	float k = 1.12;
	int dobutok = 1;
	for (int j = 0; j < n; j++) {
		array[j] = Y(i, k);
		if (array[j] > 0) {
			count++;
			cout << array[j];
			if (count < 4) {
				dobutok *= array[j];
				cout << " Index: " << j;
			}
			cout << endl;
		}
		else cout << array[j] << endl;
	}
	cout << endl;
	if (count < 3)
		cout << "No data" << endl;
	else cout << "Dobutok: " << dobutok << endl;
}
