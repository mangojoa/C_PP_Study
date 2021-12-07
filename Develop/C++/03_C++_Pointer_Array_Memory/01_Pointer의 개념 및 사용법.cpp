/*
객체를 다루기 위해 객체에 대한 포인터 변수를 선언하고,
이 포인터 변수로 객체의 맴버 변수를 읽고 값을 쓰거나 맴버 함수를 호출할 수 있다.

1. 객체에 대한 포인터 변수 선언 
Circle 타입의 객체에 대한 포인터 변수는 다음과 같이 선언한다.
Circle *p;
선언된 포인터 변수 p는 현재 아무 객체도 가리키고 있지 않다. 

2. 포인터 변수에 객체 주소 지정
객체의 주소는 객체 이름 앞에 & 연산자를 사용하려 표현한다.
포인터 변수 p에 donut 객체의 주소를 저장하는 코드는 다음과 같다.
p = &donut;
포인터 변수를 선언할 때 다음과 같이 객체의 주소를 초기화할 수도 있다.
Circle *p = &donut;

3. 포인터를 이용한 객체 맴버 접근
객체 이름으로 맴버를 접근할 때는 다음과 같이 점(.) 연산자를 이용하지만
d = donut.getArea();
객체 포인터로 맴버를 접근할 때는 -> 연산자를 사용한다. 
d = p -> getArea();
이 코드는 다음과 같이 코딩할 수 있다. 
d = (*p).getArea();

!!! 중요 !!!
초기화되지 않은 객체 포인터를 이용하면 오류 발생 !! 
Circle *p;
p -> getArea(); // 실행 오류 발생
이 코드는 p가 어떤 Circle 타입의 객체도 가리키지 않은 상태에서 getArea() 함수를 호출하므로,
실행 중에 'null pointer assignment' 오류가 발생한다. 
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);
	
	// 객체 이름으로 맴버 접근
	cout << donut.getArea() << endl;

	// 객체 포인터로 맴버 접근
	Circle *p;
	p = &donut;
	cout << p->getArea() << endl; // donut의 getArea() 호출
	cout << (*p).getArea() << endl; 

	p = &pizza;
	cout << p->getArea() << endl; // pizza의 getArea() 호출
	cout << (*p).getArea() << endl;

}