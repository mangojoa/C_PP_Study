#include <iostream>
using namespace std;
/*
생성자와 맴버 변수의 초기화

클래스의 맴버 변수등은 자동으로 초기화되지 않기 때문에 생성자에서 초기화한다.

1. 생성자 코드에서 맴버변수 초기화
각각 맴버변수를 초기화 하는 Point 클래스 
class Point {
	int x,y;
public:
	Point();
	Point( int a, int b );
}; 

Point::Point() { x=0; y=0; }
Point::Point(int a, int b) { x=a; y=b; }

2. 생성자 서두에 초깃값으로 초기화
Point::Point() : x(0), y(0) { } 맴버 변수 x, y를 0으로 초기화

Point::Point( int a, int b ) : x(a), y(b) { } 맴버 변수를 x=a, y=b로 초기화

3. 맴버변수에서 초기화
Point::Point(int a) : x(a), y(b) { } // 맴버변수에서 초기화

4. 클래스 선언부에서 직접 초기화 
class Point {
	int x=0, y=0; // 클래스 선언부에서 x, y를 0으로 직접 초기화
}
*/

// x,y를 생성자 서두에 초긱값으로 초기화하고 위임 생성자를 이용하여 제작

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

Point::Point() : Point(0,0) {}

Point::Point(int a, int b) : x(a), y(b) {}

int main() {
	Point origin; // 위임 생성자를 호출
	Point target(30, 60); // 타겟 생성자에 (int a, int b)를 넣어 호출
	origin.show(); // 위임 생성자의 show() 함수를 호출
	target.show(); // 타겟 생성자의 show() 함수를 호출 
}


