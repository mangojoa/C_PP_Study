#include <iostream>
#include <string>
using namespace std;

class Point { // 2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� Point ����
	int x, y; // �� �� (x,y) ��ǥ��
public:
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

class ColorPoint : public Point { // ��� ���� 
	string color; // ���� �� ǥ��
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point�� showPoint() ȣ��
}

int main() {
	Point p; // �⺻ Ŭ���� ��ü ����
	ColorPoint cp; // �Ļ� Ŭ���� ��ü ����


	cp.set(3, 4); // Ŭ���� �ܺο��� �Ļ� Ŭ������ �ɹ� ȣ��
	cp.setColor("Red");

	// �Ļ� Ŭ�������� �⺻ Ŭ���� �ɹ� ����
	// ����� ���� �⺻ Ŭ������ �ɹ��� �ڽ��� �ɹ��� Ȯ���Ѵ�. 
	// �Ļ�Ŭ������ �ɹ����� �⺻ Ŭ������ private �Ź� �ܿ� ��� �ɹ��� ������ �� �ִ�.
	cp.showColorPoint();
}