/*
String 클래스 
string은 문자열을 저장하는 버퍼와 함께, 문자열을 다루는 다양하고 유용한 함수와 연산자들을 맴버로 가지고 있으므로
개발자들은 C-스트링보다 쉽게 문자열을 다룰 수 있다.

string 클래스를 사용하기 위해서는 
#include <string>
using namespace std;

string 클래스는 문자열의 크기에 맞추어 스스로 메모리 크기를 조절 하므로 사용하기 매우 편리하다.
*/

/*
string 객체 생성 및 출력

string 객체 생성
다양하게 문자열을 생성할 수 있다. 문자열의 크기에는 제한이 없다.

string str; 빈 문자열을 가진 스트링 객체
string address("광주 산수동 516-5"); 문자열 리터럴로 초기화
string copyaddress(address); address를 복사한 copyAddress 생성

C-스트링(char [] 배열)으로부터 스트링 객체 생성
char text[] = {'L', 'o', 'v', 'e', '\0'}; 
string title(text); 
*/

/*
string 객체의 동적 생성
스트링 객체 역시 new 와 delete 연산자를 이용하여 동적으로 생성하고 반환

string *p = new string("C++"); 스트링 객체 동적 생성
delete p; 스트링 객체 반환
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	string address("광주 산수동 516-5");
	string copyAddress(address); // address의 문자열을 복사한 스트링 객체 생성

	char test[] = { 'L', 'o', 'v', 'e', '\0' };
	string title(test);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}