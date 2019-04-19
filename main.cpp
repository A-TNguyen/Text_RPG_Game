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
		cout << "you have entered the forest on a well lit day" << endl;
	}
	else {
		cout << "you have entered the dongoun" << endl;
	}
	bool alive = true;
	int x = 0;
	while (alive != false) {
		story P1S;
		traps_obs P1T;
		stats P1Stat;
		int choose;
		
		switch (x) {
		case 0: cout << "Many dangers lurk in these woods." << endl;
			cout << "This place is stange to you, but you push on." << endl;
			cout << "You are following a small durt road, but notice a faint beaten path that strikes you as a short cut.\n";
			cout << "HP = " << P1Stat.getHP() << endl;
			cout << "1. continue strait. \n2. take the beaten path." << endl;
			cin >> choose;
			if (choose == 1) {x = 1;}
			else { x = 6; }
			break;
		case 1: 
			cout << "as you walk further along the road, the foliage begins to thicken, slowly bloking out the sun" << endl;
			cout << "getting frantick you begin to run, when suddently you trip over a tree root, petruding from the ground" << endl;
			P1Stat.take_HP(20);
			cout<<"you have taken damage - HP = " << P1Stat.getHP() <<"\n\n"<< endl;
			cout << "calming down you take a look around and notice a large tree that stretches above the domes of the others in the distance." << endl;
			cout << "1. Aprocch the tree. \n2. continue on" << endl;
			cin >> choose;
			if (choose == 1) { x = 2; }
			else { x = 4; }
			break;
		case 2: cout << "As you aprouch the tree, you see the sun break through the crown of the tree, and you notice a shimmering light," << endl;
			cout << "as if the sun is reflecting off something" << endl;
			cout << "But while youre looking around some more you notice a break in the trees, revealing another path." << endl;
			cout << "1. you climb the tree.\n2. you follow the new path.\n 3. go back the way you came." << endl;
			cin >> choose;
			if (choose == 1) { x = 3; }
			else if(choose == 2) { x = 9; }
			else { x = 8; }
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
