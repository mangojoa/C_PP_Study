/* [22.03.14] 추상 클래스
순수 가상 함수 => 함수의 코드가 없고 선언만 있는 가상함수를 일컫는다.

맴버 함수의 원형 뒤에 =0; 으로 선언하며, Shape클래스의 Draw()를 순수 가상 함수로 선언하면 다음과 같다.
class Shape{
public:
	virtual void draw()=0; // 순수 가상 함수 선언
};

[추상 클래스]

최소 하나의 순수 가상 함수를 가진 클래스를 추상 클래스라고 말한다.
Shape은 순수 가상 함수 draw()를 가지고 있기 때문에 추상 클래스이다.

class Shape { Shape은 추상 클래스
public:
	void paint() {
		draw(); // 순수 가상 함수를 호출할 수 있다.
	}
	virtual void draw() = 0; // 순수 가상 함수
};

추상 클래스는 실행 코드가 없는 순수 가상 함수를 가지고 있기 때문에 불완전한 클래스이다. 
그러므로 응용 프로그램에서 추상 클래스의 인스턴스(객체)를 생성할 수 없다.
Shape shape(); // 컴파일 오류
Shape *p = new Shape(); // 컴파일 오류

그러나 추상 클래스에 대한 포인터의 선언은 문제되지 않는다.
Shape *p; // 추상 클래스의 포인터 선언

[추상 클래스의 목적]

추상클래스는 상속을 위한 기본 클래스로 활용하는 것이 목적이다.
또한 순수 가상 함수를 통해 파생 클래스가 구현할 함수의 원형을 보여주는 인터페이스 역할을 한다.
추상 클래스의 모든 맴버 함수를 순수 가상 함수로 선언할 필요는 없다.
일반적으로 추상 클래스는 여러 맴버의 변수와 여러 맴버 함수를 구현하고 나름대로의 기능을 갖춘다.
다만, 파생 클래스에서 구현해야 할 함수만 순수 가상 함수로 선언한다. 

[추상 클래스 상속]
추상 클래스를 상속받는 파생 클래스는 자동으로 추상클래스가 된다. 순수 가상 함수를 그대로 상속받기 때문이다.

class Shape { // Shape는 추상 클래스
public:
	void paint() {
		draw();
	}
	virtual void draw() = 0; // 순수 가상 함수
};

class Circle : public Shape { // Circle은 추상 클래스 
public:
	string toString() { return "Circle 객체" }
};

추상 클래스를 상속 받으면 객체를 생성할 수 없다.
Circle circle;
Circle *p = new Circle();

[추상 클래스의 구현]

파생 클래스에 추상 클래스의 순수 가상 함수의 코드를 작성함을 뜻한다.
파생 클래스가 온전한 클래스가 되려면 상속받은 추상 클래스의 모든 순수 가상 함수를 오버라이딩하여 구현하여야 한다.

class Shape { // Shape는 추상 클래스
public:
	void paint() {
		draw();
	}
	virtual void draw() = 0; // 순수 가상 함수
};

class Circle : public Shape { // Circle은 추상 클래스
public:
	virtual void draw() { cout << "Circle"; } // 순수 가상 함수 구현
	string toString() { return "Circle 객체"; }
};

이제 추상 클래스가 아니므로 객체를 생성할 수 있다.
Circle circle;
Circle *p = new Circle();
*/

#include <iostream>
using namespace std;

class Calculator {
	virtual int add(int a, int b) = 0;
	virtual int subtract(int a, int b) = 0;
	virtual double average(int a[], int size) = 0;
};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
	double average(int a[], int size) {
		double sum = 0;
		for (int i = 0; i < size; i++) {
			sum += a[i];
			return sum / size;
		}
	}
};

int main() {
	int a[] = { 1,2,3,4,5 };
	GoodCalc* p = new GoodCalc();
	cout << p->add(2, 3) << endl;
	cout << p->subtract(5, 2) << endl;
	cout << p->average(a, 5) << endl;
	delete p;
}

