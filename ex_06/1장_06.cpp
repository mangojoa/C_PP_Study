#include <iostream>
#include <string>
using namespace std;

int main() {
	string password1, password2;

	cout << "새 암호를 입력하세요 >> ";
	getline(cin, password1);

	cout << "새 암호를 다시 한 번 입력하세요 >> ";
	getline(cin, password2);

	if (password1 == password2) {
		cout << "같습니다.";
	}
	else {
		cout << "다릅니다.";
	}
}