/* [22.01.23] + �����ڸ� �ܺ� ������ �Լ��� �ۼ�
�� ���� ��ü�� ���ϴ� +�����ڸ� �ܺ� �Լ��� �ۼ��غ���!
Power a(3,5), b(4,5), c;
c = a + b; =====> Power operator+ (Power op1, Power op2);
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
	friend Power operator+(Power op1, Power op2); // friend ����
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

Power operator+(Power op1, Power op2) {
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp; // �ӽ� ��ü ����
}

int main() {
	Power a(3, 5), b(4,5), c;
	c = a + b; // ��ü ���ϱ� ����
	a.show();
	b.show();
	c.show();
}