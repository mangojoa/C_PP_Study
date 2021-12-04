/*
C++ Struct(구조체)

표준 C 구조체에 기능을 확장하여 클래스와 동일한 구조와 기능을 가진다
C++구조체는 struct 키워드로 선언하며 맴버 변수와 맴버 함수를 가지고 접근 지정도 해야한다.
*/

#include <iostream>
using namespace std;

struct  structName {
private:

public:

protected:
};

/*
C++ 구조체의 객체 생성 

클래스 객체 선언 방식과 같이 구조체 타입 뒤에 객체이름을 지정하면 된다. 
다음은 structName 타입의 객체 stObj를 생성하는 예이다.
*/

structName stObj; // structName 타입의 구조체 객체 생성 

/*
구조체와 클래스의 차이점 

C++ 구조체는 클래스와 기능적으로 동일하다.
맴버면수 뿐만 아니라 생성자와 소멸자를 비롯한 맴버 함수를 가질 수 있으며 
다른 구조체나 클래스에게 상속 가능하고 다른 구조체나 클래스를 상속받을 수도 있다. 
맴버들은 접근 지정자로 지정되며 맴버 활용 방법 또한 클래스와 완전 동일하다.

오직 한 가지 다른점은 클래스의 디폴트 접근 지정이 private
구조체의 디폴트 접근 지정이 public이다. 
이는 C언어와 호환성을 위해, 모든 맴버들이 공개적인 C구조체를 C++에서 수용하기 위해서이다. 
*/

struct StructCircle { // 구조체의 선언 
private:
	int radius;
public:
	StructCircle(int r) { radius = r; } // 구조체의 생성자.
	double getArea();
};

double StructCircle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	StructCircle waffle(3);
	cout << "면적은 " << waffle.getArea();
}