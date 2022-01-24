/* [22.01.24] 단항 연산자 ++를 프렌드로 작성하기
Power 객체에 대한 ++ 연산자를 프랜드 함수로 작성해보자

전위 연산자 
++a ====> ++ (a)
Power& operator++ (Power& op) {...}

후위 연산자 
a++ ====> ++ (a, 0)
Power& operator++ (Power& op, int x) {...}

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
	friend Power& operator++(Power& op); // 전위 연산자
	friend Power operator++(Power& op, int x); // 후위 연산자
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

Power& operator++(Power& op) {
	op.kick++;
	op.punch++;
	return op;
}

Power operator++(Power& op, int x) {
	Power tmp = op;
	op.kick++;
	op.punch++;
	return tmp; // 변경 이전의 op 리턴
}

int main() {
	Power a(4, 9), b;
	b = ++a;
	a.show(); b.show();

	b = a++;
	a.show(); b.show();
}