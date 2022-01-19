/* [22.01.14] == ������ �ߺ� 
������ ����
	Power a(3, 5), b(3, 6);
	if ( a == b ) cout << "sames two powers";
	else cout << "not sames two powers";

	��ü������ == �����ڴ� �� �ǿ������� kick �� punch�� ���� ������ ture��,
	�ƴϸ� false�� �����ϵ��� �����Ѵ�. �׷��Ƿ� operator==() ������ �Լ��� ���� Ÿ���� bool�̴�.

������ �Լ� ����
	a . == ( b )
	�� ���� Power ��ü a�� operator==() ������ �Լ��� ȣ���ϰ� b�� �Ű� ������ �����.

������ �Լ� �ڵ�
	�� ���� Power��ü�� ����ϴ� operator==() ������ �Լ��� ������ ���� �����Ѵ�.
	bool Power::operator==(Power op2) {
		if (kick == op2.kick && punch == op2.punch) return true;
		else return false;
	} 
	���⼭ kick�� punch�� ��ü a�� �ɹ��̸�, op2.kick�� op2.punch�� ��ü b�� �ɹ����̴�.
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
	bool operator== (Power op2); // == ������ �Լ� ����
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

bool Power::operator==(Power op2) {
	if (kick == op2.kick && punch == op2.punch) return true;
	else return false;
}

int main() {
	Power a(3, 5), b(3, 9);
	a.show();
	b.show();
	if (a == b) cout << "sames two powers" << endl;
	else cout << "not sames two powers" << endl;

}