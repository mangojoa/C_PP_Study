/*
생성자 소멸자의 실행 순서

전역객체나 지역객체 모두 생성된 순서의 반대순으로 소멸 된다. 
*/

#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() { // ~소멸자 구현
	cout << "반지름 " << radius << " 의 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

// 전역 객체
Circle globalDount(1000);
Circle globalPizza(2000);

void f() {
	Circle fDount(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDount;
	Circle mainPizza(10);
}