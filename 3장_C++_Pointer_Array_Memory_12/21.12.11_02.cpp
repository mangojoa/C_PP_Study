#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25 와 같이 덧셈 문자열을 입력하세요 >>" << endl;
	getline(cin, s, '\n'); // 문자열 입력
	int sum = 0;
	int startIndex = 0;
	while (true) {
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) { // '+' 를 찾지 못했다면 실행 ( 사실상 마지막 처리 부분 )
			string part = s.substr(startIndex);
			if (part == "") break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = fIndex - startIndex; // count는 + 이전의 인덱싱 위치 저장
		string part = s.substr(startIndex, count); // + 이전의 인덱싱 값을 저장

		cout << part << endl; // 인덱싱 값을 출력
		sum += stoi(part); // 인덱싱 값을 전부 합산
		startIndex = fIndex + 1; // 새로운 인덱싱 시작점을 설정
	}
	cout << "숫자들의 합 = " << sum;
}