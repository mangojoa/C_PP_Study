/* [22.02.06] protected ���� ����
�⺻ Ŭ������ protected�� ������ �ɹ��� �Ļ� Ŭ�������� ������ ����ϰ� 
�ٸ� Ŭ������ �ܺ� �Լ����� ������ �� ������ ��������.
*/

#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y; // ���� (x, y) ��ǥ��
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point Ŭ������ showPoint() ȣ��
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color) // [1]
	/* �ڵ忡�� ������ ������ �߻����� �ʴ´�. Point Ŭ������ x,y�� protected �ɹ��̹Ƿ� �Ļ� Ŭ������ ColorPoint���� ������ �����ϱ� ���� */
		return true;
	else
		return false;
}

int main() {
	Point p; // �⺻ Ŭ������ ��ü ����
	p.set(2, 3); // [2]
	/* 2�� �ڵ� ���� set() �Լ��� Point�� public �ɹ��̹Ƿ� ������ ������ �߻����� �ʴ´�. */


	p.x = 5; // [3]
	p.y = 5; // [4]
	p.showPoint(); 

	ColorPoint cp; // �Ļ� Ŭ������ ��ü ����
	cp.x = 10; // [5]
	cp.y = 10; // [6]
	/* 3~6�� �ڵ忡���� protected �ɹ��� ����� x, y�� �����ϱ� ������ ������ ������ �߻��Ѵ�. */

	cp.set(3, 4);
	cp.setColor("Red");

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Red");
	cout << ((cp.equals(cp2)) ? "true" : "false"); // [7] 
	/* 7�� �ڵ忡���� ������ ������ �߻����� �ʴ´�. */

}