#pragma once
#include <iostream>

using namespace std;
class HP {
public:
	int take_dmg(int) {
		int* x = &health;
		*x = *x - 20;
		return *x;
	}
	void dis() {
		cout<<health;
	}

private:
	int health = 100;
};
