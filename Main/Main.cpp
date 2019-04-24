#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "DisplayMenu.h"
#include "Cave.h"
#include "Forest.h"
#include "Stats.h"

using namespace std;

int main()
{

	int selection;
	DisplayMenu Display;
	char again;
	do {

		Display.Display();
		
		cout << "Do you want to play again? ( Y / N )";
		
	redo:cin >> again; //This statement is for  the do while loop to either continue or end
	system( "CLS" );
	again = toupper( again );
	if ( toupper( again ) != 'Y' && toupper( again ) != 'N' )
		{
			cout << "Please make a invalid choice \n";
			goto redo;
		}

	} while ( toupper( again ) == 'Y' );
	exit:cout << "\nThis is the end of your adventure\n\nThank you for playing Andrew Nguyen and David Vander Linden Text Based RPG\n\n";
	system( "pause" );
	return 0;
}
