#include <iostream>
#include <cmath>
using namespace std;

void main()
{
#define p 3.14
	float h = 0.02;
	char graph[50][50];
	int function;
	for (int x = -25; x <= 25; x++) {
		for (int y = -25; y <= 25; y++) {
			graph[x][y] = ' ';
		}
	}
	for (float i = -p; i <= p; i+=h) {
			function = 2 * pow(i, 3) - 4 * i;
			int k(i);
			graph[k][function] = '*';
		}
	for (int x = -25; x <= 25; x++) {
		for (int y = -25; y <= 25; y++) {
			cout << graph[x][y];
		}
		cout << endl;
	}
	
}