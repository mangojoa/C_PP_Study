#include <iostream>
#include <string.h>
#include <cstring>

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

	/* �ǽ����� 3�� (���� ��)
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
	*/

	/* �ǽ����� 4��
	float a;
	float b;
	float c;
	float d;
	float e;

	cout << "5 ���� �Ǽ��� �Է��ϼ��� >> ";
	cin >> a >> b >> c >> d >> e;

	if (a<b) {
		cout << "���� ū �� = " << b;
	} else if (b<c) {
		cout << "���� ū �� = " << c;
	} else if (c<d) {
		cout << "���� ū �� = " << d;
	} else if (d<e) {
		cout << "���� ū �� = " << e;
	} else if (e<a) {
		cout << "���� ū �� = " << a;
	}
	*/

	/* �ǽ����� 5��
	char a[100];
	int cnt = 0;

	cout << "���ڵ��� �Է��϶�(100�� �̸�) >> ";

	cin.getline(a, 100, '\n');

	for (int m = 0; m < 101; m++) {
		if (a[m] == 'x') {
			cnt++;
		}
	}

	cout << "X�� ������ " << cnt << "�� �Դϴ�.";
	*/

	/* �ǽ����� 6��
	char a;
	cout << "��ȣ�� �Է��ϼ��� >> ";
	cin >> a;

	char b;
	cout << "��ȣ�� �ٽ� �� �� �Է��ϼ��� >> ";
	cin >> b;

	if (a != b) {
		cout << "��ȣ�� �ٸ��ϴ�.";
	} else if (a == b){
		cout << "��ȣ�� ��ġ�մϴ�.";
	}
	*/

	/* �ǽ����� 7��
	char a[20];

	while (true) {
		cout << "�����ϰ� �ʹٸ� yes�� �Է��ϼ��� >> ";
		cin.getline(a, 20, '\n');

		if (strcmp(a, "yes")) {
			cout << "�����մϴ١�.";
			break;
		}
	}
	*/

	/* �ǽ����� 8��
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ��� >> ";

	char name[100];
	char max[100];
	int max_cnt = 0;

	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << "\n";
	}

	cout << "���� �� �̸��� " << name << '\n';
	*/

	/* �ǽ����� 9��
	char name[20];
	cout << "�̸��� >> ";
	cin.getline(name, 20, '\n');

	char address[100];
	cout << "�ּҴ� >> ";
	cin.getline(address, 100, '\n');

	int age;
	cout << "���̴� >>";
	cin >> age;

	cout << name << ' ' << address << ' ' << age;
	*/

	//* �ǽ����� 10��
	char string[100];
	cout << "���ڿ� �Է� >> ";
	cin >> string;

	for (int n = 0; n < 5; n++) {
		for (int m = 0; m <= n; m++) {
			cout << string[m];
		}
		cout << '\n';
	}
}