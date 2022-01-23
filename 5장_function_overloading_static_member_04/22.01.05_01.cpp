// 디폴트 매개 변수를 가진 함수 만들기 연습

#include <iostream>
#include <cstring>
using namespace std;

// 원형 선언 (디폴트 매개 변수 선언)
void f(char c = ' ', int line = 1);

// 함수 구현
void f(char c, int line) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++)
			cout << c;
		cout << endl;
	}
}

int main() {
	f();
	f('&');
	f('@', 5);
}

/* [22.01.05] 포인터 변수의 디폴트 값
포인터 면수를 디폴트 매개 변수로 선언할 때 다름과 같이 디폴트 값을 줄 수 있다.
void f(int *p = NULL); 
void g(int x[] = NULL);
void h(const char *s = "Hello");
*/