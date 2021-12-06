/*
������ ��ü �迭

C++ ������ 2����, 3���� �� ������ ��ü �迭�� ���� �� �ִ�.
Circle circle[3][3]; // 3�� 3���� 3���� ��ü �迭

�̷� ������� �迭�� �ʱ�ȭ �� �� �ִ�. (���� �迭�� �ʱ�ȭ ��İ� �����ϴٰ� ���� �ȴ�.)
Circle circles[2][3] = { { Circle(1), Circle(2), Circle(3), },
						 { Circle(4), Circle(5), Circle(), } };
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
	Circle circles[2][3] = { { Circle(0), Circle(1), Circle(2), }, { Circle(3), Circle(4), Circle(5) } };

	for (int i =0; i < 2; i++) 
		for (int j = 0; j < 3; j++) {
			cout << "Circle [" << i << "," << j << "]�� ������";
			cout << circles[i][j].getArea() << endl;
		}
 }