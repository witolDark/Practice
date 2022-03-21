#include <iostream>
#include <Windows.h>
using namespace std;

void main()
{
	srand(time(NULL));
	int a = rand() % 10;
	Sleep(1000);
	int b = rand() % 10;
	cout << "Before a,b: " << a << " " << b << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "After  a,b: " << a << " " << b << endl;
}