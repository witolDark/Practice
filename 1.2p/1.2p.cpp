#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	int u = 1;
	float a = 9.5;
	float b = 5.7;
	float c = sqrt(pow(a, 2) - pow(b, 2));
	float p = (a + b + c) / 2;
	float r = sqrt(((p - a) * (p - b) * (p - c)) / p);
	float y1 = log10(u) + pow(cos(c), 2.0) + 1.8 * exp(a - b);
	float y2 = 1.5 * pow(10,-2.0) * c + r * pow(sin(b), 2.0);
	cout << "u = " << u << " a = " << a << " b = " << b << " c = " << c << " p = " << p << " r = " << r << endl;
	cout << "y = " << y1 / y2 << endl;
}