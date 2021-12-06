/*
헤더파일 중복 include 할 때 생기는 문제점 
cpp파일에서 클래스가 선언된 페더 차일을 여러번 include하면, 중복선언으로 인해 컴파일 오류가 발생할 수 있다.
#include "Circle.h"
#include "Circle.h" // 컴파일 오류 발생
#include "Circle.h" // 컴파일 오류 발생
Circle.h 헤더 파일에 조건 컴파일 문을 삽입하면 된다. 
*/

#include <iostream>
using namespace std;

/*
여러 번을 하더라도 컴파일 오류가 없다.
main() 함수의 첫 번째 #include "Circle.h"이 처리될 때,
다음 문에의해 CIRCLE_H 상수가 정의된다
#define CIRCLE_H
*/
#include "Circle.h"
/*
그리고 클래스 Circle의 선언부가 main.cpp에 확장된다.
main() 함수의 두 번째 #include "Circle.h"이 처리될 때,
CIRCLE_H 상수가 이미 정의되어 있기 때문에, 
다음 조건 컴파일 문의 값이 false가 되어 #endif 문 밖으로 빠져나오게 된다. 
그러므로  Circle 클래스의 선언부는 main.cpp에 확장되지 않는다. 
#ifndef CIRCLE_H
*/
#include "Circle.h"
/*
main() 함수의 세 번째 #include "Circle.h" 문은 두 번째 include 문과 동일한 방식으로 처리된다.
결국 처음 #include "Circle.h" 문만 처리되고 나머지 include문은 처리되지 않게 되어, 
Circle 클래스의 선언부가 한 번만 main.cpp에 확장된다.
*/
#include "Circle.h"

int main() {
	
	Circle dount;
	double area = dount.getArea();
	cout << "dount 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

}