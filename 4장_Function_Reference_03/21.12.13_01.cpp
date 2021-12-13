/*
주소에 의한 호출로 객체 전달

'call by value'시 생성자가 실행되지 않는 것으로 인함 염려에서 벗어날 수 있다.
함수 호출 시 객체를 통째로 복사하여 넘기는 'call by value'대신, 객체의 주소만 전달하는 'call by address'
*/

#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << radius << endl;
}

Circle::Circle(int radius) { // 이의 생성자는 실행되지 않는다는 것이다. 
	this->radius = radius;
	cout << radius << endl;
}

Circle::~Circle() {
	cout << radius << endl;
}

void increase(Circle *c) {
	int r = c->getRadius();
	c->setRadius(r + 1);
}

int main() {
	Circle waffle(30); 
	increase(&waffle); 
	cout << waffle.getRadius() << endl;
}

/*
'call by address'

객체의 주소를 전달하는 방식은 원본 객체를 통째로 전달하는 'call by value'에 비해 원본 객체를 복사하는 시간 소모가 없으며,
매개 변수가 단순 포인터이므로 
'call by value'시에 발생하는 생성자 소멸자의 미대칭 문제도 없다. 
하지만 포인터로 의도하지 않게 원본 객체를 훼손할 가능성이 있기 때문에 코딩에 조심해야 한다.
*/