/*
디폴트 매개변수
함수가 호출될 때 매개변수에 값이 넘어오지 않는다면, 미리 정해진 디폴트 값을 박도록 건언된
매개 변수를 디폴트 매개변수(default parameter) 혹은 기본 매개 변수라고 부른다.

디폴트 매개변수 선언
void star(int a=5); // ad의 디폴트 값 5

int a는 디폴트 매개 변수로서 디폴트 값으로 5를 가지도록 선언 되었다.
디폴트 매개 변수를 가진 함수를 호출할 때는 디퐁트 매개 변수에 값을 넘겨주어도 되고 생략해도 된다.
생략하는 경우 자동으로 디폴트 값이 매개 변수에 전달 된다.

star() 함수는 
star(); // 매개 변수 a에 디폴트 값 5 자동 전달 
star(10); // 매개 변수 a에 10 전달

디폴트 매개 변수 사례
void msg(int id, string text = "Hello"); // test의 디폴트 값은 "Hello"

msg() 호출 가능 
msg(10); //  id = 10 text = "Hello" 로 자동 처리
msg(20, "Good Morning"); // id = 20 text = "Good Morning" 으로 처리 

msg() 호출문에서 두 번째 매개 변수가 생략되면 자동으로 "Hello" 가 전달된다
함수 호출 시, 디폴트 매개 변수에 값을 전달하는 것은 선택 사항이지만, 보통 매개 변수에는 
반드시 값을 전달하여야 한다.

디폴트 매개 변수에 관한 제약 조건
디폴트 배개 변수는 모두 '끝 쪽에 몰려 선언 되어야 한다.' 
void msg(int id, string text = "Hello"); 를 보면 string text = "Hello" 디폴트 매개 변수가 끝에 있음을 볼 수 있다.

매개 변수에 값을 정하는 규칙
치폴트 매개 변수를 가지고 있는 함수의 호출문을 컴파일할 때, 컴파일러는 함수 호출문에 나열된 실인자 값들을 
'앞에서부터 순서대로' 함수의 매개 변수에 전달하고 '나머지는 디폴트 값으로 전달한다.' 

디폴트 매개 변수만 가진 함수의 경우
void square(int width = 1, int height = 1);

square() 호출 방법
square();		// square(1, 1);
square(5);		// square(5, 1);
square(3,6);	// square(3, 6); 로 컴파일 한다.

디폴트 매개변수와 보통 매개 변수를 가진 함수의 경우
void g(int a, int b = 0, int c = 0, int d = 0);

g() 호출 방법
g(10);				// g(10, 0, 0, 0);
g(10, 5);			// g(10, 5, 0, 0);
g(10, 5, 20);		// g(10, 5, 20, 0);
g(10, 5, 20, 30);	// g(10, 5, 20, 30);
*/

#include <iostream>
#include <cstring>
using namespace std;

// 원형 선언 (디폴트 매개 변수 선언)
void star(int a = 5);
void msg(int id, string text = "");

// 함수 구현
void star(int a) {
	for (int i = 0; i < a; i++) cout << "*";
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	star();
	star(10);

	msg(10);
	msg(10, "hello");
}