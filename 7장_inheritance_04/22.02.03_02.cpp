/* [22.02.03] �ٿ� ĳ����
�⺻ Ŭ���� �����Ͱ� ����Ű�� ��ü�� �Ļ� Ŭ������ �����ͷ� ����Ű�� ���� ���Ѵ�.
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
	
	/*
	main() �Լ��� ���� ���ο��� �ٿ� ĳ������ �Ͼ�� �ٿ� ĳ������ �� ĳ���ð� �޸� ��������� Ÿ�� ��ȯ�� �����ؾ� �Ѵ�.

	pDer = (ColorPoint*)pBase; // �ٿ� ĳ����, ���� Ÿ�� ��ȯ �ʿ�

	pBase�δ� cp��ü�� �ɹ� �� Point�� public �ɹ��� ������ �� ������, pDer�δ� cp ��ü�� ��� public �ɹ��� ������ �� �ִ�.
	*/
	
	ColorPoint* pDer;
	Point* pBase, po;
	pBase = &cp;
	pDer = (ColorPoint*)pBase; // �ٿ� ĳ����
	// ������ �߸��� �ٿ� ĳ�����̴�. 
	
	pDer->set(3, 4);
	// pBase->showColor("Red"); setColor()�� ColorPoint�� �ɹ��̹Ƿ� ������ ������ ����.
	// ������ ���� �Լ��� ȣ�� �ϱ⿡ ������ �߻��Ѵ�. 
}