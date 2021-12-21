/*
참조에 의한 호출로 객체 전달 

'값에 의한 호출'로 객체를 매개 변수에 전달할 때의 유의사항
1. 함수 내에서 매개 변수 객체를 변경하여도, 원본 객체를 변셩시키지 않는다.
2. 매개 변수 객체의 생성자가 실행되지 않고 소멸자만 싱행되는 비대칭 구도로 작동한다.

'참조에 의한 호출'은 두사지 사항에 완전히 다르게 작동한다.
1. 참조 매개 변수로 이루어진 모든 연산은 원본 객체에 대한 연산이 된다.
2. 참조 매개 변수는 이름만 생성되므로, 생성자와 소면자는 아예 실행되지 않는다. 
*/

#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius" << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius" << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius" << radius << endl;
}

void increase(Circle& c) { // c는 참조 매개 변수
	int r = c.getRadius(); // c에서 getRadius()를 불러와 radius를 int r 에 담는다.
	c.setRadius(r + 1); // c가 참조하는 원본 객체의 반지름 1 증가
}

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
}