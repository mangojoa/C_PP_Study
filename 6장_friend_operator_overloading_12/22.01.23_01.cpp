/* [22.01.23] 프렌드를 이용한 영ㄴ산자 중복 
연산자 함수는 클래스 바깥의 외부 전역 함수로도 작성 가능하다. 
이런 경우, 연산자 함수를 클래스에서 friend로 취하여 클래스의 맴버를 자유롭게 접근할 수 있게 한다. 

+ a를 위한 + 연산자 함수 작성

+ 연산자를 외부 함수로 작성
Power a(3,5), b;
b = 2 + a;

지금까지 배운 바에 따르면, 컴파일러는 2 + a 연산을 다음과 같이 변형하여 openrator+() 함수를 호출하려고 할 것이다.
2 . + ( a )

그러나 2가 객체가 아니므로 이 변형식은 완전히 잘못된 문장이다. ㅇ\
이 처럼 첫 번째 피연산자가 객체가 아닌 경우, 컴파일러는 다음과 같은 식으로 변환한다.
+ (2 , a);

앞의 식이 성공적이기 위해서는 operator+() 함수를 Power 클래스의 외부함수로 밖에 구현할 수 밖에 없다. 
Power a(3,5), b;
b = 2 + a; ========> 1. b = + ( 2 , a);

+ 연산자를 Power 클래스의 외부 함수로 구현한 코드를 보여준다.
이처럼 어떤 연산의 경우, 연산자 함수를 오직 외부 함수로만 작성해야하는 경우가 있다. 
b = 2 + a; ====> b = + ( 2 , a);
Power operator+ (int op1, int op2) { ... }

외부 연산자 함수의 프렌드 선언

Power operator+ (int op1, int op2) { ... } 연산자 함수에는 한가지 걱정거리가 있다. 
함수내에서 Power의 private 맴버인 kick과 punch를 자유롭게 접근하고 있기 때문이다.
이대로라면, 이 연산자 함수에 컴파일 오류가 발생할 것이 뻔하다. 이 문제의 손쉬운 해결책은 kick 과 punch를 public으로 선언하면 된다.

그러나 이러한 해결챗은 연산자 함수를 작성하고자 Power 클래스의 캡슐화 원칙을 무너뜨르게 되는 치명적인 판단 미스라고 볼 수 있다. 
그렇기에 friend를 사용하면 깔끔하게 해결된다. 외부에 구현된 operator+(int Power)의 연산자 함수를 다음과 같이 초대하는 방법이다.
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
	friend Power operator+(int op1, Power op2); // friend 선언
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

Power operator+(int op1, Power op2) {
	Power tmp;
	tmp.kick = op1 + op2.kick;
	tmp.punch = op1 + op2.punch;
	return tmp; // 임시 객체 리턴
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = 2 + a; // 객체 더하기 선언
	a.show();
	b.show();
}