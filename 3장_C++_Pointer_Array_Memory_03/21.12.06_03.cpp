/*
객체 배열 초기화
객체 배열을 생성할 때 생성자를 사용하뎌 원소 객체를 초기화 할 수 있다.

Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

배열을 선언할 때 {} 안에 호출할 생성자를 지정한다.
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
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
	}
}