#include <iostream>
using namespace std;

/*
위임생성자, 생성자가 다른 생성자 호출

한 클래스의 생성자들에는 대게 객체를 초기화하는 비슷한 코드가 중복된다.

C++11부터는 중복된 초기화 코드를 하나의 생성자로 몰고, 다른 생성자에서 이 생성자를 호출할 수 있게 한다. 

그렇다면 21.11.26.cpp에서 작성된 코드를 간소화 해보자
*/

class Circle {
public:
	int radius;
	Circle(); // 위임생성자
	Circle(int r); // 타겟 생성자
	double getArea();
};

	Circle::Circle() : Circle(1) { }

	Circle::Circle(int r) {
		radius = r;
		cout << "반지름 " << radius << " 원 생성" << endl;
	}

	double Circle::getArea() {
		return 3.14 * radius * radius;
	}

	int main() {

		Circle dount; // 매개변수 없는 생성자 호출
		double area = dount.getArea();
		cout << "dount의 면적은 >> " << area << endl;

		Circle pizza(20); // 매개변수 있는 생성자 호출
		area = pizza.getArea();
		cout << "pizza의 면적은 >> " << area << endl;

	}