/*
C++ 에서는 같은 이름의 함수를 여러 개 만들 수 있으며 이것을 함수중복(function overloading)이라고 한다.

함수 중복은 다형성의 한 사례로써
전역 함수와 맴버 함수에 모두 적용되며 상속 관계에 있는 기본 클래스와 파생 클래스 사이에도 허용된다.

중복 함수 조건 
1. 중복된 함수들의 이름이 동일하여야 한다.
2. 중복된 함수들은 매개 변수 타입이나 매개 변수의 개수가 달라야 한다.
3. 함수 중복에 리턴 타입은 고려되지 않는다.

함수 중복의 편리함 
이름을 구분지어 기억할 필요 없이 함수를 잘못 호출하는 실수를 줄일 수 있다.
*/

#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {
	int res = a[0];
	for (int i = 1; i < size; i++)
		if (res < a[i]) res = a[i];
	return res;
}

int main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(2,3) << endl; // int big(int a, int b) 호출
	cout << big(array, 5) << endl; // int big(int a[], int size) 호출
}