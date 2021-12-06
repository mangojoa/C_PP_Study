/*
다차원 객체 배열

C++ 에서는 2차원, 3차원 등 다차원 객체 배열을 만들 수 있다.
Circle circle[3][3]; // 3행 3열의 3차원 객체 배열

이런 방식으로 배열을 초기화 할 수 있다. (기존 배열의 초기화 방식과 동일하다고 보면 된다.)
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
			cout << "Circle [" << i << "," << j << "]의 면적은";
			cout << circles[i][j].getArea() << endl;
		}
 }