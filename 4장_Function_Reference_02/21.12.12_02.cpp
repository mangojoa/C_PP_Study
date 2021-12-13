/*
call by value�� ��ü ����

increase(Circle c) �Լ��� ���� ��ü �� �����ϴ� ������ �����ش�.
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
	cout << radius << endl;
}

Circle::Circle(int radius) { // ���� �����ڴ� ������� �ʴ´ٴ� ���̴�. 
	this->radius = radius;
	cout << radius << endl;
}

Circle::~Circle() {
	cout << radius << endl;
}

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30); // �Ű����� 30�� waffle ��ü�� �����Ѵ�. 
	increase(waffle); // waffle ��ü�� increase(Circle c) �Լ��� �����Ѵ�. 
	cout << waffle.getRadius() << endl;
}

/*
call by value�� ��ü�� ������ �� ������

��ü�� �����ϸ� ǥ�������δ� ��Ÿ���� �ʴ� �ణ�� ������ ���ݵȴ�.
��ü�� �Լ��� ���޵Ǹ�� �Լ��� �Ű� ���� ��ü�� �����ǰ�, �Լ��� �����ϸ� �Ű� ���� ��ü�� �Ҹ�ȴ�.
�̶� �Ű� ���� ��ü�� �����ڿ� �Ҹ��ڰ� ��� ������� �ʴ´�. 
C++ �����Ϸ��� ���, �Ű������� �����ڴ� ������� �ʰ� �Ҹ��ڸ� ����ǵ��� ������ �Ѵ�.

increase()�� �Ű����� c�� ������ ��, ������ ���� ���� c�� ��ü ������ waffle��ü�� �״�� ����ȴ�.
������ increase()�� ����� �� ��ü c�� �Ҹ��ڴ� ����ȴ�. 

�Ű� ���� ��ü�� �����ڰ� ������� �ʰ� �Ҹ��ڸ� ����Ǵ� ���Ī ������, �Լ� ȣ�� �� ���� ��ü�� ���¸� �״��
�Ű� ���� ��ü�� ���޵ǵ��� �ϱ� ���� ��������, �ߴ��� ������ �����Ѵ�. 

�� �������� �ذ��ϱ� ���� ������� ���� �����ڸ� ����ؾ� �Ѵ�. 
*/