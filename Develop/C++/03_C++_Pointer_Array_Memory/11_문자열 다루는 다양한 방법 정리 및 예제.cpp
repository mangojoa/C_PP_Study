/*
문자열 다루기 
문자열 치환 
string a = "C++", b = "Java";
a = b; // a는 "Java"로 b를 복사한 문자열을 가진다.
문자열 비교 
compare() 함수를 이용한다. 이 함수는 두 만자열이 같으면 0,
str보다 사전 순으로 앞에 오면 음수, 뒤에 오면 양수를 리턴한다. 
string name = "Kitea";
string alias = "Kito";
int res = name.compare(alias); // name 과 alias를 비교한다.
if (res = 0) cout << "두 문자열은 같다"; // name = alias
else if (res < 0) cout << name << "<" << alias << endl; // name 이 앞에 온다.
else cout << name << " < " << alias << endl; // name이 뒤에 온다.
문자열 연결 
append() 함수를 이용한다. 이 함수는 기존 문자열에서 뒤에 추가하는 방식이다. 
string a("I");
a.append(" Love C++"); => a = "I Love C++"
기존 문자열 변수를 '+', '+=' 로 쉽게 정의 할 수도 있다.
문자열 삽입
string 클래스는 문자열에 새로운 문자열이나 문자의 삽입 삭제가 가능하며, 문자열의 일부분을 
다른 무자들로 변경할 수 있다. insert() 함수를 이용하여 a의 인덱스 2 위치에 "realy" 문자열을 삽입하는 코드이다.
string a("I Love C++");
a.insert(2, "realy"); // 파이썬의 insert() 함수와 같은 개념이라고 보면 된다.
문자열의 길이
문자열에 포함된 문자 개수를 말하며 length(), size()는 문자열의 길이를 리턴한다.
길이와는 달리 string 객체의 내부 메모리 용량을 리턴하는 capacity()도 있다.
string a("I study C++");
int length = a.length();
int size = a.size();
int capacity = a.capacity();
서브스트링
substr() 함수를 사용하면 문자열에서 일부분을 발취한 문자열(서브 스트링)을 얻을 수 있다.
string b = "I Love C++";
string c = b.substr(2,4); // index 2 ~ 4 까지를 c 에 리턴
string d = b.substr(2); // index 2 ~ 끝까지 문자열 리턴
문자열 검색
문자열 내에 특정 문자열이 존재하는지 검색하는 기능은 많은 응용에서 사용된다.
find()는 문자열에서 특정 문자나 문자열을 발견하면 첫 번째 인덱스를 리턴한다.
발견하지 못하면 -1을 리턴한다.
string e = "I Love Love C++";
int index = e.find("Love"); 인덱스 2 리턴
index = e.find("Love", index+1); 인덱스 3번부터 "Love" 탐색, 인덱스 7 리턴
index = e.find("C#"); // C#이 존재하지 않기에 -1 리턴
index = e.find("v", 7); // 인덱스 7번부터 "v"를 탐색, 인덱스 9 리턴
문자열의 각 문자 다루기
at() 함수와 [] 연산자는 둘 다 문자열의 트정 위치에 있는 문자를 리턴한다.
at()과 달리 [] 연산자를 이용하면 특정 문자를 다른 문자로 수정할 수 있다. 
string f("I Love C++");
char ch1 = f.at(7); // 문자열 f의 인덱스 7에 있는 문자 리턴. ch1 = 'C'
char ch2 = f.[7]; // f.at(7)과 동일한 표현, ch2 = 'C'
f[7] = "D" // f = "I Love D++"
문자열의 숫자 변환, stoi()
C++11 표준부터 문자열을 숫자로 변환하는 전역함수 stoi()를 추가하였다. 
string year = "2014";
int n = stoi(year); // n은 정수 2014 값을 가진다.
문자 다루기
string은 분자열만 다루지 문자를 다루는 기능은 없다. 
문자를 다루는 함수는 <locale> 헤더 파일에 존재한다. 
<locale> 헤더 파일에 있는 toupper(), isdigit() 함수를 사용한다.
string a = "hello";
for ( int i=0; i<a.length(); i++ ) a[i] = toupper(a[i]); // a가 "HELLO"로 변경
cout << a; // "HELLO" 출력
if (isdigit(a[0])) cout << "숫자"; 
else if (isalpha(a.at(0))) cout << "문자"; // a[0]은 문자 'H'
*/

// 문자열을 입력받고 회전시키는 예제
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다. (한글 미지원) >> " << endl;
	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1);
		string sub = s.substr(1, len - 1); // 맨 앞글자를 제외한 나머지를 문자열로 분리
		s = sub + first;
		cout << s << endl;
	}
}