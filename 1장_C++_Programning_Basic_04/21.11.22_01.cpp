#include <iostream>
#include <string>

using namespace std;
/*
 C++ 문자열

string 클래스 : 문자열을 객체로 다루는 방법 / 권장하는 방법

#include <iostream>
#include <string> <- include 를 통해 <string> 을 추가해야 한다. 

문자열의 크기에 제약이 없기 때문에 string 클래스를 더 선호한다. 
*/
int main() {

	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song << "를 부른 가수는";
	cout << "(hint : 첫 글자는 " << elvis[0] << ") ?";

	getline(cin, singer); // 문자열 입력
	if (singer == elvis) {
		cout << "좀 치는데 ...?";
	}
	else {
		cout << "근본을 모르네 ... " << elvis << "잖아 이 사람아.." << endl;
	}

}