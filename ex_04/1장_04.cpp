#include <iostream>
using namespace std;

int main() {
	double num[5], max=0;

	cout << "5 ���� �Ǽ��� �Է��϶� >> ";

	for (int a = 0; a < 5; a++) {
		cin >> num[a];

		num[a] > max ? max = num[a] : max;
	}

	cout << "���� ū �� = " << max;
}