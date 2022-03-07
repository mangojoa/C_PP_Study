/* [22.03.03] ���� �Ҹ��� 
�⺻ Ŭ������ �Ҹ��ڸ� ���� �� ���� �Լ��� �ۼ��� ���� ���Ѵ�.
�� ������ �Ļ� Ŭ������ ��ü�� �⺻ Ŭ�������� ���� �����ͷ� delete �Ǵ� ��Ȳ������ 
�������� �Ҹ��� �ǵ��� �ϱ� ���ؼ��̴�. 

�Ҹ��ڰ� ���� �Լ��� �ƴ� ��� (�Ҹ��ڸ� ���� �Լ��� �������� ���� ���)
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

�̷��� ����� p�� Base Ÿ���̹Ƿ� �����Ϸ��� ~Base() �Ҹ��ڸ� ȣ���ϵ��� �������Ѵ�. 
�׷��Ƿ� ~Base()�� ����ǰ� ~Derived()�� ������� �ʴ´�.

----------------------------------------------------------------------------------------

�Ҹ��ڸ� ���� �Լ��� ������ ���

class Base {
public:
	virtual ~Base(); <= �Ҹ��ڸ� ���� �Լ��� ����
};

class Derived : public Base {
public:
	virtual ~Derived();
};

int main() {
	Base* p = new Derived();
	delete p;
}

�Ҹ��ڸ� ���� �Լ��� �����ϸ� ~Base()�� ���� ȣ���� ���� �߿� ���� ���ε��� ���� 
~Dervied()�� ���� ȣ��� ���ϰ� �Ǿ� ~Derived()�� ����ȴ�.

���� �Ļ� Ŭ������ �Ҹ��ڴ� �ڽ��� ����� �� �⺻ Ŭ������ �Ҹ��ڸ� ȣ���ϵ��� �����ϵǱ� ������,
~Derived() �ڵ� ���� �� ~Base() �ڵ尡 ����Ƿ� �⺻ Ŭ������ �Ļ�Ŭ������ �Ҹ��ڰ� ���
������� ����ȴ�.

���� => �Ҹ��ڸ� �����Լ��� �����ϸ�, ��ü�� �ú� Ŭ������ �����ͷ� �Ҹ��ϵ�, �Ļ� Ŭ������ �����ͷ� �Ҹ��ϵ�
�Ļ� Ŭ������ �ú� Ŭ������ �Ҹ��ڸ� ��� �����ϴ� �������� �Ҹ��� ������ ����ȴ�. 

�� ! �⺻ Ŭ������ �Ҹ��ڸ� �ۼ��� ��, ����� �� ���� �ٷ� virtual�� ��������

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

	delete dp; // Derived �� �����ͷ� �Ҹ�
	delete bp; // Base �� �����ͷ� �Ҹ�
} 