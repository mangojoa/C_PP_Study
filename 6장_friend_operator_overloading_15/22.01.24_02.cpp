/* [22.01.24] ������ �����ϴ� << ������ �ۼ� �ǽ�

<< �����ڸ� �����鼭 ���� ������ �����غ��� 
Power a(1,2);
a << 3 << 5 << 6;

������ ����
�� ������ ��ü a�� kick �� punch�� ���� 3�� ���ϰ� �ٽ� 5,6�� ���������� ���ϴ� �����̴�.
���� ��� ��ü a�� kick = 15 / punch = 16 �� �ȴ�.

������ �Լ� ����
'a<<3'�� ���� �� ���� '<<5' ������ ��ü a�� ���� ����Ƿ���, 'a<<3'���� ������ << �� ���� �� ��ü a�� ������ �����ؾ� �Ѵ�.
�����Ϸ��� a << 3 ������ ������ ���� �����Ѵ�. 
a . << (3);

�츮�� �̿� ���߾� << ������ �Լ��� ������ ���� Power Ŭ������ �ɹ��� ����

class Power {
public:
	Power& operator << (int n);
};

Power& Power::operator<<(int n) {
	kick += n;
	punch += n;
	return *this; // �� ��ü�� ���� ����
}

���� ������ �������� �ʰ� ������ ���� �����Ѵٸ� 
Power operator << (int n); // ������ �������� ������ ���ӵ� << ������ ���������� �۵����� �ʴ´�.
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
	Power& operator << (int n);
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

Power& Power::operator<<(int n) {
	kick += n;
	punch += n;
	return *this; // �� ��ü�� ���� ����
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
}