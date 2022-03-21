#include <iostream>
#include <string>

using namespace std;

void main()
{
#define n 3
	struct autos {
		string id;
		string begpoint;
		string endpoint;
		int weight[n];
	} autos[n];

	autos[0].id = "BK7590BC";
	autos[0].begpoint = "Sambir";
	autos[0].endpoint = "Lviv";
	autos[0].weight[0] = 5;
	autos[0].weight[1] = 7;
	autos[0].weight[2] = 8;

	autos[1].id = "CB8136AX";
	autos[1].begpoint = "Stariy Sambir";
	autos[1].endpoint = "Vinnytsia";
	autos[1].weight[0] = 8;
	autos[1].weight[1] = 10;
	autos[1].weight[2] = 4;

	autos[2].id = "BB4177CH";
	autos[2].begpoint = "Lviv";
	autos[2].endpoint = "Rivne";
	autos[2].weight[0] = 6;
	autos[2].weight[1] = 8;
	autos[2].weight[2] = 5;

	cout << "1)" << endl;
	string findid;
	cout << "Enter a id to find transportation" << endl;
	cin >> findid;

	float average[n];

	for (int i = 0; i < n; i++) {
		if (findid == autos[i].id) {
			cout << "ID: " << autos[i].id << endl;
			cout << "Beging point: " << autos[i].begpoint << endl;
			cout << "End point: " << autos[i].endpoint << endl;
			cout << "Weight: ";
			for (int j = 0; j < n; j++)
				cout << autos[i].weight[j] << ",";
			cout << " tons" << endl;
			cout << endl;
		}
		average[i] = (autos[i].weight[0] + autos[i].weight[1] + autos[i].weight[2]) / 3;
	}

	cout << "2)" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Weight of " << i + 1 << " auto: " << average[i] << endl;
		cout << endl;
	}

	cout << "3)" << endl;
	string fbegp;
	string fendp;
	cout << "Enter a begin point -> end point" << endl;
	cin >> fbegp >> fendp;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		if (fbegp == autos[i].begpoint && fendp == autos[i].endpoint) {
			cout << "ID: " << autos[i].id << endl;
			cout << "Weight: " << autos[i].weight[0] <<" "<< autos[i].weight[1] <<" " << autos[i].weight[2] << " tons" << endl;
			cout << endl;
		}
		else counter++;
	}
	if (counter == 3)
		cout << "No data" << endl;
}