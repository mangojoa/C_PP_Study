/* [22.01.14] += 연산자 중복
	같은 이항 연산자이지만 += 연산자는 + 연산자와 달리 약간의 주의를 기울여야 한다.

연산자 착안
	Power a(3, 5), b(4, 6);
	a += b; 
	여기서 += 연산은 a와 b를 합쳐 a를 새로운 파워로 갱신하는 것으로 정의한다.

연산자 함수 선언
	+= 연산자의 리턴 타입을 무엇으로 선언해야 할까? 
	(a += b) += b; 

	이 문장은 (a += b) 연산이 먼저 실행되어 b가 a에 더해진다.
	그리고 더해진 a에 += b 연산이 실행된다. 만일 처음 (a += b) 연산에서 += 연산자 함수가 
	객체 a를 리턴한다면 리턴된 객체 a의 복사본이다. 
	
	그러면 그 다음에 실행되는 +=b 연산은 원본 객체 a가 아닌 복사본에 b를 더하게 되는 문제가 발생한다.
	이 문제를 해결하기 위해서는 (a += b) 연산이 객체 a의 참조를 리턴하면 된다.
	그러므로 += 연산자의 리턴 타입은 Power& 으로 해야한다. 

	a . += ( b );

연산자 함수 코드
	Power& Power::operator+=(Power op2) {
		kick = kick + op2.kick;
		punch = punch + op2.punch;
		return *this; 갱신된 Power 객체 a를 리턴한다는 점에 주목해야 한다.
	}
*/

#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power& operator+=(Power op2); // 연산자 함수 선언
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

Power& Power::operator+=(Power op2) { // += 연산자 맴버 함수 구현
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this;
}

int main() {
	Power a(3, 5), b(4, 5), c;

	a.show();
	b.show();

	c = a += b; // operator+=() 맴버 함수 호출

	a.show();
	c.show(); 
}