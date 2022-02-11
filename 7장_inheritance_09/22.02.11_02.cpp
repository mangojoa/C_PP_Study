/* [22.02.11] ����� ������ �� ���� ���� ��� */

#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(6);
		showA();
		cout << b;
	}
};

class GrandDerived : private Derived {
	int c;
protected:
	void setAB(int v) {
		setA(2);
		showA();
		setB(6);
	}
};