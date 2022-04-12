#include <iostream>
using namespace std;

int main() {
	double num[5], max=0;

	cout << "5 개의 실수를 입력하라 >> ";

	for (int a = 0; a < 5; a++) {
		cin >> num[a];

		num[a] > max ? max = num[a] : max;
	}

	cout << "제일 큰 수 = " << max;
}