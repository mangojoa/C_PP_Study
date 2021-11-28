/*
������ �Ҹ����� ���� ����

������ü�� ������ü ��� ������ ������ �ݴ������ �Ҹ� �ȴ�. 
*/

#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::~Circle() { // ~�Ҹ��� ����
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

// ���� ��ü
Circle globalDount(1000);
Circle globalPizza(2000);

void f() {
	Circle fDount(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDount;
	Circle mainPizza(10);
}