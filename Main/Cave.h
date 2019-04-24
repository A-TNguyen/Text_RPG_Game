#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cave
{
public:
	void Cave_Story();
private:
	int x = 0; // Switch counter
	int choice; // Choosing an answer from the switch case
	bool alive = true; //Statment to keep true to be alive
};

//Scope resolution for the class Cave for cave story function in order to utilize defined variables in pricate
void Cave::Cave_Story()
{
	
	//Switch case
	while ( alive != false ) 
	
	{  //Implement later for whole switch case story
		switch ( x )
		{

		case 0: system( "CLS" );
			cout << "You approach the front of the cave you notice a sign  \n ***** Beware Enter at your own Risk***** \n";
			cout << "\nWhat marvelous path sha'll you venture human? \n\n";
			cout << "1. Walk into the dark abyss with nothing but your shorts and tank top\n";
			cout << "2. Sit under the shaded Oak Tree and fall asleep\n";
			cout << "3. Chicken out from reading the sign , and go home\n";
			begin:cin >> choice;
			if ( choice == 1 )
			{
				x = 1;
			}
			else if ( choice == 2 )
			{
				x = 10;
			}
			else if ( choice == 3 )
			{
				x = 13;
			}
			break;
		case 1:system( "CLS" );
			cout << "You choose not to chicken out in your trousers and decide to venture deeper into the cave\n";
			cout << "The path you walk begins to fork to the left and right, what do you choose?\n";
			cout << "1. Walk Left\n";
			cout << "2. Walk Right\n";
			cin >> choice;
			if ( choice == 1 )
			{
				x = 2;
			}
			if ( choice == 2 )
			{
				x = 12;
			}
			break;
		case 2: system( "CLS" );
			cout << "As you continue down the path you hear running water echoing rapidily throughout the cave,\n";
			cout << "You become curious and wander towards the path only to find someone's armor and weapon.\n";
			cout << "1. Put on the armor and weapon\n";
			cout << "2. Ignore, the loot and continue towards the rapid water\n";
			cout << "3. Poke at the remains of the owner of the armor and weapon\n";
			cin >> choice;
			if ( choice == 1 )
			{
				x = 3;
			}
			if ( choice == 2 )
			{
				x = 4;
			}
			if ( choice == 3 )
			{
				x = 11;
			}
			break;

		case 3: system( "CLS" );
			cout << "The armor is a tight fit, looking snazzy in the rusty armor :)\n";
			cout << "Before you know it you end up in front of the rapid waters within the labryinth abyss\n";
			cout << "A melodic song could be heard from afar catching your attention\n";
			cout << "1. You are too tired, so you decide to take a nap behind the suspicious giant boulder\n";
			cout << "2. Walk towards the hypnotic singing\n";
			cout << "3. Run away because you remember you left the stove on\n";
			cin >> choice;
			if ( choice == 1 )
			{
				x = 14;
			}
			if ( choice == 2 )
			{
				x = 6;
			}
			if ( choice == 3 )
			{
				x = 12;
			}
			break;
		case 4: system( "CLS" );
			cout << "You end up in front of the rapid waters within the labryinth abyss\n";
			cout << "A melodic song could be heard from afar catching your attention\n";
			cout << "1. You are too tired, so you decide to take a nap behind the suspicious giant boulder\n";
			cout << "2. Walk towards the hypnotic singing\n";
			cout << "3. Run away because you remember you left the stove on\n";
			cin >> choice;
			if ( choice == 1 )
			{
				x = 14;
			}
			if ( choice == 2 )
			{
				x = 6;
			}
			if ( choice == 3 )
			{
				x = 12;
			}
			break;
		c5:case 5: system( "CLS" );
			cout << "After narrowly escaping the ghoulish skeleton remains of a former adventurer\n";
			cout << "You end up in front of the rapid waters within the labryinth abyss\n";
			cout << "A melodic song could be heard from afar catching your attention\n";
			cout << "1. You are too tired, so you decide to take a nap behind the suspicious giant boulder\n";
			cout << "2. Walk towards the hypnotic singing\n";
			cout << "3. Run away because you remember you left the stove on\n";
			cin >> choice;
			if ( choice == 1 )
			{
				x = 14;
			}
			if ( choice == 2 )
			{
				x = 6;
			}
			if ( choice == 3 )
			{
				x = 12;
			}
			break;
		case 6: system( "CLS" );
			cout << "Never gonna give you up\nNever gonna let you down\nNever gonna run around and desert you\n";
			cout << "You just been Ricked Roll . . . .\n";
			cout << "Rick Astly Hands you a Gold Sword\n";
			cout << "1. Take the sword\n";
			cout << "2. Walk away from being mememed.";
			cin >> choice;
			if ( choice == 1 )
			{
				x = 7;
			}
			if ( choice == 2 )
			{
				x = 15;
			}
			break;
		case 7: system( "CLS" );
			cout << "You swing the sword around, Congratulations you are now an adventurer! ! !";
			alive = false;
			break;
		case 10: system( "CLS" );
			cout << "Yikes ! ! ! The Tree became alive and ate you :D  \n";
			alive = false;
			break;
		case 11: system( "CLS" );
			cout << "The corps became alive and bit you for 30 HP \n";
			{
				goto c5;
			}
			break;
		case 12: system( "CLS" );
			cout << "The Cave collapsed and you were crushed. . . :(\n";
			alive = false;
			break;
		case 13: system( "CLS" );
			cout << "Well.... not all of us can be adventurers\n";
			alive = false;
			break;
		case 14: system( "CLS" );
			cout << "Bunch of Cave Trolls come out of nowhere and beat you to death while you were sleeping :(\n";
			alive = false;
			break;
		case 15: system( "CLS" );
			cout << "Traumatized from Rick Astly you decide to go home\n";
			alive = false;
			break;
		}
	}
}
