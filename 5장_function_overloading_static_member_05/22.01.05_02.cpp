/* [22.01.05] 함수 중복 간소화
디폴트 매개 변수의 최대 장점은 함수 중복을 간소화 할 수 있다는 점이다.
*/

/* 기존 함수 의 중복을 간소화 해보자 

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