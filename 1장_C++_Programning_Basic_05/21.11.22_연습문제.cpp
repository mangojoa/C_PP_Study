#include <iostream>
#include <string.h>
#include <cstring>

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

	/* 실습문제 3번 (정수 비교)
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
	*/

	/* 실습문제 4번
	float a;
	float b;
	float c;
	float d;
	float e;

	cout << "5 개의 실수를 입력하세요 >> ";
	cin >> a >> b >> c >> d >> e;

	if (a<b) {
		cout << "제일 큰 수 = " << b;
	} else if (b<c) {
		cout << "제일 큰 수 = " << c;
	} else if (c<d) {
		cout << "제일 큰 수 = " << d;
	} else if (d<e) {
		cout << "제일 큰 수 = " << e;
	} else if (e<a) {
		cout << "제일 큰 수 = " << a;
	}
	*/

	/* 실습문제 5번
	char a[100];
	int cnt = 0;

	cout << "문자들을 입력하라(100개 미만) >> ";

	cin.getline(a, 100, '\n');

	for (int m = 0; m < 101; m++) {
		if (a[m] == 'x') {
			cnt++;
		}
	}

	cout << "X의 갯수는 " << cnt << "개 입니다.";
	*/

	/* 실습문제 6번
	char a;
	cout << "암호를 입력하세요 >> ";
	cin >> a;

	char b;
	cout << "암호를 다시 한 번 입력하세요 >> ";
	cin >> b;

	if (a != b) {
		cout << "암호가 다릅니다.";
	} else if (a == b){
		cout << "암호가 일치합니다.";
	}
	*/

	/* 실습문제 7번
	char a[20];

	while (true) {
		cout << "종료하고 싶다면 yes를 입력하세요 >> ";
		cin.getline(a, 20, '\n');

		if (strcmp(a, "yes")) {
			cout << "종료합니다….";
			break;
		}
	}
	*/

	/* 실습문제 8번
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요 >> ";

	char name[100];
	char max[100];
	int max_cnt = 0;

	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << "\n";
	}

	cout << "가장 긴 이름은 " << name << '\n';
	*/

	/* 실습문제 9번
	char name[20];
	cout << "이름은 >> ";
	cin.getline(name, 20, '\n');

	char address[100];
	cout << "주소는 >> ";
	cin.getline(address, 100, '\n');

	int age;
	cout << "나이는 >>";
	cin >> age;

	cout << name << ' ' << address << ' ' << age;
	*/

	//* 실습문제 10번
	char string[100];
	cout << "문자열 입력 >> ";
	cin >> string;

	for (int n = 0; n < 5; n++) {
		for (int m = 0; m <= n; m++) {
			cout << string[m];
		}
		cout << '\n';
	}
}