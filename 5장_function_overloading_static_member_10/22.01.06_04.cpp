/* [22.01.06] static �ɹ�
static�� ������ �Լ��� �����ֱ�� �������� �����ϴ� ��� �� �ϳ��μ�, static����
����� ������ �Լ��� ���� �ֱ�� ��� ������ ������ ���� Ư¡�� ������.

1. �����ֱ� - ���α׷��� ������ �� �����ǰ� ���α׷��� ������ �� �Ҹ�
2. ������ - ������ �Լ��� ����� ���� ������ ���, ���� Ȥ�� �������� ����

non-static �ɹ��� �� ��ü���� ������ �����ǹǷ� instance �ɹ���� �θ��� 
static �ɹ��� Ŭ������ �ϳ��� ����� ��� ��ü���� �����ϹǷ� class �ɹ���� �θ���. 

class Pweson {
public:
	[non-static �ɹ�]
	�ɹ��� ��ü���� ���� ���� => �ν��Ͻ� �ɹ�
	��ü�� ������ �����Ѵ�. / �������� �ʴ´�.
	int money;
	void addMoney(int money) {
		this->money += money;
	}

	[static �ɹ�]
	�ɹ��� Ŭ���� �� �ϳ� ���� - ��ü ���ΰ� �ƴ� ������ ������ ���� => Ŭ���� �ɹ�
	���α׷��� ������ �����Ѵ�. / ������ Ŭ������ ��� ��ü�鿡 ���� �����ȴ�. 
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};
	// static ���� ���� �Ҵ�, �ݵ�� ���α׷��� ���� ������ ����
int Person::sharedMoney = 10; // sharedMoney�� 10 ���� �ʱ�ȭ

static �ɹ� ��� : ��ü�� �ɹ��� �����ϴ� ���
static �ɹ��� ��ü �̸��̳� ��ü �����͸� �̿��Ͽ� ���� �ɹ��� �����ϰ� �ٷ�� �ȴ�.
��ü.static�ɹ�
��ü������ -> static�ɹ�

Person lee;
lee.sharedMoney = 500;

Person *p;
p = &lee;
p->addShared(200); 

static �ɹ� ��� : Ŭ������� �������� ������(::)�� ����
static �ɹ��� Ŭ���� �� �ϳ��� �����ϹǷ� Ŭ������ �̸����ε� ���� �� �� ������,
Ŭ���� �̸��� static �ɹ� ���̿� ���� ���� ������(::)�� ����Ͽ� static �ɹ��� �����Ѵ�. 
Person::sharedMoney = 200; // Ŭ���������� ����
Person::addShared(200); // Ŭ���������� ����

��ü�̸����� sharedMoney�� addShared() �ɹ��� �����ϴ� �ڵ�� Ŭ������ ������ �� �ִ�. 
lee.sharedMoney = 500;
han.addShared(200);

�׷��� non-static �ɹ��� Ŭ���������� ������ �� ����. 
Person::money = 100;
Person::addMoney(100);
non-static �ɹ��� Ŭ���������� ���� �Ұ��ϴ�

non-static �ɹ��� �˴ٽ��� ��ü�� �̸��̳� �����ͷθ� ���� �����ϴ�.
lee.money = 100;
Person *p = &lee;
p->addMoney(200);
*/

#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};

int main() {
	Person::addShared(40);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 500;
	Person::addShared(100);

	cout << han.money << Person::sharedMoney << endl;
	
}