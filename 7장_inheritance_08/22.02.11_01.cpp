/* [22.02.09] protected ��� ���
����� ���� : public, protected, private

����� ���� �⺻ Ŭ������ �ɹ����� �Ļ� Ŭ������ �ɹ��� Ȯ��� ��,
�⺻ Ŭ���� �ɹ��� ���� ������ ��� ���ǿ� ���� �޶�����. 

protected ���
�⺻ Ŭ������ protected, public �ɹ����� ��� protected ���� �������� ����Ǿ� �Ļ� Ŭ������ ��� Ȯ��ȴ�.

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