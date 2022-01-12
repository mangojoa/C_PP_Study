/* [22.01.12] 다른 클래스 전체를 프랜드로 선언
다른 클래스의 모든 맴버 함수를 클래스의 프렌드 함수로 한 번에 선언할 수 있다.
다음 코드는 RectManager 클래스를 Rect 클래스에 프랜드로 초대한다. 
class Rect {
	.......
	friend RectManager; // RectManager 클래스의 모든 함수를 프렌드를 초대
};
*/

#include <iostream>
using namespace std;

class Rect;

class RectManager { // Rectmanager 클래스 선언
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect { // Rect 클래스 선언
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend RectManager; // RectManager 클래스의 모든 함수를 프랜드 함수 선언
};

bool RectManager::equals(Rect r, Rect s) { // r와 s가 같으면 true 리턴
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

void RectManager::copy(Rect& dest, Rect& src) { // src를 dest에 복사
	dest.width = src.width;
	dest.height = src.height;
}

int main() {
	Rect a(3, 4), b(5, 6);
	RectManager man;

	man.copy(b, a); // a를 b에 복사한다.
	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}