#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다. >> " << endl;
	getline(cin, s, '&');
	cin.ignore(); // '&' 뒤에 따라오는 <Enter> 키를 제거하기 위한 함수
	// 사실은 cin.ignore(); cin의 구분자 다음의 조작을 제거하는 함수 

	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n');
	cout << "replace: ";
	getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		int fIndex = s.find(f, startIndex); // startIndex부터 문자열 f 검색
		if (fIndex == -1) break;
		s.replace(fIndex, f.length(), r); // replace => fIndex부터 문자열 f의 길이만큼 문자열 r로 변경
		startIndex = fIndex + r.length();
	}
	cout << s << endl;
}