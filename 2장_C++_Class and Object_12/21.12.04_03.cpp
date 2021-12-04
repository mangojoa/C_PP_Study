/*
������� �ߺ� include �� �� ����� ������ 

cpp���Ͽ��� Ŭ������ ����� ��� ������ ������ include�ϸ�, �ߺ��������� ���� ������ ������ �߻��� �� �ִ�.

#include "Circle.h"
#include "Circle.h" // ������ ���� �߻�
#include "Circle.h" // ������ ���� �߻�

Circle.h ��� ���Ͽ� ���� ������ ���� �����ϸ� �ȴ�. 
*/

#include <iostream>
using namespace std;

/*
���� ���� �ϴ��� ������ ������ ����.

main() �Լ��� ù ��° #include "Circle.h"�� ó���� ��,
���� �������� CIRCLE_H ����� ���ǵȴ�

#define CIRCLE_H
*/
#include "Circle.h"
/*
�׸��� Ŭ���� Circle�� ����ΰ� main.cpp�� Ȯ��ȴ�.

main() �Լ��� �� ��° #include "Circle.h"�� ó���� ��,
CIRCLE_H ����� �̹� ���ǵǾ� �ֱ� ������, 
���� ���� ������ ���� ���� false�� �Ǿ� #endif �� ������ ���������� �ȴ�. 

�׷��Ƿ�  Circle Ŭ������ ����δ� main.cpp�� Ȯ����� �ʴ´�. 

#ifndef CIRCLE_H
*/
#include "Circle.h"
/*
main() �Լ��� �� ��° #include "Circle.h" ���� �� ��° include ���� ������ ������� ó���ȴ�.

�ᱹ ó�� #include "Circle.h" ���� ó���ǰ� ������ include���� ó������ �ʰ� �Ǿ�, 
Circle Ŭ������ ����ΰ� �� ���� main.cpp�� Ȯ��ȴ�.
*/
#include "Circle.h"

int main() {
	
	Circle dount;
	double area = dount.getArea();
	cout << "dount ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

}