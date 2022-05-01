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

/* 템플릿의 역할
템플릿의 함수는 컴파일되지도 호출되지도 않는, 그저 함수의 틀이다.
템플릿의 역할은 제네릭 함수를 선언하고, 컴파일 시점에 구체화시키기 위한 틀을 만드는 것이다.
템플릿 함수로부터 구체화된 버전의 함수가 컴파일되고 호출된다.

구체화 오류
템플릿으로부터 함수를 구체화시키는 과정에서 제네릭 타입 T에 유의해야 한다.

template <class T> void myswap(T& a, T& b)

매개변수 a, b는 모두 타입 T로 선언되거 있기 때문데, myswap()을 호출할 때 두개의 매개변수 타입이 동일해야 한다.

int a = 5;
double b = 3;
myswap(a, b); <- 의 경우 a, b의 선언된 타입이 다르기 때문에 컴파일 오류를 발생시킨다. 

그렇기에 a와 T의 타입이 같아야 한다.
*/

/* 템플릿의 장단점과 제네릭 프로그래밍
템플릿은 함수의 작성을 용이하게 하고, 함수 코드의 재사용을 가능하게 하여 소프트웨어의 생산성과 유연성을 높인다.
그러나 컴파일러에 따라서 템플릿이 지원되지 않을 수 있기 때문데 포팅에 취약하다. 
또한 템플릿과 관련된 컴파일 오류 메세지가 빈약하여 디버깅에 많은 어려운이 있다.

한편 템플릿을 사용하려 제네릭 함수나 제네릭 클래스를 만들고 이를 활용하여 프로그램을 작성하는 새로운 프로그래밍 패러다임이 생겨났다.
이를 제네릭 프로그래밍 or 일반화 프로그래민 이라고 부르며 점점 보편화되고 있다.
C++, Java, C# 등 여러 언어에서 제네릭 프로그래밍을 지원하며, 이들 언어의 많은 라이브러리들이 제네릭으로 수정되었다.
*/