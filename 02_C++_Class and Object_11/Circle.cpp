/*
Ŭ������ ������ ���� 
*/
#include <iostream>
using namespace std;

#include "Circle.h"

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius;
	cout << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius;
	cout << " �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}