#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class story {
private:
	
public:
	void progress_forest();
	void progress_dungeon();
};

class fights {
private:

public:
};

class traps_obs {
private:

public:
};

class stats {
private:
	int HP = 100;
public:
	int getHP();

	//destructor
	~stats();

	int take_HP(int);
};
