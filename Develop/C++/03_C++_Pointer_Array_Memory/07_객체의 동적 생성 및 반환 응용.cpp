/*
객체의 동적 생성 및 반환
new와 delete를 이용하여 객체를 동적으로 생성하고 반환하는 방법
new를 이용한 객체의 동적 생성과 생성자
new 연산자를 이용하여 객체를 동적 생성하는 구문
클래스이름 *포인터변수 = new 클래스이름; => 기본 생성자 호출
클래스이름 *포인터변수 = new 클래스이름(생성자에게 변수 리스트); => 매개 변수 있는 생성자 호출
new는 클래스 크기의 메모리를 할당받아 객체를 생성하며, 이때 생성자를 호출한다.
첫 번째 형식의 경우 기본 생성자가 호출 
Circle *p = new Circle(); => 기본 생성자 Circle() 호출, p = new Circle(); 와 같음
두 번째 형식의 경우 매개 변수를 가진 생성자가 호출
Circle *q = new Circle(30); => 생성자 Circle(30) 호출
*/

/*
delete를 이용한 객체 반환과 소멸자
동적으로 생성된 객체는 객체의 대한 '포인터변수'를 이용하여 다음과 같이 반환한다.
delete 포인터변수;
Circle *p = new Circle; => 생성자 Circle() 호출, p = new Circle();와 같음
Circle *q = new Circle(30); => 생성자 Circle(30) 호출
Circle 객체 반환
delete p;
delete q;
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	/* 기본적인 동적 생성과 반환의 순환
	Circle *p, *q;
	p = new Circle;     // 기본 생성자 호출
	q = new Circle(30); // 매개변수 생성자 호출
	cout << p->getArea() << endl << q->getArea() << endl;
	
	// 각각의 순서에 관계 없이 원하는 순서대로 delete 할 수 있다. 
	delete p; 
	delete q;
	*/

	// 응용
	int radius;
	while (true) {
		cout << "정수 반지름 입력 (음수이면 종료) >> ";
		cin >> radius;
		if (radius < 0) break; // 음수가 입력되어 종료한다.
		Circle* p = new Circle(radius); // 동적 객체 생성
		cout << "원의 면적은 " << p->getArea() << endl;
		delete p;
	}
}