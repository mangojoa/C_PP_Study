/*
������ ���� ȣ���� ����
'�ּҿ� ���� ȣ��'�� ������ Ÿ������ �Ź� ������ �����ϹǷ�, ȣ���ϴ� �ʿ��� �ּҸ� �����ϱ� ���� 
& �����ڸ� ����ؾ� �ϰ�, swap() �Լ��� �ڵ忡���� *��ȣ�� �ݺ������� ����Կ� ����, �Ǽ��� ���ɼ��� 
�ڵ� �ۼ��� ���尨�� �谡 �ǰ� �ڵ��� �������� ��������.

������ ���� �Ű� ������ ����ϸ� ������ ������ �Ѱ��ֱ⸸ �ϸ� �ǰ�, �Լ� �ÿ����� ���� �Ű� ������ 
���� ����ó�� ����ϱ� ������ �ۼ��ϱ� ���� ���� ���� �ڵ尡 �ȴ�.

������ ���� ȣ��� ��ü ����.
�� ���� ����� ������ �ٸ��� �۵��Ѵ�.

1. ���� �Ű� ������ �̷���� ��� ������ ���� ��ü�� ���� ������ �ȴ�.
2. ���� �Ű� ������ �̸��� �����ǹǷ�, �����ڿ� �Ҹ��ڴ� �ƿ� ������� �ʴ´�.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle& c) {
	int r;
	cout << "���� ������ �������� �Է��ϼ��� >> ";
	cin >> r;
	c.setRadius(r);
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut�� ���� >> " << donut.getArea() << endl;
}