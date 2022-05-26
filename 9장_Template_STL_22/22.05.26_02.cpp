/* 캡쳐 리스트와 리턴 타입을 가지는 람다식 만들기 
람다식은, 캡텨 리스트를 이용하여 주변의 non-static 변수들(지역 / 전역 변수)에 대해
값을 복사하여 받거나 참조를 활용할 수 있다. 
*/

#include <iostream>
using namespace std;

int main() {
	double pi = 3.14;

	auto clac = [pi](int r) -> double { return pi * r * r; };

	cout << "면적은 " << clac(3);
}