/* 제네릭 함수 만들기 
두 값을 서로 교환사는 myswap() 함수를 템플릿으로 만들어보자.
int, char 등 기본 타입과 사용자가 선언한 Circle 클래스의 타입도 템플릿의 타입 매개 변수로 구체화 할 수 있다.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() {
		return radius;
	}
};

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << "a = " << a << ", " << "b = " << b << endl;

	double c = 0.3, d = 0.5;
	myswap(c, d);
	cout << "c = " << c << ", " << "d = " << d << endl;

	Circle donut(5), pizza(3);
	myswap(donut, pizza);
	cout << "donut 반지름 = " << donut.getRadius() << ", ";
	cout << "pizza 반지름 = " << pizza.getRadius() << endl;
}