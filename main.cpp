#include<iostream>
#include <string>
#include <vector>

#include "classes.h"

using namespace std;

int main()
{
	int i;
	cout << "would you like to enter the forest or the dark dungeon?" << endl;
	cout << "1. forest" << endl; cout << "2. dongeon" << endl;
	cin >> i;
	progress(i);
	system("pause");
	cout << "out of progress function" << endl;
	system("pause");
	return 0;
}

void progress(int path) {

	if (path == 1) {
		cout << "you have entered the forest" << endl;
	}
	else {
		cout << "you have entered the dongoun" << endl;
	}
	bool alive = true;
	int x = 0;
	while (alive != false) {
		story P1S;
		string i;
		switch (x) {
		case 0: 
			break;
		case 1: 
			break;
		case 2: 
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		}
	
	}
}
