/*
소멸자 => 객체가 소멸되는 시점에서 자동으로 호출되는 클래스의 맴버 함수이다.
1. 객체가 사라질 때 필요한 마무리 작업을 위함이다. 
	동적으로 할당받은 메모리를 운영체제에게 돌려주거나 파일을 저장하고 닫거나, 연결된 네트워크를 해제하는 등 
	객체가 사라지기 전에 필요한 조치를 하도록 하기 위함이다.
2. 클래그 이름 앞에 ~를 붙인다. 
	Circle::~Circle() { --- } 
3. 리턴 타입이 없으며 어떤 값도 리턴해서도 안된다. 
	어떤 값도 리턴해서는 안된다. 
4. 오직 한 개만 존재하며 매개 변수를 가지지 않는다. 
	생성자와 달리 한 클래스에 한 개만 존재하며 매개 변수를 가지지 않는다. 
5. 소멸자가 선언되어 있지 않으면 기본 소멸자가 자동으로 생성된다.
	기본 생성자와 같은 개념이다. 
*/

#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); 
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() { // ~소멸자 구현
	cout << "반지름 " << radius << " 의 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle pizza;
	Circle dount(30);
	return 0; // main() 함수가 종료되면 main() 함수의 스택에 생성된 dount, pizza 객체가 소멸됩니다. 
}