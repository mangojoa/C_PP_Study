/* [22.02.03] 다운 캐스팅
기본 클래스 포인터가 가리키는 객체를 파생 클래스의 포인터로 가리키는 것을 말한다.
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
	
	/*
	main() 함수의 다음 라인에서 다운 캐스팅이 일어나며 다운 캐스팅은 업 캐스팅과 달리 명시적으로 타입 변환을 지정해야 한다.

	pDer = (ColorPoint*)pBase; // 다운 캐스팅, 강제 타입 변환 필요

	pBase로는 cp객체의 맴버 중 Point의 public 맴버만 접근할 수 있지만, pDer로는 cp 객체의 모든 public 맴버를 접근할 수 있다.
	*/
	
	ColorPoint* pDer;
	Point* pBase, po;
	pBase = &cp;
	pDer = (ColorPoint*)pBase; // 다운 캐스팅
	// 하지만 잘못된 다운 캐스팅이다. 
	
	pDer->set(3, 4);
	// pBase->showColor("Red"); setColor()는 ColorPoint의 맴버이므로 컴파일 오류는 없다.
	// 하지만 없는 함수를 호출 하기에 오류가 발생한다. 
}