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

/*
this가 필요한 경우 
this가 꼭 필요한가 ?? 
1. 맴버 변수의 이름과 동일한 이름으로 매개 변수이름을 짓고자 하는 경우이다.
Circle(int radius) {
	this->radius = radius;
}	(맴버 변수명) = (매개변수명) 이 같은 현상이 일어날때 자기 자신을 가르키는 용도로 사용된다.
2. 객체의 맴버함수에서 객체 자신의 주소를 리턴 할 때가 있다. 이때 this는 반드시 필요하다.
class sample {
public:
	sample* f() {
	....
		return this; // 현재 객체의 주소 리턴
	}
};
this의 제약조건
this는 클래스의 맴버함수에만 사용할 수 있으며, 맴버가 아닌 함수에서는 this를 사용할 수 없다.
왜냐하면 그 함수들은 어떤 객체에도 속하지 않기 때문이다.
함수라도 정적 맴버 함수(static member function)는 this를 사용할 수 없다.
정적 맴버 함수는 객체가 생성되기 전에 호출될 수 있으며, 정적 맴버 함수가 실행되는 시점에서 '현재 객체'는 존재하지 않을 수 있기 때문이다.
*/