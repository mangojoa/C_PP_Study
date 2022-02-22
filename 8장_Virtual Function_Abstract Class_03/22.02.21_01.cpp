/* [22.02.22] 오버라이딩 목적 
기본 클래스에 가상 함수를 만드는 목적은 파생 클래스들이 자신의 목적에 맞게 가상 함수를 재정의하도록 하는 것이다.
기본 클래스의 가상 함수는 상속받는 파생 클래스에서 구현해야 할 일종의 함수 인터페이스를 제공한다. 
다시 말하면, 가상 함수는 '하나의 인터페이스에 대해 서로 다른 모양의 구현'이라는 
객체 지향 언어의 다형성(paltmarphisim)을 실현하는 도구이다. 
*/

#include <iostream>
using namespace std;

class Shape { 
protected:

	// 가상 함수 선언 / 파생 클래스에서 재정의할 함수에 대한 인터페이스 역할
	virtual void draw() { cout << "draw anything" << endl; }
};

class Circle : public Shape {
protected:

	// 오버라이딩 진행
	virtual void draw() { cout << "Circle draws anything" << endl; }
};

class Rect : public Shape {
protected:
	virtual void draw() { cout << "Rect draws anything" << endl; }
};

class Line : public Shape {
protected:
	virtual void draw() { cout << "Line draws anything" << endl; }
};

void paint(Shape* p) {
	// Shape의 draw()가 호출되지 않고, p가 가리키는 객체 내에 오버라이딩된 draw() 호출
	p->draw();

	// paint(Shape* p) 함수는 p->draw()를 통해 포인터 p가 가리키는 객체에 오버라이딩된 draw() 함수를 호출하도록 작성
	// p->draw()는 p가 가리키는 객체 내의 오버라이딩된 draw() 함수를 호출하기 때문이다.
	// 이것이 바로 오버라이딩을 통한 다형성의 실현이다.
}

void main() {
	paint(new Circle());
	paint(new Rect());
	paint(new Line());
}