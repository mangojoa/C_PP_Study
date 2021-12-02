#include <iostream>

using namespace std;

/*
class 키워드를 이용하여 클래스를 선언한다. (개발자가 정의하는 새로운 데이터 타입이다.)
클래스는 일반적으로 선언부/구현부 로 구성된다. 
*/

// 클래스 선언부
class Circle {
public: // 접근 지정자이다. 클래스는 기본적으로 가지게 되며 public private producted 등이 있다.
	int radius; // 각각의 변수를 선언하는 부분이다. 
	double getArea(); // ()데이터를 받는 변수가 있다면 이는 구현부에서 재정의를 해줘야 한다. 
};

// 클래스 구현부
double Circle::getArea() {
	return 3.14 * radius * radius; // ()데이터를 필요로 하는 변수의 return 값을 정의한 구현부 이다.
};

/*
클래스 선언과 구분을 분리하는 이유는 ????
기존의 자바 같은 경우 한꺼번에 정의하면 된다. 
하지만 C++의 경우, 클래스의 재사용을 위해서 분리한다. 
이는 클래스를 사용하고자 하는 다른 C++ 파일에서는 컴파일 시 클래스의 선언부만 필요하기 때문이다.
*/

int main() {
	Circle dount;
	dount.radius = 1; // dount 객체의 반지름을 1로 설정
	double area = dount.getArea(); // dount 객체의 면적 알아내기

	cout << "dount 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

}