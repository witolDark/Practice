#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int randint(int min, int max)
{
	srand(time(NULL));
	return rand() % (max - min + 1) + min;
}

void main()
{
	float x; 
switch (randint(1,3))
	{
	case 1:
	{
		x = 3.78;
		break;
	}
	case 2:
	{
		x = 2.020;
		break;
	}
	case 3:
	{
		x = -0.194;
		break;
	}
}
	float K = 3.780;
	float a = K * (exp(2 * x) + exp(x)) / pow(4, 1.0 / 3) + pow(3, 1.0 / 5);
	float b = log10(x) * sin(1 / 2 * asin(-2 * sqrt(x) / 3));
	cout << "X = " << x << " A = " << a << " B = " << b << endl;
	if (a >= 1 + 2 * b)
		cout << "Y = " << (a - 2) / a * a + b * b << endl;
	else cout << "Y = " << 2 / (a - 2 * b) << endl;
}