/* [22.02.18] 가상 함수와 오버라이딩 
가상 함수와 오버라이딩은 상속에 기반을 둔 기술로서 객체지향 언어의 꽃이다.

오버라이딩은 파생 클래스에서 기본 클래스에 작성된 가상 함수를 재작성하여,
기본 클래스에 작성된 가상 함수를 무력화시키고, 객체의 주인 노릇을 하는 것이다.

=> 여기서 중요한 것, 기본 클래스의 포인터를 이용하든 파생 클래스의 포인터를 이용하든 가상 함수를 호출하면,
파생 클래스에 오버라이딩된 함수가 항상 실행된다.

가상함수란 => virtual 키워드로 선언된 맴버 함수이다. 
virtual은 컴파일러에게 자신에 대한 호출 바인딩을 실행 시간까지 미루도록 지시라는 키워드이다.

class Base {
public:
	virtual void f(); // f() 가상 함수
};

파생 클래스에서 기본 클래스의 가상 함수를 재정의하는 것을 특별히 '함수 오버라이딩' 혹은 간단히 '오버라이딩'이라고 부른다.
함구 재정의가 컴파일 시간 다형성 이라면 , 오버라이딩은 실행 시간 다형성을 실현한다. 

기존의 함수 재정의는 Derived a; 기준
void f(); Base 맴버 
void f(); Derived 맴버 

객체 a에는 동등한 호출 기회를 가진 함수 f()가 두 개 존재하는 개념이다.

기존의 오버라이딩 Derived a; 기준
void f(); Base 맴버
void f(); Derived 맴버

객체 b에는 두 개의 함수 f()가 존재하지만, Base의 f()는 존재감을 잃고, 항상 Derived의 f()가 호출됨

변수 오버라이딩 => 오버라이딩은 맴버 함수에만 적용되므로 변수 오버라이딩이란 용어는 없다

C++는 오버라이딩을 적용되면 [동적 바인딩]이 실행되지만 
				   적용되지 않는다면 [정적 바인딩]이 실행된다. 

				   java는 이를 신경쓰지 않는다.

오버라이딩과 가상 함수 호출
*/

#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public: 
	virtual void f() { cout << "Derived::f() called" << endl; }
};

void main() {
	Derived b, * pDer;
	pDer = &b; // 객체 d를 가리킨다.
	pDer->f(); // Derived::f() 호출

	Base* pBase;
	pBase = pDer; // 업 캐스팅, 객체 d를 가리킨다. 
	pBase->f(); // 여기서 동적 바인딩 발생한다. Derived::f() 실행
}
