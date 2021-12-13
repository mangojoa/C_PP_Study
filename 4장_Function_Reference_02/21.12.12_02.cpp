/*
call by value로 객체 전달

increase(Circle c) 함수를 통해 객체 를 전달하는 과정을 보여준다.
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
	cout << radius << endl;
}

Circle::Circle(int radius) { // 이의 생성자는 실행되지 않는다는 것이다. 
	this->radius = radius;
	cout << radius << endl;
}

Circle::~Circle() {
	cout << radius << endl;
}

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30); // 매개변수 30인 waffle 객체를 생성한다. 
	increase(waffle); // waffle 객체를 increase(Circle c) 함수에 전달한다. 
	cout << waffle.getRadius() << endl;
}

/*
call by value로 객체를 전달할 때 문제점

객체를 전달하면 표면적으로는 나타나지 않는 약간의 문제가 수반된다.
객체가 함수에 전달되며느 함수는 매개 변수 객체가 생성되고, 함수가 종료하면 매개 변수 객체가 소멸된다.
이때 매개 변수 객체의 생성자와 소멸자가 모두 실행되지 않는다. 
C++ 컴파일러의 경우, 매개변수의 생성자는 실행되지 않고 소멸자만 실행되도록 컴파일 한다.

increase()의 매개변수 c가 생성될 때, 생성자 실행 없이 c의 객체 공간에 waffle객체가 그대로 복사된다.
하지만 increase()가 종료될 때 객체 c의 소멸자는 실행된다. 

매개 변수 객체의 생성자가 실행되지 않고 소멸자만 실행되는 비대칭 구조는, 함수 호출 시 원본 객체의 상태를 그대로
매개 변수 객체에 전달되도록 하기 위한 것이지만, 중대한 문제를 동반한다. 

이 문제점을 해결하기 위한 방법으로 복사 생성자를 사용해야 한다. 
*/