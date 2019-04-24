#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "DisplayMenu.h"
#include "classes.h"
#include "Cave.h"
#include "Forest.h"
#include "Stats.h"

using namespace std;

int main()
{

	int selection;
	DisplayMenu menu;
	char again;
	do {
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

		else if ( selection == 3 )
		{
			goto exit;
		}
		
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
