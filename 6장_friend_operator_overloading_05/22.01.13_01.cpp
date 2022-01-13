/* [22.01.13] + ������ �ߺ� 
������ ����
	�� ���� Power ��ü�� ���ϴ� + �����ڸ� ����� ���� �켱 +�� �ǹ̸� �����ؾ� �Ѵ�.
	Power a(3,5), b(4,5), c;

	a�� b�� ��ġ�� + �����ڴ� ������ ���� ���ȴ�.
	
������ �Լ� ����
	C++�� �⺻ ���ϱ�(+) ���꿡���� �ǿ����ڿ� �� �̿��� ���� �� �� ���� ������,
	�����Ϸ��� a + b�� ������ C++�� �⺻ ���ϱ�� ó���� �� ������ �Ǵ��Ѵ�. 
	�׸��� Power Ŭ�������� Power ��ü�� ���ϴ� + ������ �Լ��� ���� ����Ǿ� �ִ��� ã�´�.

	a . + ( b );

	Power ��ü a�� �ɹ� �Լ� operator+()�� ȣ���Ͽ�, b�� �Ű� ������ �Ѱ��ִ� �Լ� ȣ���̴�.
	�츮�� �� ȣ���� ������ �� �ֵ��� ������ ���� operator+() �Լ��� Power Ŭ������ �ɹ� �Լ��� �����Ѵ�. 

	class Power {
		Power operator+ (Power op2); // + ������ �Լ� ����
	};

������ �Լ� ����
	+ ������ Power ��ü�� kick �ɹ��� punch �ɹ��� ���� ���ϴ� ���̹Ƿ�
	Power Power::operator+(Power op2) {
		Power tmp;
		tmp.kick = this->kick + op2.kick;
		tmp.punch = this->punch + op2.punch;
		return tmp;
	}

	���⼭, this�� Power ��ü a �ڽſ� ���� �������̸� op2�� ��ü Power ��ü b�� ���޹��� �Ű� �����̹Ƿ�,
	this->kick + op2.kick;�� a�� kick�� b�� kick�� ���ϴ� ���̴�. 
	�� ������ �Լ��� ���� ��� tmp ��ü�� �����Ѵ�.
*/

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator+ (Power op2); // Power& op2 ������ �Լ� ����
};

void Power::show() {
	cout << "kick = " << kick << "," << "punch = " << punch << endl;
}

Power Power::operator+(Power op2) {
	Power tmp; // �ӽ� ��ü ���� 
	tmp.kick = this->kick + op2.kick; // kick ���ϱ�
	tmp.punch = this->punch + op2.punch; // punch ���ϱ�
	return tmp; // ���� ��� ����
}

int main() {
	Power a(3, 5), b(4, 9), c;
	c = a + b; // �Ŀ� ��ü + ����
	a.show();
	b.show();
	c.show();

}