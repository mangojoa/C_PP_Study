/* [22.03.01] 오버라이딩과 범위지정 연산자(::) 
오버라이딩에 의해 무시되고 존재감을 상실한 기본 클래스의 가상 함수는 더 이상 실행할 수 없을까?
그런 것은 아니다 .. 

범위 지정 연산자(::)를 이용하여 기본 클래스의 가상 함수를 호출할 수 있다. 

범위 지정 연산자를 이용한 기본 클래스의 가상 함수 호출
(범위 지정 연산자를 이용하여 기본 클래스 Shape의 가상 함수를 정적 바인딩으로 호출하는 사례)
*/

#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--" << endl;
	}
};

class Circle : public Shape {
public:
	int x;
	virtual void draw() {
		Shape::draw(); // 기본 클래스의 draw() 호출 => 정작 바인딩 발생 
		cout << "Circle" << endl; 
	}
};

int main() {
	Circle circle;
	Shape* pShape = &circle;

	pShape->draw(); // 동적 바인딩 발생 => draw()가 virtual이므로 ! 
	pShape->Shape::draw(); // 정적 바인딩 발생, 범위 지정 연산자로 인해
}

/*
두 번째는 경우는 실제 응용게서 많이 활용된다. 

상속은 기본 클래스에 새로운 기능을 추가하는 것이므로, 일반적으로 파생 클래스의 가상 함수를 
작상하는 개발자는 기본 클래스의 가상 함수를 그래도 활용하고 기능을 추가하여 개발한다.
기본 클래스의 가상 함수에 중요한 기능이 들어 있는 파생 클래스에서 다시 작성하는 것이 무리이므로,
기본 클래스의 가상 함수를 호출하여 이용한 후 추가적으로 코딩할 수 밖에 없는 경우도 많다.
*/