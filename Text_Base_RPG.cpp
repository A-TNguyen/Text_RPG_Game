//Display Menu

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class DisplayMenu
{
public:
	int menu;

	string getAnswers(int);
	

private:
	string answers;
	string options;
	string ans[3] = { "Start", "Continue", "Exit" };
	string movement[4] = { "Walk Left","Walk Right", "Walk Up", " Walk Down" };
	struct Dungeons //Struct of Array
	{
		
	};
};

string DisplayMenu:: getAnswers( int menu )
{
	
	return ans[menu];
}

int main()
{


	int selection;
	DisplayMenu menu;
	cout << "*********************************************************\n";
	cout << "Please choose from the following\n";
	cout << "1. Start\n";
	cout << "2. Continue\n";
	cout << "3. Exit\n";
	cin >> selection;

	string i = menu.getAnswers( selection - 1 ); // Can you either i or just menu.getAnswers
	
	cout << i << endl;

	system( "pause" );
	return 0;
}
