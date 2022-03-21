#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	int max = 0;
	int items[5] = {20, 17, 6, 5, 5};
	for (int i = 0; i < 5; i++) {
		cout << items[i] << " ";
		if (items[i] + items[i + 1] > max)
			max = items[i] + items[i + 1];
	}
	/*int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (items[i] + items[i + 1] > max)
			max = items[i] + items[i + 1];
	}	*/
	cout << "Max veight: " << max << endl;
}
