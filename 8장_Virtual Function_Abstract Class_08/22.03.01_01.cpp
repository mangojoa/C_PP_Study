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