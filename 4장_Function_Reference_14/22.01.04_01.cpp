/*
������ ���� ���� 
�������� ���� ������ ���� ���� 3�����μ�, �����Ϸ��� ���� �����ڸ� �ڵ����� ȣ���ϴ� ����̴�.

1. ��ü�� �ʱ�ȭ �Ͽ� ��ü�� ������ ��
son ��ü�� ������ �� father ��ü�� �ʱ�ȭ �ϵ��� �ϴ� ����
Person son = father; // ���� ������ �ڵ� ȣ��

�����Ϸ��� �� ������ ������ ���� ��ȯ�Ͽ� ���� �����ڸ� ȣ��
Person son(father); // ġȯ���� ȥ������ ����.

2. ���� ���� ȣ��� ��ü�� ���޵� ��
���� ���� ȣ��� ��ü�� ���޵Ǹ� �Լ��� �Ű� ���� ��ü�� ������ �� ���� �����ڰ� �ڵ����� ȣ��ȴ�. 

coid f(Person person) { // �Ű� ���� person�� ������ �� ���� ������ ȣ��
	.........
}
Person father(1, 'Kotae'); 
f(father); // ���� ���� ȣ��� father ��ü ����

�Լ� f()�� ȣ��Ǿ� �Ű� ���� person�� ������ ��, 
������ ������ ������� ���� �����ڰ� ȣ��ǵ��� ������ �ȴ�.
Person person(father); // ���� ������ ȣ�� 

������ ���� ���� ȣ��� �Ű� ���� ��ü�� ������ ��, �����ڰ� ������� �ʴ´ٰ� �Ͽ���. 
������ ��� ���� �����ڰ� ����ȴ�.
�׸��� ���� �����ڰ� �������� ���� ���, �����Ϸ��� ������ ����Ʈ �����ڰ� ����ȴ�.

3. �Լ��� ��ü�� ������ ��
�Լ��� ��ü�� ������ ��, return ���� ���� ��ü�� ���纻�� �����Ͽ� ȣ���� ������ �����Ѵ�. 

Person g() {
	Person mother(2, "Jane");
	return mother; // mother�� ���纻�� �����Ͽ� ���纻 ���� // �纻�� ������� �� ���� ������ ȣ��
}

g(); <- ���纻�� ����� ���� �ȴ�. 
*/

#include <iostream>
using namespace std;

class Person { // Person Ŭ���� ���� 
	char* name;
	int id;
public:
	Person(int id, const char* name); // ������
	Person(const Person& person); // ���� ������
	~Person(); // �Ҹ���
	void changeName(const char* name);
	void show() { cout << id << "," << name << endl; }
};

void f(Person person) {
	person.changeName("dummy"); // 2��
}

Person g() {
	Person mother(2, "Jane");
	return mother; // 3��
}

int main() {
	Person father(1, "Kitea");
	Person son = father; // 1��
	f(father);
	g();
}