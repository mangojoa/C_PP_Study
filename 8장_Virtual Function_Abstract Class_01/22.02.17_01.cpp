/* [22.02.17] 상속 관계에서의 함수 재정의
C++에서는 파생 클래스에 기본 클래스의 맴버 함수와 동일한 이름과 원형으로 함수를 재정의(redefine)하여 사용할 수 있다. 
*/

#include <iostream>
using namespace std;

class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};

void main() {
	Derived d, * pDer;
	pDer = &d; // 객체 d를 가리킨다.
	pDer->f();

	Base* pBase;
	pBase = pDer;
	pBase->f();
}

/*
Base의 맴버 함수 f()와 완전히 동일한 원형으로 맴버 함수 f()를 Derived에 재정의 하였다. 
상속에 있어 기본 클래스의 맴버 함수로 원하는 작업을 할 수 없는 경우, 파생 클래스에서 동일한 원형으로 그 함수를 재정의하여 해결한다.

정리하면, 파생 클래스에서 기본 클래스와 동일한 형식의 함수를 재정의하는 경우,
기본 클래스에 대한 포인터로는 기본 클래스의 함수를 호출하고, 파생 클래스의 포인터로는 파생 클래스에 작성된 함수를 호출한다.


이러한 호출 관계는 컴파일 시에 결정된다.(정적 바인딩)
*/