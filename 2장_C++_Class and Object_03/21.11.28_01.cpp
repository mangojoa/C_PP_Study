#include <iostream>
using namespace std;

/*
���ӻ�����, �����ڰ� �ٸ� ������ ȣ��

�� Ŭ������ �����ڵ鿡�� ��� ��ü�� �ʱ�ȭ�ϴ� ����� �ڵ尡 �ߺ��ȴ�.

C++11���ʹ� �ߺ��� �ʱ�ȭ �ڵ带 �ϳ��� �����ڷ� ����, �ٸ� �����ڿ��� �� �����ڸ� ȣ���� �� �ְ� �Ѵ�. 

�׷��ٸ� 21.11.26.cpp���� �ۼ��� �ڵ带 ����ȭ �غ���
*/

class Circle {
public:
	int radius;
	Circle(); // ���ӻ�����
	Circle(int r); // Ÿ�� ������
	double getArea();
};

	Circle::Circle() : Circle(1) { }

	Circle::Circle(int r) {
		radius = r;
		cout << "������ " << radius << " �� ����" << endl;
	}

	double Circle::getArea() {
		return 3.14 * radius * radius;
	}

	int main() {

		Circle dount; // �Ű����� ���� ������ ȣ��
		double area = dount.getArea();
		cout << "dount�� ������ >> " << area << endl;

		Circle pizza(20); // �Ű����� �ִ� ������ ȣ��
		area = pizza.getArea();
		cout << "pizza�� ������ >> " << area << endl;

	}