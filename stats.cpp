//player stat function definitions

#include "classes.h"

stats::~stats(){}

void stats::take_HP(int x) {
	int* p = &HP;
	*p = *p - x;
}

int stats::getHP() {
	return HP;
}
