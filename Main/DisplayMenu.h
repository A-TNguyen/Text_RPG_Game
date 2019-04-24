#pragma once
#include <iostream>
#include "Forest.h"
#include "Cave.h"
using namespace std;

class DisplayMenu
{
public:
	int selection;
	void Display();
};
void DisplayMenu::Display()
{
	cout << setw( 50 ) << cout.fill( '*' ) << endl;
	cout << "\tPlease choose from the following\n";
	cout << "\t\t1. Forest Adventure\n";
	cout << "\t\t2. Cave Exploring\n";
	cout << "\t\t3. Exit\n";
	cout << setw( 50 ) << cout.fill( '*' ) << endl;
redo1:cin >> selection;

	if ( selection == 1 )
	{
		Forest F;
		F.Forest_Story();
	}

	else if ( selection == 2 )
	{
		Cave C;
		C.Cave_Story();
	}
	
}

