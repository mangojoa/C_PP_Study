/* [22.01.16] 단항 연산자 중복
피연산자 하나인 단한 연산자의 연산자 함수를 클래스의 맴버 함수로 작성해보자.
단한 연산자 => 연산자의 위치에 따라 정위 연산자 / 후위 연산자로 나뉜다.

전위 ++연산자 중복  

연산자 착안 
	Power a(2, 5), b;
	b = ++a;
	++a = b; // ++a는 1-value가 될수 있다.

	++a 식은 객체 a의 모든 맴버드의 값을 1씩 증가시킨 후, 변경된 객체 a의 참조를 리턴하는 것으로 정의한다.

연산자 함수 선언 
	컴파일러는 ++a 식을 다음과 같이 변형하여 Power 클래스에 선언된 operator++() 연산자 함수를 호출한다.
	a . ++ ()

참조를 리턴하는 연산자 함수 구현
	operator++() 연산자 함수는 결론적으로 자신 (*this) 에 대한 참조를 리턴한다

	Power& Power::operator++() {
		kick++;
		punch++;
		return *this; // 변경된 객체 자신(객체 a)의 참조 리턴
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
	Power operator++();
};

void Power::show() {
	cout << "kick = " << kick << " ," << "punch = " << punch << endl;
}

Power Power::operator++() {
	kick++;
	punch++;
	return *this;
}

int main() {
	Power a(4, 5), b;
	a.show();
	b.show();
	b = ++a;
	a.show();
	b.show();
}