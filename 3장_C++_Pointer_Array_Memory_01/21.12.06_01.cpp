/*
��ü�� �ٷ�� ���� ��ü�� ���� ������ ������ �����ϰ�,
�� ������ ������ ��ü�� �ɹ� ������ �а� ���� ���ų� �ɹ� �Լ��� ȣ���� �� �ִ�.

1. ��ü�� ���� ������ ���� ���� 
Circle Ÿ���� ��ü�� ���� ������ ������ ������ ���� �����Ѵ�.

Circle *p;

����� ������ ���� p�� ���� �ƹ� ��ü�� ����Ű�� ���� �ʴ�. 

2. ������ ������ ��ü �ּ� ����
��ü�� �ּҴ� ��ü �̸� �տ� & �����ڸ� ����Ϸ� ǥ���Ѵ�.
������ ���� p�� donut ��ü�� �ּҸ� �����ϴ� �ڵ�� ������ ����.

p = &donut;

������ ������ ������ �� ������ ���� ��ü�� �ּҸ� �ʱ�ȭ�� ���� �ִ�.

Circle *p = &donut;

3. �����͸� �̿��� ��ü �ɹ� ����
��ü �̸����� �ɹ��� ������ ���� ������ ���� ��(.) �����ڸ� �̿�������

d = donut.getArea();

��ü �����ͷ� �ɹ��� ������ ���� -> �����ڸ� ����Ѵ�. 

d = p -> getArea();

�� �ڵ�� ������ ���� �ڵ��� �� �ִ�. 

d = (*p).getArea();

!!! �߿� !!!

�ʱ�ȭ���� ���� ��ü �����͸� �̿��ϸ� ���� �߻� !! 
Circle *p;
p -> getArea(); // ���� ���� �߻�

�� �ڵ�� p�� � Circle Ÿ���� ��ü�� ����Ű�� ���� ���¿��� getArea() �Լ��� ȣ���ϹǷ�,
���� �߿� 'null pointer assignment' ������ �߻��Ѵ�. 
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);
	
	// ��ü �̸����� �ɹ� ����
	cout << donut.getArea() << endl;

	// ��ü �����ͷ� �ɹ� ����
	Circle *p;
	p = &donut;
	cout << p->getArea() << endl; // donut�� getArea() ȣ��
	cout << (*p).getArea() << endl; 

	p = &pizza;
	cout << p->getArea() << endl; // pizza�� getArea() ȣ��
	cout << (*p).getArea() << endl;

}