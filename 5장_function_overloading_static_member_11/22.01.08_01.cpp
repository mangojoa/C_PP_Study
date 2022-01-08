/* [22.01.08] static 의 활용 
전역변수나 전역 함수를 클래스에 캡슐화 
객체 지향 언어에서 추구하는 핵심 가치가 캡슐화이다. 
전역 함수나 전역 변수를 없애고 모든 함수나 변수를 클래스 안에 선언하도록 한다.
C++는 전역 변수와 전역 함수를 사용하는 C언어와의 호환성때문에 100% 캡슐화하지 못한다.

되도록이면 전역 변수와 전역 함수를 선언하지 말고, 클래스에 static 맴버로 선언하여 모두 캡슐화를 추천한다.

이렇게 클래스로 캡슐화되어 있지 않고 전역 함수들이 존재하는 좋지 않는 코드 사례
int abs(int a) { return a>0?a:-a; }
int max(int a, int b) { return (a>b)?a:b; }
int min(int a, int b) { return (a>b)?b:a; }
*/

#include <iostream>
using namespace std;

class Math {
public:
	static int abs(int a) { return a > 0 ? a : -a; }
	static int max(int a, int b) { return (a > b) ? a : b; }
	static int min(int a, int b) { return (a > b) ? b : a; }
};

int main() {
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
}