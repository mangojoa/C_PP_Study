/* [22.02.22] 동적 바인딩
동적 바인딩 => 오버라이딩된 함수가 무조건 호출
가상 함수를 호출하는 코드를 컴파일 할 때, 컴파일러는 바인딩을 실행 시간에 결정하도록 미루어둔다.
나중에 가상 함수가 호출되면, 실행 중에 객체 내에 오버라이딩된 가상 함수를 동적으로 찾아 호출한다.
이 과정을 [동적 바인딩] 이라고 한다.
오버라이딩은 파생클래스에서 재정의한 가상 함수의 호출을 보장받는 선언이다.

동적 바인딩이 발생하는 구체적 경우
기본 클래스의 객체에 대해서는 가상 함수가 호출된다고 하더라도 동적 바인딩은 일어나지 않는다.
객체 내에 오버라이딩된 가상 함수가 없기 때문이다.
동적 비인딩은 파생 클래스의 객체에 대해, 기본 클래스의 포인터로 가상 함수가 호출될 때 일어난다.

	1. 기본 클래스 내의 맴버함수가 가상함수 호출
	2. 파생 클래스 내의 맴버함수가 가상함수 호출
	3. main()과 같은 외부함수에서 기본 클래스의 포인터로 가상 함수 호출
	4. 다른 클래스에서 가상함수 호출

가상 함수를 호출하면, 무조건 동적 바인딩을 통해 파생 클래스에 오버라이딩된 가상 함수가 실행된다.

동적 바인딩 사례
*/

#include <iostream>
using namespace std;

class Shape {
public:
	void paint() {
		draw();
	}
	virtual void draw() {
		cout << "Shape::draw() called" << endl;
	}
};

class Circle : public Shape {
public:
	virtual void draw() {
		cout << "Circle::draw() called" << endl;
	}
};

int main() {
	Shape* pShape = new Shape();
	pShape->paint(); // paint()는 Circle의 draw() 함수를 호출한다.
	delete pShape;
	/* 
	이는 Shape을 상속받고 draw()를 오버라이딩한 Circle 클래스가 있다.
	다음과 같이 Circle 객체를 생성하고 Shape 타입의 포인터로 paint()를 호출하면 ?

	실행 결과 paint() 함수는 pShape이 가리키는 객체 속에 오버라이딩한 draw()가 있는 것을 발견하고,
	동적 바인딩을 통해 Circle의 draw()를 호출한다. 
	이처럼 기본 클래스에서 자신의 맴버를 호출하더라도 그것이 가상 함수이면 역시 동적 바인딩이 발생한다.
		

	C++11 에서 추가된 override와 final 지시어

override 지시어 

class Shape {
public:
	void paint() {
		draw();
	}
	virtual void draw() {
		cout << "Shape::draw() called" << endl;
	}
};

class Circle : public Shape {
public:
	virtual void drow() {
		cout << "Circle::draw() called" << endl;
	}
};

Circle c;
c.drow(); <= 이렇게 하면 Shape 클래스의 draw()를 호출한다. 
이렇게 되면 자신이 코드를 잘못 작성한지 모르기 때문에 이에 대한 방안으로 override가 있다. 

override 는 컴파일러에게 오버라이딩을 확안하도록 지시하는 것으로, 
파생 클래스의 오버라이딩 하려는 가상 함수의 원형 바로 뒤에 작성한다.

class Circle : public Shape {
public:
	virtual void drow() override <= 이런식으로 작성해주면 컴파일시 오류를 발생시키며 잘못 작성한줄 알게 된다. {
		cout << "Circle::draw() called" << endl;
	}
};

final 지시어

final 지시어를 사용하면 파생 클래스에서 오버라이딩을 할 수 없게 하거나, 클래스의 상속 자체를 금지할 수 있다. 
final 지시어를 사용하는 두 가지 경우 

1. 다음과 같이 final 지시어를 가상 함수의 원형 바로 뒤에 작성하면 
	파생클래스는 이 가상 함수를 오버라이딩 할 수 없다.

class Shape {
public:
	void paint() {
		draw();
	}
	virtual void draw() final; // draw()의 오버라이딩 금지 선언 
};

class Circle : public Shape {
public:
	virtual void draw() // 오버라이딩 금지로 인한 컴파일 오류가 발생 
};


2. 클래스 이름 바로 뒤에 final을 작성하면 다른 클래스는 이 클래스를 상속 받을 수 없다. 
class Shape final { ... }; <= 상속금지 선언

class Circle : public Shape { ... }; <= 상속금지 선언으로 인한 컴파일 오류
	*/
}