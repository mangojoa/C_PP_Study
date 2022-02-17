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