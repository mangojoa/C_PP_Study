/* [22.01.05] �Լ� �ߺ� ����ȭ
����Ʈ �Ű� ������ �ִ� ������ �Լ� �ߺ��� ����ȭ �� �� �ִٴ� ���̴�.
*/

/* ���� �Լ� �� �ߺ��� ����ȭ �غ��� 

void fileLine() {
	for (int i = 0; i < 25; i++)
		cout << '*';
	cout << endl;
}

void fileLine(int n, char c) {
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

*/

#include <iostream>
using namespace std;

void fileLine(int n = 25, char c = '*') {
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main() {
	fileLine();
	fileLine(30, '@');
}