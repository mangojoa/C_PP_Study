#include <iostream>
#include <string>
using namespace std;

int main() {
	string exitcmd;

	while (true) {
		cout << "�� ���α׷��� ���� �ʹٸ� '���� �����̴�' �� ��� >> ";

		getline(cin, exitcmd);

		if (exitcmd == "���� �����̴�") {
			cout << "�̰� �ۼ��ع����� .... ��..�� ..... �˴ϴ�......(����)";
			break;
		}
	}
}