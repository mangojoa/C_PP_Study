/* [22.02.28] C++ �������̵��� Ư¡
�������̵� ��, ���� �Լ��� �̸��� �Ű� ���� Ÿ��, ���� �Ӹ� �ƴ϶� ���� Ÿ�Ե� ��ġ�ؾ� �������̵��� �����Ѵ�.


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
	virtual void success(); // �������̵� ���� 
	virtual int fail(); // �������̵� ���� => ���� Ÿ���� �ٸ�
	virtual void g(int, double); // �����ε� ��� => ���� ������
};

/* �������̵� �� virtual ���þ� ���� ���� 
���� �Լ� virtual �Ӽ��� ��ӵǴ� ������ �־, �Ļ� Ŭ�������� virtual Ű���带 �����ص� �ڵ����� ���� �Լ��� �ȴ�.

class Base {
public:
	virtual void f(); // ���� �Լ� 
};

class Derived : public Base {
public:
	virtual void f(); // ���� �Լ� virtual �������� 
}

class GrandDerived : public Derived {
public:
	void f(); // ���� �Լ� virtual ��������
}
*/