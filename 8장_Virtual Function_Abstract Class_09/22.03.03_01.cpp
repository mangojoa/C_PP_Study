/* [22.03.03] 가상 소멸자 
기본 클래스의 소멸자를 만들 때 가상 함수로 작성할 것을 권한다.
그 이유는 파생 클래스의 객체가 기본 클ㄹ래스에 대한 포인터로 delete 되는 상황에서도 
정상적인 소멸이 되도록 하기 위해서이다. 

소멸자가 가상 함수가 아닌 경우 (소멸자를 가상 함수로 선언하지 않은 경우)
class Base {
public:
	~Base();
};

class Derived : public Base {
public:
	~Derived();
};

int main() {
	Base* p = new Derived();
	delete p;
}

이러한 경우라면 p가 Base 타입이므로 컴파일러는 ~Base() 소멸자를 호출하도록 컴파일한다. 
그러므로 ~Base()만 실행되고 ~Derived()가 실행되지 않는다.

----------------------------------------------------------------------------------------

소멸자를 가상 함수로 선언한 경우

class Base {
public:
	virtual ~Base(); <= 소멸자를 가상 함수로 선언
};

class Derived : public Base {
public:
	virtual ~Derived();
};

int main() {
	Base* p = new Derived();
	delete p;
}

소멸자를 가상 함수로 선언하면 ~Base()에 대한 호출은 실행 중에 동적 바인딩에 의해 
~Dervied()에 대한 호출로 변하게 되어 ~Derived()가 실행된다.

한편 파생 클래스의 소멸자는 자신이 실행된 후 기본 클래스의 소멸자를 호출하도록 컴파일되기 때문에,
~Derived() 코드 실행 후 ~Base() 코드가 실행되러 기본 클래스아 파생클래스의 소멸자가 모두
순서대로 실행된다.

정리 => 소멸자를 가상함수로 선언하면, 객체를 시본 클래스의 포인터로 소멸하든, 파생 클래스의 포인터로 소멸하든
파생 클래스와 시본 클래스의 소멸자를 모두 실행하는 정상적인 소명의 과정이 진행된다. 

즉 ! 기본 클래싀의 소멸자를 작성할 때, 고민할 것 없이 바로 virtual로 선언하자

*/

#include <iostream>
using namespace std;

class Base {
public:
	virtual ~Base() { cout << "~Base()" << endl; }
};

class Derived : public Base {
public:
	virtual ~Derived() { cout << "~Derived()" << endl; }
};

int main() {
	Derived* dp = new Derived();
	Base* bp = new Derived();

	delete dp; // Derived 의 포인터로 소멸
	delete bp; // Base 의 포인터로 소멸
} 