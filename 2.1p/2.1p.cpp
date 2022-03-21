#include <iostream>
#include <cmath>

using namespace std;

int randint(int min, int max)
{
	srand(time(NULL));
	return rand() % (max - min + 1) + min;
}

void main()
{
	int x = randint(1, 3);
	float y1 = (x + 2) * (2 * x - 1);
	float y2 = pow(x, 3) + 8 * pow(x, -4) + pow(4 - x, 1.0 / 2);
	float y3 = (4.22 * pow(x, 1.0 / 3) + 2.15 * x) / abs(tan(x) - 2);
	cout << "x = " << x << endl;
	cout << "y1 = " << y1 << " y2 = " << y2 << " y3 = " << y3 << endl;
	cout << "Z = " << (y1 - y2) / y3 << endl;
}