/* [22.01.14] == 연산자 중복 
연산자 착안
	Power a(3, 5), b(3, 6);
	if ( a == b ) cout << "sames two powers";
	else cout << "not sames two powers";

	구체적으로 == 연산자는 두 피연산자의 kick 과 punch가 각각 같으면 ture를,
	아니면 false를 리턴하도록 정의한다. 그러므로 operator==() 연산자 함수의 리턴 타입은 bool이다.

연산자 함수 선언
	a . == ( b )
	이 식은 Power 객체 a의 operator==() 연산자 함수를 호출하고 b를 매개 변수로 남긴다.

연산자 함수 코드
	두 개의 Power객체를 비료하는 operator==() 연산자 함수는 다음과 같이 구현한다.
	bool Power::operator==(Power op2) {
		if (kick == op2.kick && punch == op2.punch) return true;
		else return false;
	} 
	여기서 kick과 punch는 객체 a의 맴버이며, op2.kick과 op2.punch는 객체 b의 맴버들이다.
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
	bool operator== (Power op2); // == 연산자 함수 선언
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

bool Power::operator==(Power op2) {
	if (kick == op2.kick && punch == op2.punch) return true;
	else return false;
}

int main() {
	Power a(3, 5), b(3, 9);
	a.show();
	b.show();
	if (a == b) cout << "sames two powers" << endl;
	else cout << "not sames two powers" << endl;

}