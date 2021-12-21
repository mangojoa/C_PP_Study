/*
������ ���� ȣ��� ��ü ���� 

'���� ���� ȣ��'�� ��ü�� �Ű� ������ ������ ���� ���ǻ���
1. �Լ� ������ �Ű� ���� ��ü�� �����Ͽ���, ���� ��ü�� ���ͽ�Ű�� �ʴ´�.
2. �Ű� ���� ��ü�� �����ڰ� ������� �ʰ� �Ҹ��ڸ� ����Ǵ� ���Ī ������ �۵��Ѵ�.

'������ ���� ȣ��'�� �λ��� ���׿� ������ �ٸ��� �۵��Ѵ�.
1. ���� �Ű� ������ �̷���� ��� ������ ���� ��ü�� ���� ������ �ȴ�.
2. ���� �Ű� ������ �̸��� �����ǹǷ�, �����ڿ� �Ҹ��ڴ� �ƿ� ������� �ʴ´�. 
*/

#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius" << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius" << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius" << radius << endl;
}

void increase(Circle& c) { // c�� ���� �Ű� ����
	int r = c.getRadius(); // c���� getRadius()�� �ҷ��� radius�� int r �� ��´�.
	c.setRadius(r + 1); // c�� �����ϴ� ���� ��ü�� ������ 1 ����
}

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
}