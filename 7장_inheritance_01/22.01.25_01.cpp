/* [22.01.25] 상속 (Inheritance)
상속은 객체 지향 언어의 본질적인 특성이다.
상속 개념이 없다면 객체 지향 언어라고 말하지 않는다.
상속은 소프트웨어의 재사용을 가능하게 하며, 동적 바인딩을 통해 
객체 지향 프로그래밍의 묘미를 그대로 살리는 매우 중요한 기능이다.

C++의 클래스 상속 
C++에서는 두 클래스 사이에 부모~자식의 상속 관계를 선언한다. 
상속은 자식 클래스의 객체가 생성될 때, 자신의 맴버뿐 아니라 부모 클래스의 맴버를 포함할 것을 지시한다.
C++에서 부모 클래스를 기본 클래스 / 자식 클래스를 파생 클래스라고 부른다.

C++의 상속은 이미 만들어진 클래스의 맴버들은 물려받게 함으로써,
코드의 중복 작성을 없애 코드 작성에 드는 시간과 비용을 줄일 수 있게 한다. 
C++에서는 특히 여러 개의 클래스를 동시에 상속받는 다중 상속(multiple Inheritance)을 허용한다.

class Phone {
	void call();
	void receive();
};
		^
		|
class MobilePhone : public Phone {
	void connectWireless();
	void recharge();
};
		^
		|
class MusicPhone : public MobilePhone {
	void downloadMusic();
	void play;
};

상속의 목적과 장점
1. 간결한 클래스 작성 
동일한 코드가 여러 클래스에 중복되면 클래스의 유지 보수에 번거로운 일이 일어난다. 
상속은 클래스들 가이의 중복을 제거하여 클래스를 간결하게 구현할 수 있게 한다. 

2. 클래스 간의 계층적 분류 및 관리의 용이함
서로 관련된 클래스를 계층 관계로 표현함으로써, 프로그램에 존재하는 클래스들의 구조적인 관계 파악을 쉽게 해준다. 

3. 클래스 재사용과 확장을 통한 소프트웨어의 생산성 향상
상속의 가장 큰 장점은 소프트퉤어의 생산성을 향상하는데 있다.
상속은 기존에 작성해 놓은 클래스를 상속받고 기능을 확장하여 
새로운 소프트웨어를 빠른 시간 내에 만들어낼 수 있게 한다.
소프트웨어 생산성이 높아진다. 

상속 선언
class 선언 뒤에 콜론(:)과 기본 클래스 이름을 선언하면 된다. 
이때 기본 클래스 이름 앞에 반드기 상속 접근을 지정해야 하는데
public, private, protected 중 어떤 것도 가능하다.
*/

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

class ColorPoint : public Point { // 2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoint, Point를 상속받음
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
	Point p;
	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}