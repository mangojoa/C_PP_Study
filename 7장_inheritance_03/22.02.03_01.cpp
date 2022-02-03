/* [22.02.03] 업 케스팅
파생 클래스의 객체를 기본 클래스의 포인터로 가리키는 것을 말한다. 
이는 파생 클래스의 객체를 기본 클래스의 객체처럼 다룰 수 있게 한다. 
	즉, 차생 클래스 객체가 기본 클래스의 맴버를 포함하기에 가능한 것이다. 


*/

#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

class ColorPoint : public Point { 
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();
}

int main() {
	Point p; // 기본 클래스 객체 생성
	ColorPoint cp; // 파생 클래스 객체 생성
	ColorPoint* pDer = &cp;
	/*
	업 케스팅한 기본 클래스의 포인터로는 '기본 클래스의 맴버만 접근'할 수 있다. 
	업 캐스팅 시 다음과 같이 명시적 타입 변환이 필요 없다
	Point* pBase = (Point*)pDer; // (Point*) 생략이 가능하다.
	*/
	Point* pBase = pDer; // 업 케스팅

	/*
	기본 클래스 point 타입의 포인터 pBase로 파생 클래스인 ColorPoint 객체를 가리킨다.
	하지만 pBase는 Point 클래스이 포인터이므로, pBase 포인터로는 ColorPoint 객체 내의 Point 클래스 맴버만 접근 할 수 있다.
	그렇기에 showColorPoint() 함수는 Point 클래스의 맴버가 아니므로 pBase->showColorPoint()는 오류가 발생한다. 
	*/


	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("Red");
	pDer->showColorPoint();
	// pBase->showColorPoint(); 는 컴파일 오류를 일으킨다. 
}