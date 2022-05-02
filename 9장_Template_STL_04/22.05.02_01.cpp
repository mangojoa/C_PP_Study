/* 두 개의 매개 변수로부터 큰 값 구하기 */

#include <iostream>
using namespace std;

template <class T>
T bigger(T a, T b) { // 두 새의 매개 변수 a, b 를 비교하여 큰 값을 리턴
	if (a > b) return a;
	else return b;
}

int main() {
	int a = 23, b = 21;
	char c = 'a', d = 'b';

	cout << "bigger(20, 21)의 결과값은 >> " << bigger(a, b) << endl;
	cout << "bigger('a', 'b')의 결과값은 >> " << bigger(c, d) << endl;
}