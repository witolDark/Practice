#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	int x = 1;
	float v1 = pow((x + pow(cos(x),2) + sin(pow(x, 2)) + log10(x)), 1.0 / 3);
	float v2 = pow(x, 2) + pow(log(pow(x, 3)), 2) - exp(sqrt(x));
	cout << "X = " << x << " V19 = " << v1 / v2;
}