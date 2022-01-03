/*
복사 생성자 

객체의 얇은 복사와 깊은 복사

얇은 복사
원본 객체의 요소를 현재 상태 그대로 사본 객체에 복사되므로, 사본의 동적 메모리 할당이 되어있다면 
메모리를 공유하게 된다

깊은 복사 
원본의 포인터가 가리키는 메모리까지 복사하여 원본과 사본의 별개의 메모리를 가리키므로 
완전한 복사가 이루어진다.

객채의 얇은 복사 문제점
원본과 사본이 각각의 객체 요소 포인터로 문자열 배열을 공유하고 있기 때문에 사본 객체에서의 문자열을 
변경하면 원본 문자열이 변경되는 문제가 발생한다. 
그렇기에 가능하면 얕은 복사가 일어나지 않도록 해야한다.

복사 생성 및 복사 생성자
복사 생성은 객체가 생성될 때 원본 객체를 복사하여 생성되는 경우로써,
C++에는 복사 생성 시에만 실행되는 특별한 복사 생성자가 있다. 

class ClassName {
	ClassName(const ClassName& c); // 복사 생성자
}

복사 생성자의 매개 변수는 오직 하나이며
자기 클래스의 대한 참조로 선언된다.
또한 복사 생성자는 클래스에 오직 한개만 선언할 수 있다.

class Circle {
	........
	Circle(const Circle& c); // 복사 생성자 선언
	........
};

Circle::Circle(const Circle& c) { // 복사 생성자 구현
	........
}
*/

#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(const Circle& c); // 복사 생성자 선언
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle(const Circle& c) {
	this->radius = c.radius; // 복사 생성자 구현
	cout << "복사 생성자 실행 radius = " << radius << endl;
}

int main() {
	Circle src(30); // src 객체의 보통 생성자 호출
	Circle dest(src); // dest 객체의 복사 생성자 호출

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
}