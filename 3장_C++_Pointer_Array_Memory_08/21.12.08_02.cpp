/*
��ü �迭�� ���� ���� �� ��ȯ
new�� delete�� �̿��ϸ� ��ü �迭�� ���� �����ϰ� ��ȯ�� �� �ִ�.

��ü �迭�� ���� ������ ������ 
Ŭ�����̸� *�����ͺ��� = new Ŭ���� �̸� [�迭 ũ��];
Circle *pArray = new Circle[3];

��ü �迭�� ���� ������ ���ÿ� �ʱ�ȭ ���
Circle *pArray = new Circle[3] { Circle(1), Circle(2), Circle(3) }; 

��ü �迭�� ���
pArray[0].setRadius(10);
pArray[1].setRadius(20);
pArray[2].setRadius(30);
for (int i = 0; i < 3; i++) 
	cout << pArray[i].getArea(); �迭�� i ��° ��ü�� getArea() �ɹ� �Լ� ȣ��

�����͸� ���
pArray->setRadius(10);
{pArray+1}->setRadius(20);
{pArray+2}->setRadius(30);
for (int i = 0; i < 3; i++)
	cout << {pArray+i}->getArea();

�迭�� ��ȯ�� �Ҹ���
delete [] �����ͺ���;
delete [] pArray;
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
	Circle* pArray = new Circle[3];

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << endl;
	}
	Circle *p = pArray; // ������ p�� �迭�� �ְ� ����
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++; // ���� ������ �ּҷ� ����
	}

	delete[] pArray; // ��ü �迭 ��ȯ
	
}