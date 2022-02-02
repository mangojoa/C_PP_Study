#include <iostream>
#include <string>
using namespace std;

class Point { // 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
	int x, y; // 한 점 (x,y) 좌표값
public:
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

class ColorPoint : public Point { // 상속 선언 
	string color; // 점의 색 표현
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point의 showPoint() 호출
}

int main() {
	Point p; // 기본 클래스 객체 생성
	ColorPoint cp; // 파생 클래스 객체 생성


	cp.set(3, 4); // 클래스 외부에서 파생 클래스의 맴버 호출
	cp.setColor("Red");

	// 파생 클래스에서 기본 클래스 맴버 접근
	// 상속을 통해 기본 클래스의 맴버를 자신의 맴버로 확장한다. 
	// 파생클래스의 맴버들은 기본 클래스의 private 매법 외에 모든 맴버를 접근한 수 있다.
	cp.showColorPoint();
}