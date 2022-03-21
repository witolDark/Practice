#include <iostream>
#include <Windows.h>

using namespace std;


float randint(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

void main()
{
	srand(time(NULL));
	int n = 11;
	float array[11][11];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = 0;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j <= 0; j++)
			array[i][j] = 1;
		cout << endl;
	}*/
	/*int l = 1;
	int t = 0;
	for (int i = 0 + t; i <= n / 2; i++) {
		for (int j = 0 + t; j <= i; j++)
		{
			array[i][j] = 1;
			t++;
		}
		cout << endl;
	}
	t = 0;
	for (int i = n - 1; i >= n / 2; i--) {
		for (int j = 0 - t; j <= n / 2; j++)
		{
			array[i][j] = 1;
			t++;
		}
		cout << endl;
	}*/
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || j == n - i - 1)
				array[i][j] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n / 4;j+=2) {
			
			array[i][j] = 1;
			
		}
	}




	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
}