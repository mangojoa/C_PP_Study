/* [22.01.12] 프렌드 맴버 선언 (다른 클래스의 맴버 함수를 클래스의 프렌드 함수)
class Rect {
	......
	friend bool RectManager::equals (Rect r, Rect s); //  RectManager와 equals() 맴버함수를 프렌드로 초대
}
이렇게 함으로써 RectManager 클래스의 맴버 함수 equals(Rect r, Rect s)는 Rect 클래스의 모든 맴버를 접근할 수 있다.
*/

#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
	bool equals(Rect r, Rect s);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend  bool RectManager::equals(Rect r, Rect s); // 프랜드 함수 선언
};

bool RectManager::equals(Rect r, Rect s) { // 외부 함수
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(3, 4);
	RectManager man;

	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
