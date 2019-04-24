#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Stats.h"
using namespace std;

class Forest
{
public:
	void Forest_Story();
private:
	int x = 0; // Switch counter
	int choice; // Choosing an answer from the switch case
	bool alive = true; //Statment to keep true to be alive
};
void Forest::Forest_Story()
{


	cout << "you have entered the forest on a well lit day" << endl;

	HP h;
	bool alive = true;
	int x = 0;
	while (alive != false) {
		
		int choose;

		switch (x) {
		case 0: system("CLS");

			cout << "Many dangers lurk in these woods." << endl;
			cout << "This place is stange to you, but you push on." << endl;
			cout << "You are following a small durt road, but notice a faint beaten path that strikes you as a short cut.\n";
			cout << "HP = "; h.dis(); cout << endl;
			cout << "1. continue strait. \n2. take the beaten path." << endl;
			cin >> choose;
			if (choose == 1) { x = 1; }
			else { x = 6; }
			break;
		case 1: system("CLS");
			cout << "as you walk further along the road, the foliage begins to thicken, slowly bloking out the sun" << endl;
			cout << "getting frantick you begin to run, when suddently you trip over a tree root, petruding from the ground" << endl;
			h.take_dmg(20);
			cout << "you have taken 20 damage - HP = "; h.dis(); cout << "\n\n" << endl;
			cout << "calming down you take a look around and notice a large tree that stretches above the domes of the others in the distance." << endl;
			cout << "1. Approach the tree. \n2. continue on" << endl;
			cin >> choose;
			if (choose == 1) { x = 2; }
			else { x = 4; }
			break;
		case 2: system("CLS");
			cout << "As you aprouch the tree, you see the sun break through the crown of the tree, and you notice a shimmering light," << endl;
			cout << "as if the sun is reflecting off something" << endl;
			cout << "But while youre looking around some more you notice a break in the trees, revealing another path." << endl;
			cout << "1. you climb the tree.\n2. you follow the new path.\n3. go back the way you came." << endl;
			cin >> choose;
			if (choose == 1) { x = 3; }
			else if (choose == 2) { x = 9; }
			else { x = 8; }
			break;
		case 3: system("CLS");
			cout << "as you climb the tree, the harshness of the forest leaves your mind" << endl;
			cout << "you reach the shimmer, and discover a zip line stretching over the forest to the other side." << endl;
			cout << "do you chance it? " << endl;
			cout << "1. take the zip line.\n2. dont chance it." << endl;
			cin >> choose;
			if (choose == 1) { x = 10; }
			else {
				cout << "as you are climbing down the massive tree, a branch breaks and sends you falling down." << endl;
				int all;
				h.take_dmg(50);
				cout << "HP = "; h.dis(); cout << endl;
				cout << "you are then eaten by a bear." << endl;
				alive = false;
			}
			break;
		case 4:system("CLS");
			cout << "as you walk, a bear apears from the woods" << endl;
			cout << "1. stand your ground. \n2. run" << endl;
			cin >> choose;
			if (choose == 1) { x = 7; }
			else {
				cout << "the bear catches up and eats you." << endl;
				alive = false;
			}
			break;
		case 6: system("CLS");
			cout << "As you fight through the brush on this beaten path, you stumble apon a clearing." << endl;
			cout << "In this clearing you notice a tree stump that has been carved into a chair" << endl;
			cout << "as you aprouch this stump you relize it is no chair but an exacution block" << endl;
			cout << "a man comes out of the brush and says 'i have been expecting you'." << endl;
			cout << "This is the end of your story" << endl;
			alive = false;
			break;
		case 7:system("CLS");
			cout << "as the bear runs up to you, you stand your ground." << endl;
			cout << "the bear stops in front of you and rawrs in your face, and after seeing you still hold your ground," << endl;
			cout << "the bear respects you and gives you a ride to the other side of the forest." << endl;
			alive = false;
			break;
		case 8: system("CLS");
			x = 4;
			break;
		case 9:system("CLS");
			cout << "You come to a clear path out of the dense forest, it is a long walk, but you are sure of it's direction" << endl;
			cout << "After many hours of walking you have passed through the forest." << endl;
			alive = false;
			break;
		case 10: system("CLS");
			cout << "as you ride the zip line, you look down to see a bear walking along the trail." << endl;
			cout << "you made it out of the forest" << endl;
			alive = false;
			break;
		}

	}
}
