#include <iostream>
#include <string>

using namespace std;

int main() {

	/* �������� 19��
	int age = 20;

	const char* pDept = "�����а�";
	cout << "���� : " << age << endl;
	cout << "�а� : " << pDept << endl;
	*/

	/* �������� 20�� 
	for (int a = 0; a < 4; a++) {
		for (int b = 0; b <= a; b++) cout << "*";
		cout << "\n";
	}
	*/

	/* �ǽ����� 1�� (1 ~ 100 ���� 10���� ���)
	for (int a = 0; a < 91; a+=10) {
		for (int b = 1; b < 11; b++) {
			cout << a + b << "\t";
		}
		cout << '\n';
	}
	*/
	
	/* �ǽ����� 2�� (2�� ~ 9�ܱ��� ���)
	for (int a = 1; a < 10; a++) {
		for (int b = 1; b < 10; b++) {
			cout << a << "x" << b << "=" << a * b << "\t";
		}
		cout << '\n';
	}
	*/

	//* �ǽ����� 3�� (���� ��)
	int a; 
	int b;
	cout << "�� ���� �Է��ϼ��� >> ";
	cin >> a >> b;
	if (a < b) {
		cout << "ū �� = " << b;
	}
	else {
		cout << "ū �� = " << a;
	}
}