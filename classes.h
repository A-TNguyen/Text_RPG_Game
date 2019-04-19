#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void progress(int);

class story {
private:
	
public:
	
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

	void take_HP(int);
};
