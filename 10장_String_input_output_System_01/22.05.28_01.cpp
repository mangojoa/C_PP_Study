/*
## C++ 입출력 기초

- 스트림 개념
컴퓨터 기술에서 스트림은 연속적인 데이터의 흐름 혹은 데이터를 전송하는 소프트웨어 모듈을 말한다.

프로그렘과 장치를 연결하며 바이트 단위로 입출력한다. 

## C++ 스트림?? 

입력 스트림 => 키보드, 네트워크, 파일 등 입력 창티로부터 입력된 데이터를 순서대로 프로그렘에 전달하는 객체이다. (cin)
출력 스트림 => 프로그렘에서 출력한 데이터를 프린터나 하드디스크, 스크린, 네트워크, 파일 등과 같은 목적 장치로 순서대로 보내는 객체이다. (cout)

cin -> 키보드 장치와 연결된 istream 타입의 표준 입력 스트림 객체
cout -> 스크린 장치와 연결된 ostream 타입의 표준 출력 스트림 객체
cerr 와 clog -> 표준 오류 출력 스트림 객체 
clog는 버퍼를 거치지만, cerr는 버퍼를 거치지 않고 스크린에 오류 메세지 출력

## put() 
put()은 문자 단위로 출력하는 함수이다.
cout.put('a');
cout.put(33);
cout.put('c').put('+').put('+').put(' '); // 이렇게 연결해서도 출력할 수 있다.

## write()
write()는 char배열에 들어있는 문자들을 출력하는 함수이다.
char str[] = "I Love C++ programming";
cout.write(str, 6); // str에 있는 6개의 문자 출력

## flush()
flush()는 출력 버퍼에 있는 문자들을 모두 강제로 출력시키는 함수이다.
cout.put('a');
cout.flush(); // 스트림 버퍼에 있는 문자 'a'를 강제로 출력한다. 
*/

#include <iostream>
using namespace std;

int main() {
	cout.put('C');
	cout.put('+');
	cout.put('+');
	cout.put('\n');

	cout.put('c').put('+').put('+').put(' ');

	char str[] = "I Love C++ programming";
	cout.write(str, 6);
}