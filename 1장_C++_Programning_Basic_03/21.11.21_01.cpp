#include <iostream>
#include <string.h> // C-스트링을 사용하기 위한 include 라고 보면 된다.

using namespace std;

/*
C++ 문자열

C-스트링 : C 언어에서 문자열을 표현하는 방법
string 클래스 : 문자열을 객체로 다루는 방법 / 권장하는 방법 
*/
int main() {
	// C-스트링 널 문자('\0' or 0)로 끝나는 char 배열을 말한다. 
	char name1[6] = { 'g', 'r', 'e', 'e', 't', '\0' }; // name1은 문자열로 인식한다.
	char name2[5] = { 'g', 'r', 'e', 'e', 't' }; // name2는 문자열이 아닌 배열로 인식한다. 

	/*
	name1은 문자들로 구성된 문자열 리터럴이며 문자열 리터럴을 직접 배열에 저장하여
	다음과 같이 문자열을 만들기도 한다.
	*/

	char name3[6] = "greet"; // 6 자리 중에 마지막이 '0' 이기에 문자열로 인식
	char name4[] = "greet"; // 배열의 크기를 6으로 자동 설정

	/* 예제 2-4
	cout << "이름을 입력하세요 >> ";

	char name[11];
	cin >> name;

	cout << "이름은 " << name << "입니다\n";
	*/

	/* 예제 2-5
	char password[11];

	cout << "프로그램을 종료하려면 암호를 입력하세요 >> " << endl;
	while (true) {
		cout << "입력된 암호 >> ";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else {
			cout << "암호가 틀렸습니다. 확인 후 다시 입력하세요!" << endl;
		}
	}
	*/

	/*
	위의 예제를 보면서 띄어쓰기가 존재한다면 그 전까지만 문자열로 인식하는 문제가 있다.

	이번에는 cin.getline()을 이용하여 공백이 포함된 문자열을 입력해보자
	cin.getline(char buf[], int size, char delimitChar)
	buf : 키보드로부터 읽은 문자열을 저장할 배열
	size : buf[]의 크기
	delimitChar : 문자열 입력 끝을 지정하는 구분 문자
	*/

	// 2-6 예제
	cout << "주소를 입력해주세요 >> ";

	char address[100];

	cin.getline(address, 100, '\n'); // Enter 키가 입력될 때까지 최대 99개의 문자 입력

	cout << "주소는 " << address << " 입니다\n"; // 주소출력

	

}