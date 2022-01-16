/* [22.01.16] + 연산자 작성 실습 : b = a + 2;
연산자와 연산을 착안하고 그에 맞추어 연산자 함수를 선언하고 구현하면 된다. 
	Power a(3,5), b;
	b = a + 2;

연산자 착안
	a + 2의 의미를 a의 kick과 punch 값에 각각 2를 더한 결과를 리턴하는 것으로 정의한다.

연산자 함수 선언
	a. = + (2)
	
	이를 위해서 Power 클래스에 operator+(Int) 연산자 함수를 다음과 같이 선언
	class Power {
	public:
		Power operator+(int op2);
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
	Power operator+ (int op2);
};

void Power::show() {
	cout << "kick = " << kick << " ," << "punch = " << punch << endl;
}

Power Power::operator+ (int op2) {
	Power tmp;
	tmp.kick = kick + op2;
	tmp.punch = punch + op2;
	return tmp;
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a + 2;
	a.show();
	b.show();
}