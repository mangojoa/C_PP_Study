/*
참조에 의한 호출의 장점
'주소에 의한 호출'은 포인터 타입으로 매배 변수를 선언하므로, 호출하는 쪽에서 주소를 전달하기 위해 
& 연산자를 사용해야 하고, swap() 함수의 코드에서는 *기호를 반복적으로 사용함에 따라, 실수의 가능성과 
코드 작성의 긴장감이 배가 되고 코드의 가독성이 떨어진다.
스러나 참조 매개 변수를 사용하면 간단히 변수를 넘겨주기만 하면 되고, 함수 냉에서도 참조 매개 변수를 
보통 변수처럼 사용하기 때문에 작성하기 쉽고 보기 좋은 코드가 된다.
참조에 의한 호출로 객체 전달.
두 가지 사랑에 완전히 다르게 작동한다.
1. 참조 매개 변수로 이루어진 모든 연산은 원본 객체에 대한 연산이 된다.
2. 참조 매개 변수는 이름만 생성되므로, 생성자와 소멸자는 아예 실행되지 않는다.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle& c) {
	int r;
	cout << "정수 값으로 반지름을 입력하세요 >> ";
	cin >> r;
	c.setRadius(r);
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut의 면적 >> " << donut.getArea() << endl;
}