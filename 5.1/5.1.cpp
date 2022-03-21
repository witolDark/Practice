#include <iostream>
#include <conio.h>

#define n 10
#define k 10

using namespace std;

int randint(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

void main()
{
	int min = 20000;
	int l = 19;
	bool zero = false;
	srand(time(NULL));
	int array[n][k];
	long float dobutok = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			array[i][j] = randint(-l * n * randint(1, 10), l * k * 10);
			cout << array[i][j] << " ";
			if (array[i][j] < -5 || array[i][j] > 30)
				dobutok *= array[i][j];
			if (array[i][j] < min)
				min = array[i][j];
			if (array[i][j] == 0)
				zero = true;

		}
		cout << endl;
	}
	cout << "Dobutok = " << dobutok << endl;
	cout << "Min = " << min << " Zero expected: " << zero << endl;
}