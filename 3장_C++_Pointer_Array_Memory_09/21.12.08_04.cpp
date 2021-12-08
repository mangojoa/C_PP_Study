/*
this의 기본개념

this는 객체 자신에 대한 포인터로서 클래스의 맴버 함수 내에서만 사용
this는 객체의 맴버 함수가 호출될 때, 컴파일러에 의해 보이지 않게 전달되는 객체의 대한 주소이다.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { this->radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }

};