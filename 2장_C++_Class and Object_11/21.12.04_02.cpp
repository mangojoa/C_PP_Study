/*
C++ ���α׷��� �ҽ� �ڵ�� ������ ���� ��Ģ���� �и��Ͽ� �ۼ��ϴ� ���� �ٶ����ϴ�.

1. Ŭ�������� ������� ������Ͽ�, �����δ� cpp���Ͽ� �и��Ͽ� �ۼ��Ѵ�.
2. main() �� �Լ��� ���� ������ �� �� �̻��� cpp���Ͽ� ������ �ۼ��Ѵ�.

Ŭ������ ����ο� �����θ� ��� ���ϰ� cpp �ҽ� ���Ϸ� �и��ϸ� ��ü ���α׷��� �����ϱ� ���� Ŭ������ �����ϱ� ����.
Ŭ������ Ȱ���ϴ� �ڵ���� Ŭ������ ���� ������ �ʿ��ϹǷ�, Ŭ������ ����ΰ� ��� �ִ� ��� ���ϸ� include �Ͽ� ����ϸ� �ȴ�.

Circle.h Ŭ���� �����
Circle.cpp Ŭ���� ������
main.cpp main() �Լ� �� ������ �ڵ�
*/

#include <iostream>
using namespace std;

#include "Circle.h" // Circle.h �� ������ Ŭ������ ����θ� include �ؿ��� �κ� 

int main() {
	Circle dount;
	double area = dount.getArea();
	cout << "dount ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

}