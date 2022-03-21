#include <iostream>
#include <cmath>
#include "C:\Users\Witold\Downloads\variadic_table-master\variadic_table-master\include\VariadicTable.h"

using namespace std;

float Y2(int x)
{
	return pow(x, 3) + 8 * pow(x, -4) + sqrt(4 - x);
}
float Y3(int x)
{
	return (4.22 * pow(x, 1.0 / 3) + 2.15 * x) / abs(tan(x) - 2);
}

void main()
{
	long double a = 0, b = 1;
	long double z;
	int i = 19;
	VariadicTable<int, float, float, float> vt({ "X","A","B","Z" }, i+8);
	for (int x = 1; x <= i + 8; x++)
	{
		a += Y2(x);
		b *= Y3(x);
		z = abs(12 * a - cos(b));
		vt.addRow(x, a, b, z);
	}
	vt.print(cout);
}

