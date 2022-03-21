#include <iostream>
#include <string>
#include <set>

using namespace std;

void main()
{
	string students[10] = { "Spelina", "Cherepkov", "Sprynskiy", "Roman", "Hoshivskiy","Buhai","Mytnik","Petryk","Soroka","Viytovych" };
	set <string> student{ "Spelina", "Cherepkov", "Sprynskiy", "Roman", "Hoshivskiy","Buhai","Mytnik","Petryk","Soroka","Viytovych"};
	set <string> engl{ "Spelina" , "Sprynskiy", "Mytnik", "Petryk" };
	set <string> math{ "Spelina", "Cherepkov", "Sprynskiy" , "Buhai" };
	set <string> chem{ "Spelina","Roman", "Mytnik","Soroka","Viytovych"};
	set <string> phys{ "Spelina", "Roman", "Buhai","Mytnik", "Spelina" };
	set <string> ukrm{ "Spelina","Soroka","Viytovych" ,"Spelina",  "Cherepkov" };

	cout << "Present in every set: ";

	for (int i = 0; i < 10; i++) {
		if (engl.count(students[i]) != 1)
			break;
		if (math.count(students[i]) != 1)
			break;
		if (chem.count(students[i]) != 1)
			break;
		if (phys.count(students[i]) != 1)
			break;
		if (ukrm.count(students[i]) != 1)
			break;
		cout << students[i] << endl;
	}

	cout << "Doesn't present at any set: ";
	for (int i = 0; i < 10; i++) {
		int cnt = 0; 
		if (engl.count(students[i]) != 1)
			cnt++;
		if (math.count(students[i]) != 1)
			cnt++;
		if (chem.count(students[i]) != 1)
			cnt++;
		if (phys.count(students[i]) != 1)
			cnt++;
		if (ukrm.count(students[i]) != 1)
			cnt++;
		if (cnt==5)
			cout << students[i] << endl;
	}

	cout << "Present in 3-d and 5-th set, but not in 4-th: ";

	for (int i = 0; i < 10; i++) {
		int cnt = 0;
		if (engl.count(students[i]) == 1 || engl.count(students[i]) != 1)
			cnt++;
		if (math.count(students[i]) == 1 || math.count(students[i]) != 1)
			cnt++;
		if (chem.count(students[i]) == 1)
			cnt++;
		if (phys.count(students[i]) != 1)
			cnt++;
		if (ukrm.count(students[i]) == 1)
			cnt++;
		if (cnt == 5)
			cout << students[i] << endl;
	}
}