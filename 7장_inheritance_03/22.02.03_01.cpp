/* [22.02.03] �� �ɽ���
�Ļ� Ŭ������ ��ü�� �⺻ Ŭ������ �����ͷ� ����Ű�� ���� ���Ѵ�. 
�̴� �Ļ� Ŭ������ ��ü�� �⺻ Ŭ������ ��üó�� �ٷ� �� �ְ� �Ѵ�. 
	��, ���� Ŭ���� ��ü�� �⺻ Ŭ������ �ɹ��� �����ϱ⿡ ������ ���̴�. 


*/

#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

class ColorPoint : public Point { 
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();
}

int main() {
	Point p; // �⺻ Ŭ���� ��ü ����
	ColorPoint cp; // �Ļ� Ŭ���� ��ü ����
	ColorPoint* pDer = &cp;
	/*
	�� �ɽ����� �⺻ Ŭ������ �����ͷδ� '�⺻ Ŭ������ �ɹ��� ����'�� �� �ִ�. 
	�� ĳ���� �� ������ ���� ����� Ÿ�� ��ȯ�� �ʿ� ����
	Point* pBase = (Point*)pDer; // (Point*) ������ �����ϴ�.
	*/
	Point* pBase = pDer; // �� �ɽ���

	/*
	�⺻ Ŭ���� point Ÿ���� ������ pBase�� �Ļ� Ŭ������ ColorPoint ��ü�� ����Ų��.
	������ pBase�� Point Ŭ������ �������̹Ƿ�, pBase �����ͷδ� ColorPoint ��ü ���� Point Ŭ���� �ɹ��� ���� �� �� �ִ�.
	�׷��⿡ showColorPoint() �Լ��� Point Ŭ������ �ɹ��� �ƴϹǷ� pBase->showColorPoint()�� ������ �߻��Ѵ�. 
	*/


	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("Red");
	pDer->showColorPoint();
	// pBase->showColorPoint(); �� ������ ������ ����Ų��. 
}