/* [22.01.16] ���� ++ ������ �ߺ�
���� �����ڿ� ���� �����ڸ� �����ϱ� ���� ���� ������ �Լ��� �Ű������� �������� ����ȴ�.
	Power operator++();
	Power operator++(int x);
	���� ������ �Լ����� �Ű����� x���� �ǹ� ���� ���� ���޵ǹǷ� ����

������ ����
	Power a(3,5), b;
	b = a++; // a++ = b; �� ������ �ʴ´�. 
				C++������ a++�� 1-value�� �� �� ������ �����

	a++�� ��ü a�� kick�� punch�� 1�� ������Ű����, ���� ������ ��ü a�� �����ϴ� ������ �����Ѵ�.
	a++�� 1-value�� �� �� �����Ƿ� ++�� ������ �����ؼ��� �ȵȴ�.

������ �Լ� ����
	a . ++ (������ ����);

������ �Լ� ����
	Power Power::operator++(int x) {
		Power tmp = *this; // ���� ���� ���� ���� ����
		kick++;
		punch++;
		return tmp; // ���� ������ ��ü (��ü a) ����
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
	Power operator++(int x); // ���� ++ ������ �Լ� ����
};

void Power::show() {
	cout << "kick = " << kick << " ," << "punch = " << punch << endl;
}

Power Power::operator++(int x) {
	Power tmp = *this; // ���� ���� ��ü ���¸� ����
	kick++;
	punch++;
	return tmp; // ���� ���� ��ü ���� ����
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++;
	a.show();
	b.show();
}