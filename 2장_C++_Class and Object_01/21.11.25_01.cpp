#include <iostream>

using namespace std;

/*
class Ű���带 �̿��Ͽ� Ŭ������ �����Ѵ�. (�����ڰ� �����ϴ� ���ο� ������ Ÿ���̴�.)

Ŭ������ �Ϲ������� �����/������ �� �����ȴ�. 
*/

// Ŭ���� �����
class Circle {
public: // ���� �������̴�. Ŭ������ �⺻������ ������ �Ǹ� public private producted ���� �ִ�.
	int radius; // ������ ������ �����ϴ� �κ��̴�. 
	double getArea(); // ()�����͸� �޴� ������ �ִٸ� �̴� �����ο��� �����Ǹ� ����� �Ѵ�. 
};

// Ŭ���� ������
double Circle::getArea() {
	return 3.14 * radius * radius; // ()�����͸� �ʿ�� �ϴ� ������ return ���� ������ ������ �̴�.
};

/*
Ŭ���� ����� ������ �и��ϴ� ������ ????

������ �ڹ� ���� ��� �Ѳ����� �����ϸ� �ȴ�. 
������ C++�� ���, Ŭ������ ������ ���ؼ� �и��Ѵ�. 

�̴� Ŭ������ ����ϰ��� �ϴ� �ٸ� C++ ���Ͽ����� ������ �� Ŭ������ ����θ� �ʿ��ϱ� �����̴�.
*/

int main() {
	Circle dount;
	dount.radius = 1; // dount ��ü�� �������� 1�� ����
	double area = dount.getArea(); // dount ��ü�� ���� �˾Ƴ���

	cout << "dount ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

}

