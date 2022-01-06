/* [22.01.06] 함수 중복의 모호성
중복된 함수에 대한 호출이 모호(ambiguous)해지는 경우 발생한다. 이 경우 컴파일러는 오루를 발생시키므로
모호하지 않게 함수를 중복 작성해야 한다.

1. 형 변환으로 인한 모호성
2. 참조 매개 변수로 인한 모호성
3. 디폴트 매개 변수로 인한 모호성
*/

/* 1. 형변환으로 인한 모호성
일반적으로는 함수의 매개 변수 타입과 호출 문의 실인자 타입이 일치하지 않는 경우,
컴파일러는 보이지 않게 형변환을 시도한다. => 컴파일러가 자동으로 함수 호출에 문제가 없게 한다.

하지만 컴파일러는 자동 형 변환을 하는데 규칙이 존재한다.
char -> int -> long -> float -> double 으로 자동 형 변환 하는 규칙을 가지고 있다.

타입이 다르지만 이름이 같은 함수를 작성하면 => 컴파일러는 오류를 발생시킨다.
*/

#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a + a;
}

int main() {
	cout << square(3.0);
	cout << endl;
	// cout << square(3); 중복된 함수에 대한 모호한 호출로서, 컴파일 오류
	// 이를 고칠려면 
	cout << square((float)3);

}