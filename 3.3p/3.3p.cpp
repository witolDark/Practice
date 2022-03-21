#include <iostream>
#include "C:\Users\Witold\Downloads\variadic_table-master\variadic_table-master\include\VariadicTable.h"

using namespace std;

int i = 19;
float h = 0.1 * i;
float x = 0;
int sum;
int k;
float z;

VariadicTable<float, float> vt({ "X","Z" },i/h);

float y(float x)
{
    return (x + 2) / (2 * x - 1);
}

void _while_()
{
    while (x <= i)
    {
        x += h;
        z = y(x);
        vt.addRow(x, z);
        if (z < 0)
        {
            k++;
            sum += z;
        }
    }
    vt.print(cout);
    if (k != 0 || sum != 0)
        cout << "Avarage = " << sum / k << endl;
    else cout << "no avarage avalaible" << endl;
}
void _do_while_()
{
    do  {
        x += h;
        z = y(x);
        vt.addRow(x, z);
        if (z < 0)
        {
            k++;
            sum += z;
        }
    } while (x < i);
    vt.print(cout);
    if (k != 0 || sum != 0)
        cout << "Avarage = " << sum / k << endl;
    else cout << "no avarage avalaible" << endl;
}

void main()
{
    _while_();
    cout << endl;
    _do_while_();
}
