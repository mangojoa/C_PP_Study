#include <iostream>
#include <string>

using namespace std;

int main() {

	/* 연습문제 19번
	int age = 20;

	const char* pDept = "경제학과";
	cout << "나이 : " << age << endl;
	cout << "학과 : " << pDept << endl;
	*/

	/* 연습문제 20번 
	for (int a = 0; a < 4; a++) {
		for (int b = 0; b <= a; b++) cout << "*";
		cout << "\n";
	}
	*/

	/* 실습문제 1번 (1 ~ 100 까지 10개씩 출력)
	for (int a = 0; a < 91; a+=10) {
		for (int b = 1; b < 11; b++) {
			cout << a + b << "\t";
		}
		cout << '\n';
	}
	*/
	
	/* 실습문제 2번 (2단 ~ 9단까지 출력)
	for (int a = 1; a < 10; a++) {
		for (int b = 1; b < 10; b++) {
			cout << a << "x" << b << "=" << a * b << "\t";
		}
		cout << '\n';
	}
	*/

	//* 실습문제 3번 (정수 비교)
	int a; 
	int b;
	cout << "두 수를 입력하세요 >> ";
	cin >> a >> b;
	if (a < b) {
		cout << "큰 수 = " << b;
	}
	else {
		cout << "큰 수 = " << a;
	}
}