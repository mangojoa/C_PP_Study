/*
��ü�� ���� ���� �� ��ȯ
new�� delete�� �̿��Ͽ� ��ü�� �������� �����ϰ� ��ȯ�ϴ� ���

new�� �̿��� ��ü�� ���� ������ ������

new �����ڸ� �̿��Ͽ� ��ü�� ���� �����ϴ� ����
Ŭ�����̸� *�����ͺ��� = new Ŭ�����̸�; => �⺻ ������ ȣ��
Ŭ�����̸� *�����ͺ��� = new Ŭ�����̸�(�����ڿ��� ���� ����Ʈ); => �Ű� ���� �ִ� ������ ȣ��

new�� Ŭ���� ũ���� �޸𸮸� �Ҵ�޾� ��ü�� �����ϸ�, �̶� �����ڸ� ȣ���Ѵ�.

ù ��° ������ ��� �⺻ �����ڰ� ȣ�� 
Circle *p = new Circle(); => �⺻ ������ Circle() ȣ��, p = new Circle(); �� ����

�� ��° ������ ��� �Ű� ������ ���� �����ڰ� ȣ��
Circle *q = new Circle(30); => ������ Circle(30) ȣ��
*/

/*
delete�� �̿��� ��ü ��ȯ�� �Ҹ���
�������� ������ ��ü�� ��ü�� ���� '�����ͺ���'�� �̿��Ͽ� ������ ���� ��ȯ�Ѵ�.

delete �����ͺ���;

Circle *p = new Circle; => ������ Circle() ȣ��, p = new Circle();�� ����
Circle *q = new Circle(30); => ������ Circle(30) ȣ��

Circle ��ü ��ȯ
delete p;
delete q;
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	/* �⺻���� ���� ������ ��ȯ�� ��ȯ
	Circle *p, *q;
	p = new Circle;     // �⺻ ������ ȣ��
	q = new Circle(30); // �Ű����� ������ ȣ��
	cout << p->getArea() << endl << q->getArea() << endl;
	
	// ������ ������ ���� ���� ���ϴ� ������� delete �� �� �ִ�. 
	delete p; 
	delete q;
	*/

	// ����
	int radius;
	while (true) {
		cout << "���� ������ �Է� (�����̸� ����) >> ";
		cin >> radius;
		if (radius < 0) break; // ������ �ԷµǾ� �����Ѵ�.
		Circle* p = new Circle(radius); // ���� ��ü ����
		cout << "���� ������ " << p->getArea() << endl;
		delete p;
	}
}