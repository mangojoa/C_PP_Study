#include <iostream>
#include <string.h>

using namespace std;

int main() {
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요 >> ";
	char name[100];
	char max[100];
	int max_cnt = 0;
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << "\n";
	}
	cout << "가장 긴 이름은 " << name << '\n';
}