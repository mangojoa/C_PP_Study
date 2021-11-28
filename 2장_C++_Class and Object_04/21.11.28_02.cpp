#include <iostream>
using namespace std;
/*
�����ڿ� �ɹ� ������ �ʱ�ȭ

Ŭ������ �ɹ� �������� �ڵ����� �ʱ�ȭ���� �ʱ� ������ �����ڿ��� �ʱ�ȭ�Ѵ�.

1. ������ �ڵ忡�� �ɹ����� �ʱ�ȭ
���� �ɹ������� �ʱ�ȭ �ϴ� Point Ŭ���� 
class Point {
	int x,y;
public:
	Point();
	Point( int a, int b );
}; 

Point::Point() { x=0; y=0; }
Point::Point(int a, int b) { x=a; y=b; }

2. ������ ���ο� �ʱ갪���� �ʱ�ȭ
Point::Point() : x(0), y(0) { } �ɹ� ���� x, y�� 0���� �ʱ�ȭ

Point::Point( int a, int b ) : x(a), y(b) { } �ɹ� ������ x=a, y=b�� �ʱ�ȭ

3. �ɹ��������� �ʱ�ȭ
Point::Point(int a) : x(a), y(b) { } // �ɹ��������� �ʱ�ȭ

4. Ŭ���� ����ο��� ���� �ʱ�ȭ 
class Point {
	int x=0, y=0; // Ŭ���� ����ο��� x, y�� 0���� ���� �ʱ�ȭ
}
*/

// x,y�� ������ ���ο� �ʱ㰪���� �ʱ�ȭ�ϰ� ���� �����ڸ� �̿��Ͽ� ����

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

Point::Point() : Point(0,0) {}

Point::Point(int a, int b) : x(a), y(b) {}

int main() {
	Point origin; // ���� �����ڸ� ȣ��
	Point target(30, 60); // Ÿ�� �����ڿ� (int a, int b)�� �־� ȣ��
	origin.show(); // ���� �������� show() �Լ��� ȣ��
	target.show(); // Ÿ�� �������� show() �Լ��� ȣ�� 
}


