/*
접근지정자 

private / public / protected 등이 존재한다.

private 맴버
클래스 내의 맴버 함수들에게만 접근이 허용된다.

public 맴버 
클래스 내외를 막론하고 프로그램의 모든 함수들에게 접근이 허용된다.

protected 맴버
클래스 내의 맴버 함수와 이 클래스를 상속받은 파생 클래스의 맴버 함수에게만 접근이 허용된다.

class Sample {
private: default 지정자 
	
public:

protected:

}
*/

#include <iostream>
using namespace std;

class Circle {
private: 
	int radius;

public: // 맴버변수로 보호를 받지 못한다.
	// int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int r) {
	radius = r;
}

int main() {
	Circle waffle;
	waffle.radius = 5; // 노출된 맴버는 마음대로 접근할 수 있다. 
	// private 안에 생성된 변수이기에 마음대로 접근할 수 없다. 
}

/*
생성자는 public으로 

클래스 외부에서 객체를 생성하기 위해서는 생성자를 public 으로 성언해야 한다. 

생성자가 public으로 선언되어 있지 않다면 다음 라인은 컴파일 오류가 발생한다. 

Circle circle; // Circle() 생성자를 호출하므로 Circle()은 Public이어야 한다. 
*/