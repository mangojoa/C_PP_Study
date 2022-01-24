/* [22.01.24] 참조를 리턴하는 << 연산자 작성 실습

<< 연산자를 만들어보면서 참조 리턴을 이해해보자 
Power a(1,2);
a << 3 << 5 << 6;

연산자 착안
이 연산은 객체 a의 kick 과 punch에 각각 3을 더하고 다시 5,6을 연속적으로 더하는 연산이다.
실행 결과 객체 a의 kick = 15 / punch = 16 이 된다.

연산자 함수 구현
'a<<3'의 실행 후 다음 '<<5' 연산이 객체 a에 대해 진행되려면, 'a<<3'에서 연산자 << 가 연산 후 객체 a의 참조를 리턴해야 한다.
컴파일러는 a << 3 연산을 다음과 같이 변형한다. 
a . << (3);

우리는 이에 맞추어 << 연산자 함수를 다음과 같이 Power 클래스의 맴버로 선언

class Power {
public:
	Power& operator << (int n);
};

Power& Power::operator<<(int n) {
	kick += n;
	punch += n;
	return *this; // 이 객체의 참조 리턴
}

만일 참조를 리턴하지 않고 다음과 같이 구현한다면 
Power operator << (int n); // 참조를 리턴하지 않으면 연속된 << 연산이 정상적으로 작동하지 않는다.
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
	Power& operator << (int n);
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

Power& Power::operator<<(int n) {
	kick += n;
	punch += n;
	return *this; // 이 객체의 참조 리턴
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
}