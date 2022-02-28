/* [22.02.28] C++ 오버라이딩의 특징
오버라이딩 시, 가상 함수의 이름과 매개 변수 타입, 개수 뿐만 아니라 리턴 타입도 일치해야 오버라이딩이 성공한다.


*/

#include <iostream>
using namespace std;

class Base {
public:
	virtual void success();
	virtual void fail();
	virtual void g(int);
};

class Derived : public Base {
public:
	virtual void success(); // 오버라이딩 성공 
	virtual int fail(); // 오버라이딩 실패 => 리턴 타입이 다름
	virtual void g(int, double); // 오버로딩 사례 => 정상 컴파일
};

/* 오버라이딩 시 virtual 지시어 생략 가능 
가상 함수 virtual 속성은 상속되는 성질이 있어서, 파생 클래스에서 virtual 키워드를 생략해도 자동으로 가상 함수가 된다.

class Base {
public:
	virtual void f(); // 가상 함수 
};

class Derived : public Base {
public:
	virtual void f(); // 가상 함수 virtual 생략가능 
}

class GrandDerived : public Derived {
public:
	void f(); // 가상 함수 virtual 생략가능
}
*/