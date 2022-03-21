#include <iostream>


using namespace std;

void main()
{
	int array[10] = { 20,22,18,4,75,20,96,15,84,90 };
	int a, b, c, k = 0;
	int max = 0;
	for (int i = 0; i <= 10; i+=2) {
		if (array[i] > array[i + 1]) {
				a = array[i + 1];
				b = array[i];
		}
		else {
				a = array[i];
				b = array[i + 1];
		}
		while (true)
		{
			c = b % a;
			b = a;
			a = c;
			if (c == 0)
				break;
		}
		if (b > max) {
			max = b;
			k = i/2;
		}
	}
	cout << "True is " << k+1 << " point with (" << array[k * 2] << " " << array[k * 2 + 1] << ") divider and it is " << max << endl;
}
