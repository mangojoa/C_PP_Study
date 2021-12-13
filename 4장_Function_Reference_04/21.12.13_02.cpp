/*
객체 지환 및 객체 리턴

객체 치환 => 객체의 모든 데이터가 비트 단위로 복사된다. (동인한 클래스 타입에 대해서만 적용)

함수의 객체 리턴 => Circle 클래스의 객체를 리턴하는 getCircle()함수
return 문이 실행되면 tmp의 복사본이 생기고 이 복사본이 getCircle()을 호출한 곳으로 전달된다.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void serRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp; // 객체 tmp를 리턴한다. 
}

int main() {
	Circle c; // 객체가 생성된다. radius로 초기화된다.
	cout << c.getArea() << endl;

	c = getCircle();
	cout << c.getArea() << endl;
}