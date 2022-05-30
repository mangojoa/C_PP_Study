/* istream의 맴버 함수를 이용한 문자 입력 

istream 클래스도 >> 연산자 외에 다양한 입력 맴버 함수를 가지고 있다. 
>> 연산자는 빈칸, 탭, 뉴라인 등 공백 문자키를 읽을 수 없지만,
istream의 맴버함수를 사용하면 공백 문자를 읽을 수 있다. 

## 문자입력 문자를 입력 받는 get() 함는 다음과 같이 두 종류가 존재한다.
1. int get()
입력 스트림에서 문자를 읽어 리턴, 오류나 EOF를 만나면 -1(EOF) 리턴

2. istream get(char& str)
입력 스트림에서 문자를 읽어 ch에 저장, 현재 입력 스트림 객체(*this)의 참조 리턴, 오류나 EOF를 만나면,
스트림 내부의 오류 플래그(failbit) 세팅

## int get()

int ch;
while ((ch=cin.get()) != EOF) {
	cout.put(ch);
	if (ch != '\n') break;
}

?? 왜 get()의 리턴 타입이 char가 아니고 int인가?
get()은 문자를 리턴하지만, 입력 스트림의 끝을 만나면 EOF를 리턴한다.
EOF는 C++ 표준 헤더 파일에 "#define EOF -1"로 int 타입으로 선언되어 있기 때문이다. 

## istream & get(char& ch)
get(char& ch) 함수는 문자를 읽어 참조 매개 변수 ch에 저장하고 리턴한다. 
이 함수도 역시 (' ', '\n') 공백 문자를 읽어 리턴할 수 있다. 

char ch;
while (true) {
	cin.get(ch);
	if (cin.eof()) break; // EOF 문자 즉 ctrl-z 키가 입력된 경우, 읽기 종료
	cout.put(ch);
	if (ch != '\n') break; // <Enter> 키가 입력된 경우, 읽기 종료
}
*/

#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get()로 <Enter>키까지 입력 받고 출력 >> ";
	int ch;
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n') break;
	}
}

void get2() {
	cout << "cin.get(char& ch)로 <Enter>키까지 입력 받고 출력 >> ";
	char ch;
	while (true) {
		cin.get(ch);
		if (cin.eof()) break; // EOF 문자 즉 ctrl-z 키가 입력된 경우, 읽기 종료
		cout.put(ch);
		if (ch == '\n') break; // <Enter> 키가 입력된 경우, 읽기 종료
	}
}

int main() {
	get1();
	get2();
}