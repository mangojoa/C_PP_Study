/* [22.01.23] + 연산자를 외부 프렌드 함수로 작성
두 개의 객체를 더하는 +연산자를 외부 함수로 작성해보자!
Power a(3,5), b(4,5), c;
c = a + b; =====> Power operator+ (Power op1, Power op2);
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
	friend Power operator+(Power op1, Power op2); // friend 선언
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

Power operator+(Power op1, Power op2) {
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp; // 임시 객체 리턴
}

int main() {
	Power a(3, 5), b(4,5), c;
	c = a + b; // 객체 더하기 선언
	a.show();
	b.show();
	c.show();
}