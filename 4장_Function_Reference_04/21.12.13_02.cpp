/*
��ü ��ȯ �� ��ü ����

��ü ġȯ => ��ü�� ��� �����Ͱ� ��Ʈ ������ ����ȴ�. (������ Ŭ���� Ÿ�Կ� ���ؼ��� ����)

�Լ��� ��ü ���� => Circle Ŭ������ ��ü�� �����ϴ� getCircle()�Լ�
return ���� ����Ǹ� tmp�� ���纻�� ����� �� ���纻�� getCircle()�� ȣ���� ������ ���޵ȴ�.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void serRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp; // ��ü tmp�� �����Ѵ�. 
}

int main() {
	Circle c; // ��ü�� �����ȴ�. radius�� �ʱ�ȭ�ȴ�.
	cout << c.getArea() << endl;

	c = getCircle();
	cout << c.getArea() << endl;
}