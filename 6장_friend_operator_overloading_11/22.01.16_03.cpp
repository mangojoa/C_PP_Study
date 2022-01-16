/* [22.01.16] 후위 ++ 연산자 중복
전위 연산자와 후위 연산자를 수분하기 위해 후위 연산자 함수는 매개변수를 가지도록 선언된다.
	Power operator++();
	Power operator++(int x);
	후위 연산자 함수에서 매개변수 x에는 의미 없는 값이 전달되므로 무시

연산자 착안
	Power a(3,5), b;
	b = a++; // a++ = b; 는 허용되지 않는다. 
				C++에서는 a++는 1-value가 될 수 없도록 설계됨

	a++는 객체 a의 kick과 punch를 1씩 증가시키지만, 증가 이전의 객체 a를 리턴하는 것으로 정의한다.
	a++는 1-value가 될 수 없으므로 ++는 참조를 리턴해서는 안된다.

연산자 함수 선언
	a . ++ (임의의 정수);

연산자 함수 구현
	Power Power::operator++(int x) {
		Power tmp = *this; // 증가 이전 개게 상태 저장
		kick++;
		punch++;
		return tmp; // 증가 이전의 객체 (객체 a) 리턴
	}
*/

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power operator++(int x); // 후위 ++ 연산자 함수 선언
};

void Power::show() {
	cout << "kick = " << kick << " ," << "punch = " << punch << endl;
}

Power Power::operator++(int x) {
	Power tmp = *this; // 증가 이전 객체 상태를 저장
	kick++;
	punch++;
	return tmp; // 증가 이전 객체 상태 리턴
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++;
	a.show();
	b.show();
}