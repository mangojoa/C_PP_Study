/* [22.06.09] ���� �����
## �����÷���?
C++ ����� ��Ʈ���� 32���� ���� �÷����� �����ϴ� �ɹ� ������ �ΰ�, �̸� �����Ͽ� ���� ������Ѵ�.
���� �÷��״� ��� ����� ��Ʈ������ �������� ���ǹǷ�, iosŬ������ ������ ����� ���ǵǾ� �ִ�. 

�ϳ��� �÷����� �� ��Ʈ�� ǥ���Ǹ� �� ���� ���� ������ ǥ���Ѵ�.
cin �̳� cout�� ����� �� �� ���� ������ ���õ� �÷��� ���� �濩�Ͽ� ���� ������� �����Ѵ�. 

�׷��Ƿ� ���� ������ ������ �����ϸ� ����� ������ ������ �� �ִ�. 

������ �����ϴ� �Լ��� setf()
������ �÷��׸� �����ϴ� �Լ��� unsetf() �̴�. 

long setf(long flags)
flags�� ��Ʈ���� ���� �÷��׷� �����ϰ� ���� �÷��׸� �����Ѵ�.

long unsetf(long flags)
flags�� ������ ��Ʈ ���� ���� ��Ʈ���� ���� �÷��׸� �����ϰ� ���� �÷��׸� �����Ѵ�. 
*/

#include <iostream>
using namespace std;

int main() {
	cout << 30 << endl;

	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
	cout << 30 << endl;

	cout.setf(ios::showbase);
	cout << 30 << endl;

	cout.setf(ios::uppercase);
	cout << 30 << endl;

	cout.setf(ios::dec | ios::showpoint);
	cout << 23.5 << endl;

	cout.setf(ios::scientific);
	cout << 23.5 << endl;

	cout.setf(ios::showpos);
	cout << 23.5 << endl;

}