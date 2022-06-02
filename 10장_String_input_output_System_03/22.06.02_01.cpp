/* 문자열 입력
istream& get(char*s, int n)
입력 스트림으로부터 n-1 개의 문자를 읽어 배열 s에 저장하고 마지막에 '\0' 문자 삽입
입력 중 '\n'을 만나면 '\0'을 삽입하고 리턴

istream& get(char*s, int n) 함수는 배열 끝에 '\0'을 삽입하여 문자열이 되도록 한다.

## 입력 도중 '\n'을 만날 때?!
get()이 입력 도중 <Enter> 키 ('\n' 문자)를 만날 때 주의해야 한다.
입력 스트림에서 '\n' 문자를 만나면 읽기를 중단하고 리턴하여, '\n'이 입력 스트림 버퍼에 남아있다.
만일 이 상태에서 다시 읽기를 하게 되면 입력 스트림에 남아있는 '\n'부터 읽기 시작하여 아무것도 읽지 않고 바로 리턴한다.
이 문제로 프로그램은 무한 루프에 빠질 수도 있다. 문자열을 읽은 후 입력 스트림 버퍼에 남아있는'\n' 문자를 제거하기 위해서는 

cin.get() or cin.ignore(1) // cin 버퍼에서 문자 1개 삭제

이를 통해 무한 루프에 빠질 수 있는 로직에서 벗어날 수 있다.

## 입력 도중 EOF나 오류가 발생할 때
get()은 읽기 도중 EOF(ctrl+z)를 만나거나 오류가 발생하면 읽기를 중단하고 '\0'를 배열에 삽입하고 리턴한다.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char cmd[100];
	cout << "cin.get(char*, int)로 문자열을 읽습니다." << endl;
	while (true) {
		cout << "종료하려면 exit을 입력하세요 >> ";
		cin.get(cmd, 100);
		if (strcmp(cmd, "exit") == 0) {
			cout << "프로그램을 종료합니다";
			return 0;
		}
		else {
			cin.ignore(1); // 버퍼에 남아있는 <Enter> 키 ('\n') 제거
		}
	}
}