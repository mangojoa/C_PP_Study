/*
��ü �迭 ���� �� Ȱ��

1. ��ü �迭 ���� 
Circle cricleArray[3]; // ��ü �迭�� �����ϴ� �ڵ�

cricleArray�� 3���� Circle ��ü�� ���ҷ� ���� �迭�� �����̴�.

2. ��ü �迭 ������ �⺻ �����ڸ� ȣ���Ѵ�.
��ü �迭 ������ ���� �Ű� ���� ���� �⺻ �����ڸ� ȣ���Ѵ�.

Circle cricleArray[3]; 
�̷��� �����ϰ� �ȴٸ�, 3���� Circle ��ü�� �����ǰ�, �� ��ü���� ������ �⺻ �����ڰ� ȣ��ȴ�.

Circle::Circle() { radius = 1; } �̷��� ���̴�.

�ƹ� �����ڵ� ������� ���� ����� �����Ϸ��� �ڵ����� �⺻ �����ڸ� �����ϹǷ� 
��ü �迭 ���� �� ������ ������ �߻����� �ʴ´�. 

����, �Ű� ������ ���� ������ Circle(int r)�� ����Ǿ� �ִ� ����� 
Circle saffle(15); ������ Circle(int r)�� �����ڸ� ȣ���ϹǷ� ������ ������
Circle circleArray[3]; ������ ���, �⺻ ������ Circle()�� ����Ǿ� ���� �ʱ� ������ ������ ������ �߻�

�׷��⿡ ��ü �迭�� �����Ҷ�, �⺻ �����ڰ� �ִ��� Ȯ���ϴ� ���� ���� ������ ����.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3]; // ��ü �迭 ����

	/*
	3. ��ü �迭 ���
	�迭�� �� ���� ��ü�� []�����ڷ� �����Ѵ�. ���� ��ü�� �ɹ� ���̿� ��(.) �����ڸ� ����Ѵ�.
	*/
	circleArray[0].setRadius(10); 
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) // �迭�� �� ���� ��ü�� �ɹ� ����
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;

	Circle *p;
	p = circleArray;
	for (int i = 0; i < 3; i++) { // ��ü �����ͷ� �迭 ����
		
		cout << "Circle " << "�� ������ " << p->getArea() << endl;
		
		cout << "Circle " << "�� ������ " << (*p).getArea() << endl;

		cout << "Circle " << "�� ������ " << p[i].getArea() << endl;

		cout << "Circle " << "�� ������ " << (*p++).getArea() << endl;

		// circleArray�� �����ͷ� ���
		cout << "Circle " << "�� ������ " << (circleArray+i)->getArea() << endl;

		// ������ p�� ���� ���� �̿�
		cout << "Circle " << "�� ������ " << (p+i)->getArea() << endl;
		p++; // p�� �������� ���� ���Ҹ� ����Ŵ
	}
}