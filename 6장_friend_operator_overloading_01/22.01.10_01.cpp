/* [22.01.10] friend 키워드
클래스 내에 friend 키워드로 선언된 외부 함수를 프랜드 함수라고 부르며,
프랜드 함수는 마치 클래스의 맴버인 것처럼 클래스의 모든 변수나 함수에 접근할 수 있다.

프랜드 함수의 필요성 

클래스 맴버 함수로는 적합하지 않지만, 클래스의 private, protected 맴버를 접근해서 해야하는 특별한 경우,
이 함수를 외부 함수로 작성하고 프랜드로 선언한다.
프랜드 함수가 가장 유용하게 사용되는 대표적인 경우가 연산자 함수이다.

1. 클래스 외부에 작성된 함수를 프랜드로 선언
2. 다른 클래스의 맴버 함수를 프랜드로 선언
3. 다른 클래스의 모든 맴버 함수를 프랜드로 선언

프랜드 함수 선언
클래스 외부에 작성된 함수를 클래스 내에 프랜드로 선언하는 방법
클래스 외부에 구현된 함수를 friend 키워드로 클래스 내외 아무 곳에나 선언하면 된다.

class Rect {
	......
	friend bool equal(Rect r, Rects); // 함수 equal()를 프랜드 함수로 선언
}
*/

#include <iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s); // equal 선언

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend  bool equals(Rect r, Rect s); // 프랜드 함수 선언
};

bool equals(Rect r, Rect s) { // 외부 함수
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}