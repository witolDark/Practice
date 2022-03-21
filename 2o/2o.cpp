#include <iostream>

using namespace std;

void main()
{
	int a, b;
	int c;
restart:
	cout << "Enter a, b" << endl;
	cin >> a >> b;
	if (a >= b)
		goto restart;
	while (true) {
		c = b % a;
		b = a;
		a = c;
		if (c == 0)
			break;
	}
	cout << "Dilnyk = " << b << endl;
}