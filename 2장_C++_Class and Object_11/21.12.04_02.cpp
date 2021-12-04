/*
C++ 프로그램의 소스 코드는 다음과 같은 원칙으로 분리하여 작성하는 것이 바람직하다.

1. 클래스마다 선언부의 헤더파일에, 구현부는 cpp파일에 분리하여 작성한다.
2. main() 등 함수나 전역 변수는 한 개 이상의 cpp파일에 나누어 작성한다.

클래스의 선언부와 구현부를 헤더 파일과 cpp 소스 파일로 분리하면 전체 프로그램을 관리하기 쉽고 클래스를 재사용하기 쉽다.
클래스를 활용하는 코드들은 클래스에 대한 선언이 필요하므로, 클래스의 선언부가 들어 있는 헤더 파일만 include 하여 사용하면 된다.

Circle.h 클래스 선언부
Circle.cpp 클래스 구현부
main.cpp main() 함수 등 나머지 코드
*/

#include <iostream>
using namespace std;

#include "Circle.h" // Circle.h 에 선언한 클래스의 선언부를 include 해오는 부분 

int main() {
	Circle dount;
	double area = dount.getArea();
	cout << "dount 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

}