/* [22.01.16] + ������ �ۼ� �ǽ� : b = a + 2;
�����ڿ� ������ �����ϰ� �׿� ���߾� ������ �Լ��� �����ϰ� �����ϸ� �ȴ�. 
	Power a(3,5), b;
	b = a + 2;

������ ����
	a + 2�� �ǹ̸� a�� kick�� punch ���� ���� 2�� ���� ����� �����ϴ� ������ �����Ѵ�.

������ �Լ� ����
	a. = + (2)
	
	�̸� ���ؼ� Power Ŭ������ operator+(Int) ������ �Լ��� ������ ���� ����
	class Power {
	public:
		Power operator+(int op2);
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
	Power operator+ (int op2);
};

void Power::show() {
	cout << "kick = " << kick << " ," << "punch = " << punch << endl;
}

Power Power::operator+ (int op2) {
	Power tmp;
	tmp.kick = kick + op2;
	tmp.punch = punch + op2;
	return tmp;
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a + 2;
	a.show();
	b.show();
}