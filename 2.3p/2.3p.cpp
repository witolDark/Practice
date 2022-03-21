#include <iostream>
#include <string>

using namespace std;

int getyear(int x)
{
	return x % 60;
}

string getcolor(int year)
{
    if (year <= 12)
        return "green";
    else if (year > 12 && year <= 24)
        return "red";
    else if (year > 24 && year <= 36)
        return "yellow";
    else if (year > 36 && year <= 48)
        return "white";
    else if (year > 48 && year <= 60)
        return "black";
    else return " ";
}

string getanimal_if(int year)
{
    if (year % 12 == 1)
        return "rat";
    else if (year % 12 == 2)
        return "cow";
    else if (year % 12 == 3)
        return "tiger";
    else if (year % 12 == 4)
        return "bunny";
    else if (year % 12 == 5)
        return "dragon";
    else if (year % 12 == 6)
        return "snake";
    else if (year % 12 == 7)
        return "horse";
    else if (year % 12 == 8)
        return "sheep";
    else if (year % 12 == 9)
        return "monkey";
    else if (year % 12 == 10)
        return "chiken";
    else if (year % 12 == 11)
        return "dog";
    else if (year % 12 == 12)
        return "pig";
    else return " ";
}

string getanimal_case(int year)
{
    switch (year%12) {
    case 1: { return "rat"; break; }
    case 2: { return "cow"; break; }
    case 3: { return "tiger"; break; }
    case 4: { return "bunny"; break; }
    case 5: { return "dragon"; break; }
    case 6: { return "snake"; break; }
    case 7: { return "horse"; break; }
    case 8: { return "sheep"; break; }
    case 9: { return "monkey"; break; }
    case 10: { return "chiken"; break; }
    case 11: { return "dog"; break; }
    case 12: { return "pig"; break; }
    }
}

void main()
{
    int year;
    cout << "Enter a year ";
    cin >> year;
    cout << "Year of " + getcolor(getyear(year)) + " " + getanimal_case(getyear(year)) << endl;
}
