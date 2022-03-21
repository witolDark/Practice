#include <iostream>
#include <cmath>
#include "C:\Users\Witold\Downloads\variadic_table-master\variadic_table-master\include\VariadicTable.h"

using namespace std;

void _for_(int n)
{
	cout << "FOR" << endl;
	VariadicTable<int, float> vt({ "K","Result" }, n);
	float dobutok = 1;
	for (int k = 1; k <= n; k++)
	{
		dobutok *= pow(k, k + 1) + 1 / k * (k + 1);
		vt.addRow(k, dobutok);
	}
	vt.print(cout);
}

void _while_(int n)
{
	cout << "While" << endl;
	VariadicTable<int, float> vt({ "K","Result" }, n);
	float dobutok = 1;
	int k = 1;
	while (k<=n)
	{
		dobutok *= pow(k, k + 1) + 1 / k * (k + 1);
		vt.addRow(k, dobutok);
		k++;
	}
	vt.print(cout);
}

void _dowhile_(int n)
{
	cout << "Do While" << endl;
	VariadicTable<int, float> vt({ "K","Result" }, n);
	float dobutok = 1;
	int k = 1;
	do 
	{
		dobutok *= pow(k, k + 1) + 1 / k * (k + 1);
		vt.addRow(k, dobutok);
		k++;
	} while (k <= n);
	vt.print(cout);
}

void main()
{
	int n;
	cout << "Enter n ";
	cin >> n;
	_for_(n);
	cout << endl;
	_while_(n);
	cout << endl;
	_dowhile_(n);
}