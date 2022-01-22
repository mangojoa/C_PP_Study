/* [22.01.16] ���� ������ �ߺ�
�ǿ����� �ϳ��� ���� �������� ������ �Լ��� Ŭ������ �ɹ� �Լ��� �ۼ��غ���.
���� ������ => �������� ��ġ�� ���� ���� ������ / ���� �����ڷ� ������.

���� ++������ �ߺ�  

������ ���� 
	Power a(2, 5), b;
	b = ++a;
	++a = b; // ++a�� 1-value�� �ɼ� �ִ�.

	++a ���� ��ü a�� ��� �ɹ����� ���� 1�� ������Ų ��, ����� ��ü a�� ������ �����ϴ� ������ �����Ѵ�.

������ �Լ� ���� 
	�����Ϸ��� ++a ���� ������ ���� �����Ͽ� Power Ŭ������ ����� operator++() ������ �Լ��� ȣ���Ѵ�.
	a . ++ ()

������ �����ϴ� ������ �Լ� ����
	operator++() ������ �Լ��� ��������� �ڽ� (*this) �� ���� ������ �����Ѵ�

	Power& Power::operator++() {
		kick++;
		punch++;
		return *this; // ����� ��ü �ڽ�(��ü a)�� ���� ����
	}
*/

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power operator++();
};

void Power::show() {
	cout << "kick = " << kick << " ," << "punch = " << punch << endl;
}

Power Power::operator++() {
	kick++;
	punch++;
	return *this;
}

int main() {
	Power a(4, 5), b;
	a.show();
	b.show();
	b = ++a;
	a.show();
	b.show();
}