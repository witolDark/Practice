#include <iostream>
#include "C:\Users\Witold\Downloads\variadic_table-master\variadic_table-master\include\VariadicTable.h"

using namespace std;

void main()
{
	int nails;
	cout << "Enter a count of nails ";
	cin >> nails;
	VariadicTable<int, float, float> vt({ "Nails","Santimeters","Inches" }, nails);
	for (int i = 1; i <= nails; i++)
		vt.addRow(i, i * 5.7, i * 2.25);
	vt.print(cout);
}