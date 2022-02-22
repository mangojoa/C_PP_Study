/* [22.02.22] �������̵� ���� 
�⺻ Ŭ������ ���� �Լ��� ����� ������ �Ļ� Ŭ�������� �ڽ��� ������ �°� ���� �Լ��� �������ϵ��� �ϴ� ���̴�.
�⺻ Ŭ������ ���� �Լ��� ��ӹ޴� �Ļ� Ŭ�������� �����ؾ� �� ������ �Լ� �������̽��� �����Ѵ�. 
�ٽ� ���ϸ�, ���� �Լ��� '�ϳ��� �������̽��� ���� ���� �ٸ� ����� ����'�̶�� 
��ü ���� ����� ������(paltmarphisim)�� �����ϴ� �����̴�. 
*/

#include <iostream>
using namespace std;

class Shape { 
protected:

	// ���� �Լ� ���� / �Ļ� Ŭ�������� �������� �Լ��� ���� �������̽� ����
	virtual void draw() { cout << "draw anything" << endl; }
};

class Circle : public Shape {
protected:

	// �������̵� ����
	virtual void draw() { cout << "Circle draws anything" << endl; }
};

class Rect : public Shape {
protected:
	virtual void draw() { cout << "Rect draws anything" << endl; }
};

class Line : public Shape {
protected:
	virtual void draw() { cout << "Line draws anything" << endl; }
};

void paint(Shape* p) {
	// Shape�� draw()�� ȣ����� �ʰ�, p�� ����Ű�� ��ü ���� �������̵��� draw() ȣ��
	p->draw();

	// paint(Shape* p) �Լ��� p->draw()�� ���� ������ p�� ����Ű�� ��ü�� �������̵��� draw() �Լ��� ȣ���ϵ��� �ۼ�
	// p->draw()�� p�� ����Ű�� ��ü ���� �������̵��� draw() �Լ��� ȣ���ϱ� �����̴�.
	// �̰��� �ٷ� �������̵��� ���� �������� �����̴�.
}

void main() {
	paint(new Circle());
	paint(new Rect());
	paint(new Line());
}