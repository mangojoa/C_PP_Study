#include <iostream>

using namespace std;

/*
클래스는 객체가 생성될 때 자동으로 실행되는 생성자라는 특별한 맴버 함수를 통해 객체를 초기화한다.
생성자의 특징 
1. 생성자의 목적은 객체가 생성될 때 필요한 초기 작업을 위함이다. 
=>	멤버 변수의 값을 특정 값으로 설정하거나. 메모리를 동적 할당 받거나, 파일을 열거나, 
	네트워크를 연결하는 등의 객체를 사용하기 전에 필요한 초지를 할 수 있도록 하기 위함이다. 
2. 생성자 함수는 오직 한 번만 실행된다.
=>	각 객체마다 객체가 생성되는 시점에 오직 한 번만 자동으로 실행된다.
3. 생성자 함수의 이름은 클래스 이름과 동일하게 작성되어야 한다.
=>	생성자 함수의 이름은 반드시 클래스 이름과 동일하게 작성 되어야 한다. 이로 인해 생성자는 다른 맴버함수와 쉽게 구분한다.
4. 생성자 함수의 원형에 리턴타입을 선언하지 않는다. 
=>	생성자는 함수이지만 리턴 타입을 선언해서는 안된다. void 리턴 타입을 설정해서도 안된다.
*/

class Circle {
public:
	int radius;
	Circle(); // 매개 변수가 없는 생성자.
	Circle(int r); // 매개 변수가 있는 생성자. => 매개 변수가 다르기에 중복선언이 된다. 
	double getArea();
};

Circle::Circle() { 
	radius = 1; // 반지름 값을 초기화
	cout << "반지름 " << radius << " 원 생성" << endl;
}

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