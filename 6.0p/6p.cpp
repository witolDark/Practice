#include <iostream>

using namespace std;

int randint(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

int browse(int days)
{
	if (days > 5 && days < 12)
		return 1;
	else return 0;
}

void main()
{
#define n 15
#define k 20
	int y[n];
	int g[k];
	float payday1[n];
	float payday2[k];
	int d = 200;
	int counter1 = 0, counter2 = 0;
	for (int i = 0; i < n; i++)
	{
		y[i] = randint(1, 31);
		payday1[i] = 200 * y[i] * 0.8;
		counter1 += browse(y[i]);
		cout << "Worker Y[" << i + 1 << "]: " << y[i] << " days and got "<<payday1[i]<<" usd" << endl;
	}

	for (int i = 0; i < k; i++)
	{
		g[i] = randint(1, 31);
		payday2[i] = 200 * g[i] * 0.8;
		counter2 += browse(g[i]);
		cout << "Worker G[" << i + 1 << "]: " << g[i] << " days and got "<<payday2[i]<<" usd" << endl;
	}
	cout << "1: " << counter1 << " worked between 5 and 12 days" << endl;
	cout << "2: " << counter2 << " worked between 5 and 12 days" << endl;
}