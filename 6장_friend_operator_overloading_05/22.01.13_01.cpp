/* [22.01.13] + 연산자 중복 
연산자 착안
	두 개의 Power 객체를 더하는 + 연산자를 만들기 전에 우선 +의 의미를 결정해야 한다.
	Power a(3,5), b(4,5), c;

	a와 b를 합치는 + 연산자는 다음과 같이 사용된다.
	
연산자 함수 선언
	C++의 기본 더하기(+) 연산에서는 피연산자에 수 이외의 값이 올 수 없기 때문에,
	컴파일러는 a + b의 연산이 C++의 기본 더하기로 처리될 수 없음을 판단한다. 
	그리고 Power 클래스에는 Power 객체를 더하는 + 연산자 함수가 새로 선언되어 있는지 찾는다.

	a . + ( b );

	Power 객체 a의 맴버 함수 operator+()를 호출하여, b를 매개 변수로 넘겨주는 함수 호출이다.
	우리는 이 호출이 성공할 수 있도록 다음과 같이 operator+() 함수를 Power 클래스의 맴버 함수로 선언한다. 

	class Power {
		Power operator+ (Power op2); // + 연산자 함수 선언
	};

연산자 함수 구현
	+ 연산은 Power 객체의 kick 맴버와 punch 맴버를 각각 더하는 것이므로
	Power Power::operator+(Power op2) {
		Power tmp;
		tmp.kick = this->kick + op2.kick;
		tmp.punch = this->punch + op2.punch;
		return tmp;
	}

	여기서, this는 Power 객체 a 자신에 대한 포인터이며 op2는 객체 Power 객체 b를 전달받은 매개 변수이므로,
	this->kick + op2.kick;은 a의 kick과 b의 kick을 더하는 것이다. 
	이 연산자 함수는 더한 결과 tmp 객체를 리턴한다.
*/

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator+ (Power op2); // Power& op2 연산자 함수 선언
};

void Power::show() {
	cout << "kick = " << kick << "," << "punch = " << punch << endl;
}

Power Power::operator+(Power op2) {
	Power tmp; // 임시 객체 생성 
	tmp.kick = this->kick + op2.kick; // kick 더하기
	tmp.punch = this->punch + op2.punch; // punch 더하기
	return tmp; // 더한 결과 리턴
}

int main() {
	Power a(3, 5), b(4, 9), c;
	c = a + b; // 파워 객체 + 연산
	a.show();
	b.show();
	c.show();

}