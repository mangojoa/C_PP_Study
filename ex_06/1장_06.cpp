#include <iostream>
#include <string>
using namespace std;

int main() {
	string password1, password2;

	cout << "�� ��ȣ�� �Է��ϼ��� >> ";
	getline(cin, password1);

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� >> ";
	getline(cin, password2);

	if (password1 == password2) {
		cout << "�����ϴ�.";
	}
	else {
		cout << "�ٸ��ϴ�.";
	}
}