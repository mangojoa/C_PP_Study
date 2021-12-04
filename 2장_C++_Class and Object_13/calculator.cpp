#include <iostream>
using namespace std;

#include "adder.h"
#include "calculator.h"

void calculator::run() {
	cout << "두 개의 수를 입력하세요 >> ";
	int a, b;
	cin >> a >> b;
	adder adder(a, b);
	cout << adder.process();
}