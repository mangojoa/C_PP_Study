/* [22.02.17] ��� ���迡���� �Լ� ������
C++������ �Ļ� Ŭ������ �⺻ Ŭ������ �ɹ� �Լ��� ������ �̸��� �������� �Լ��� ������(redefine)�Ͽ� ����� �� �ִ�. 
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
	pDer = &d; // ��ü d�� ����Ų��.
	pDer->f();

	Base* pBase;
	pBase = pDer;
	pBase->f();
}