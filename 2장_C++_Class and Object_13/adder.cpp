#include "adder.h"

adder::adder(int a, int b) {
	op1 = a; op2 = b;
}

int adder::process() {
	return op1 + op2;
}