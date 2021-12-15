/*
참조와 함수 

참조 변수를 선언하기 위해서는 &기호를 사용한다. &를 참조자라고 부른다.
참조 변수는 이미 선언된 변수에 대한 별명이다. 
선언 시 반드시 원본 변수로 초기화 하여야 한다. 

int n=2;
int &refn = n; // refn이라는 n의 별명 설정 refn = n

Circle circle;
Circle &refc = circle // refc라는 circle의 별명 refc = circle

참조 변수가 선언되면 참조 변수 이름만 생성되며 별도의 공간을 할당되지 않는다. 대신 참조 변수는 초기화로 
지정된 원본 변수의 공간을 공유한다. 

참조 변수의 사용
보통 변수와 동일하며, 참조 변수에 대한 사용은 바로 원본 변수의 사용이다.

int n = 1;
refn = 3;
n = 5;  
refn++; // n 과 refn은 최종적으로 6이 됨

참조변수는 초인터가 아니므로 포인터 연산자가 사용되면 컴파일 오류가 발생한다.
refc->setRadius(30); // 컴파일 오류가 발생 refc.setRadius(30);으로 해야 한다.

참조 변수에 대한 포인터를 만들 수 있다.
int *p = &refn;
*p = 20;

참조 변수 선언 시 주의사항
1. 초기화가 없다면 컴파일 오류가 발생한다.
2. 참조자 &의 위치는 무관하다. 
3. 참조자 &사용에 유의해야 한다.
4. 참조 변수의 배열을 만들 수 없다.
5. 참조 변수에 대한 참조 선언이 가능하다.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {

	// 객체에 대한 참조
	Circle circle;
	Circle& refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea() << endl; // 두 호출은 동일한 객체의 대한 호출이다.

	// 기본 타입 변수에 대한 참조 

	cout << "i" << "\t" << "n" << "\t" << "refn" << endl;
	int i = 1;
	int n = 2;
	int& refn = n;
	n = 4;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i;
	refn++; 
	cout << i << '\t' << n << '\t' << refn << endl;

	int* p = &refn;
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << endl;
}