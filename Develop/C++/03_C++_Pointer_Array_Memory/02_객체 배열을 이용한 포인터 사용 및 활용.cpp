/*
객체 배열 선언 및 활용
1. 객체 배열 선언 
Circle cricleArray[3]; // 객체 배열을 선언하는 코드
cricleArray는 3개의 Circle 객체를 원소로 가진 배열의 개념이다.
2. 객체 배열 선언문은 기본 생성자를 호출한다.
객체 배열 선언문은 오직 매개 변수 없는 기본 생성자를 호출한다.
Circle cricleArray[3]; 
이렇게 선언하게 된다면, 3개의 Circle 객체가 생성되고, 각 객체마다 다음의 기본 생성자가 호출된다.
Circle::Circle() { radius = 1; } 이렇게 말이다.
아무 생성자도 선언되지 않은 경우라면 컴파일러가 자동으로 기본 생성자를 생성하므로 
객체 배열 생성 시 컴파일 오류가 발생하지 않는다. 
한편, 매개 변수를 가진 생성자 Circle(int r)가 선언되어 있는 경우라면 
Circle saffle(15); 선언문은 Circle(int r)의 생성자를 호출하므로 문제가 없지만
Circle circleArray[3]; 선언문의 경우, 기본 생성자 Circle()이 선언되어 있지 않기 때문에 컴파일 오류가 발생
그렇기에 객체 배열을 선언할때, 기본 생성자가 있는지 확인하는 것을 잊지 말도록 하자.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3]; // 객체 배열 생성

	/*
	3. 객체 배열 사용
	배열의 각 원소 객체는 []연산자로 구분한다. 원소 객체와 맴버 사이에 점(.) 연산자를 사용한다.
	*/
	circleArray[0].setRadius(10); 
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) // 배열의 각 원소 객체의 맴버 접근
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	Circle *p;
	p = circleArray;
	for (int i = 0; i < 3; i++) { // 객체 포인터로 배열 접근
		
		cout << "Circle " << "의 면적은 " << p->getArea() << endl;
		
		cout << "Circle " << "의 면적은 " << (*p).getArea() << endl;

		cout << "Circle " << "의 면적은 " << p[i].getArea() << endl;

		cout << "Circle " << "의 면적은 " << (*p++).getArea() << endl;

		// circleArray를 포인터로 사용
		cout << "Circle " << "의 면적은 " << (circleArray+i)->getArea() << endl;

		// 퍼인터 p의 정수 연산 이용
		cout << "Circle " << "의 면적은 " << (p+i)->getArea() << endl;
		p++; // p를 증가시켜 다음 원소를 가리킴
	}
}