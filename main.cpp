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
	
	if (i == 1) {
		story P1S;
		P1S.progress_forest();
	}
	//else if (i == 2) {
	//	progress_dungeon();
	//}

	system("pause");
	return 0;
}
