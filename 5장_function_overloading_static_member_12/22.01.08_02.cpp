/* [22.01.08] 객체 사이에 공유 변수를 만들고자 할 때 
static 맴버는 클래스의 모든 인스턴스(객체)들이 공유하는 변수나 함수를 만들고자 할 때 사용된다. 

static 맴버를 공유의 목적으로 활용하는 사례
생성된 원의 개수를 기억하는 nomOfCircles 맴버 변수를 Circle 클래스에 static으로 선언하여 모든 Circle 객체들이 공유한다.
그리고 이 맴버 변수를 리턴하는 함수 getNumOfCircles()를 static 타입으로 작성한다. 
*/

#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles; // 생성된 원의 개수 기억
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; } // 생성된 원의 개수 감소
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() { return numOfCircles; }
};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++; // 생성된 원의 개수 증가
}

int Circle::numOfCircles = 0; // 0으로 초기화

int main() {
	Circle* p = new Circle[10]; // 10개의 생성자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	delete[]p; // 10개의 소멸자 실행
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

	Circle b;
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

}
