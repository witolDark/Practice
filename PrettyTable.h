#include <iostream>
#include <math.h>
using namespace std;


int main() {
    srand(time(NULL));
    int n, k;
    int i = 20;
    int a[10][10];
    int maximal, minimal, dobutok = 1;
    for (n = 1; n <= 10; n++) {
        for (k = 1; k <= 10; k++) {
            a[n][k] = i * k * (rand() % 10) - i * n * (rand() % 10);
            cout << a[n][k] << '\t';
        }
        cout << "\n";
    }
    maximal = 0, minimal = 0;
    for (n = 1; n <= 10; n++) {
        for (k = 1; k <= 10; k++) {
            if (a[n][k] > maximal) {
                maximal = a[n][k];
            }
            if (a[n][k] < minimal) {
                minimal = a[n][k];
            }
        }
    }
    cout << endl;
    dobutok = minimal * maximal;
    cout << "Max: " << maximal << " Min: " << minimal << endl;
    cout << "Dobutok min and max= " << dobutok << endl;
}