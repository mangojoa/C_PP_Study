#include <iostream>
using namespace std;

#include "adder.h"
#include "calculator.h"

void calculator::run() {
	cout << "�� ���� ���� �Է��ϼ��� >> ";
	int a, b;
	cin >> a >> b;
	adder adder(a, b);
	cout << adder.process();
}