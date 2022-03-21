#include <iostream>
#include <conio.h>
#include <cmath>
#include "C:\Users\Witold\Downloads\variadic_table-master\variadic_table-master\include\VariadicTable.h"

using namespace std;

int randint(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

int Y(int i, int k)
{
	return  k * randint(-i * randint(0, 50), 100);
}

VariadicTable<int, float, string> vt({ "Year","Finance","Status" }, 10);

void main()
{
	srand(time(NULL));
	int year[10];
	int i = 19;
	int random;
	int income = 0, min = 10;
	for (int k = 0; k < 10; k++)
	{
		year[k] = 1990 + k + 1;
		random = Y(i, k + 1);
		if (random > 0)
		{
			vt.addRow(year[k], random, "Income");
			income += random;
		}
		else if (random == 0)
			vt.addRow(year[k], random, "Draw  ");
		else {
			vt.addRow(year[k], random, "Loss  ");
			income += random;
			if (random < min)
				min = random;
		}
	}
	vt.print(cout);
	cout << "Income: " << income << endl;
	cout << "Min: " << min << endl;
}