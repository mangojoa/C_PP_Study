#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string test;
	char name[100];
	int cnt = 0, max = 0;

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요!" << endl;

	for (int a = 1; a < 6; a++) {
		cin.getline(name, 100, ';');
		cout << a << ' : ' << name << endl;

		if (max < strlen(name)) {
			max = strlen(name);
			cnt = a;
			test = name;
		}
	}

	cout << "가장 긴 이름은 : " << test << '\n';

}