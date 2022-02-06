/* [22.02.06] protected 접근 지정
기본 클래스에 protected로 지정된 맴버는 파생 클래스에게 접근을 허용하고 
다른 클래스나 외부 함수에서 접근할 수 없도록 숨겨진다.
*/

#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y; // 한점 (x, y) 좌표값
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
	bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint(); // Point 클래스의 showPoint() 호출
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y == p.y && color == p.color) // [1]
	/* 코드에서 컴파일 오류가 발생하지 않는다. Point 클래스의 x,y는 protected 맴버이므로 파생 클래스인 ColorPoint에서 접근이 가능하기 때문 */
		return true;
	else
		return false;
}

int main() {
	Point p; // 기본 클래스의 객체 생성
	p.set(2, 3); // [2]
	/* 2번 코드 역시 set() 함수가 Point의 public 맴버이므로 컴파일 오류가 발생하지 않는다. */


	p.x = 5; // [3]
	p.y = 5; // [4]
	p.showPoint(); 

	ColorPoint cp; // 파생 클래스의 객체 생성
	cp.x = 10; // [5]
	cp.y = 10; // [6]
	/* 3~6번 코드에서는 protected 맴버로 선언된 x, y를 접근하기 때문에 컴파일 오류가 발생한다. */

	cp.set(3, 4);
	cp.setColor("Red");

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Red");
	cout << ((cp.equals(cp2)) ? "true" : "false"); // [7] 
	/* 7번 코드에서도 컴파일 오류가 발생하지 않는다. */

}