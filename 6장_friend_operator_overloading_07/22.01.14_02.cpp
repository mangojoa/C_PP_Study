/* [22.01.14] += ������ �ߺ�
	���� ���� ������������ += �����ڴ� + �����ڿ� �޸� �ణ�� ���Ǹ� ��￩�� �Ѵ�.

������ ����
	Power a(3, 5), b(4, 6);
	a += b; 
	���⼭ += ������ a�� b�� ���� a�� ���ο� �Ŀ��� �����ϴ� ������ �����Ѵ�.

������ �Լ� ����
	+= �������� ���� Ÿ���� �������� �����ؾ� �ұ�? 
	(a += b) += b; 

	�� ������ (a += b) ������ ���� ����Ǿ� b�� a�� ��������.
	�׸��� ������ a�� += b ������ ����ȴ�. ���� ó�� (a += b) ���꿡�� += ������ �Լ��� 
	��ü a�� �����Ѵٸ� ���ϵ� ��ü a�� ���纻�̴�. 
	
	�׷��� �� ������ ����Ǵ� +=b ������ ���� ��ü a�� �ƴ� ���纻�� b�� ���ϰ� �Ǵ� ������ �߻��Ѵ�.
	�� ������ �ذ��ϱ� ���ؼ��� (a += b) ������ ��ü a�� ������ �����ϸ� �ȴ�.
	�׷��Ƿ� += �������� ���� Ÿ���� Power& ���� �ؾ��Ѵ�. 

	a . += ( b );

������ �Լ� �ڵ�
	Power& Power::operator+=(Power op2) {
		kick = kick + op2.kick;
		punch = punch + op2.punch;
		return *this; ���ŵ� Power ��ü a�� �����Ѵٴ� ���� �ָ��ؾ� �Ѵ�.
	}
*/

#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power& operator+=(Power op2); // ������ �Լ� ����
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

Power& Power::operator+=(Power op2) { // += ������ �ɹ� �Լ� ����
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this;
}

int main() {
	Power a(3, 5), b(4, 5), c;

	a.show();
	b.show();

	c = a += b; // operator+=() �ɹ� �Լ� ȣ��

	a.show();
	c.show(); 
}