/* [22.02.09] protected 상속 사례
상속의 종류 : public, protected, private

상속을 통해 기본 클래스의 맴버들이 파생 클래스의 맴버로 확장될 때,
기본 클래스 맴버의 접근 지정은 상속 조건에 따라 달라진다. 

protected 상속
기본 클래스의 protected, public 맴버들은 모두 protected 접근 지정으로 변경되어 파생 클래스에 상속 확장된다.

*/

#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : protected Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;
	x.a = 9;
	x.setA(10);
	x.showA();

	x.b = 10;
	x.setB(9);
	x.showB();
}