/* [22.01.06] 함수 중복의 모호성
중복된 함수에 대한 호출이 모호(ambiguous)해지는 경우 발생한다. 이 경우 컴파일러는 오루를 발생시키므로
모호하지 않게 함수를 중복 작성해야 한다.

1. 형 변환으로 인한 모호성
2. 참조 매개 변수로 인한 모호성
3. 디폴트 매개 변수로 인한 모호성
*/

/* 3. 디폴트 매개 변수로 인한 모호성
디폴트 매개 변수를 가진 함수가 보통 매개 변수를 가진 함수와 중복 작성될 때,
모호성이 존재할 수 있다. 다음의 중복된 함수가 있을 때

void msg(int id) {
void msg(int id, String s = "") {

다음의 함수 호출은 앞의 중복된 두 msg() 함수 중 어떤 함수를 호출해도 무관하므로
컴파일 오류가 발생한다.
*/

#include <iostream>
#include <string>
using namespace std;

void msg(int id) {
	cout << id << endl;
}

void msg(int id, string s = "") {
	cout << id << ":" << s << endl;
}

int main() {
	msg(5, "Good Morning");
	msg(6); // 함수 호출 모호; 컴파일 오류
}
