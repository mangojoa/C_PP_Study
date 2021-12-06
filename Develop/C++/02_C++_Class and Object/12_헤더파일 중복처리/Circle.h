#pragma once

/*
조건 컴파일 문의 상수(CIRCLE_H)는 다른 조건 컴파일 상수와 충돌을 피하기 위해 
클래스의 이름으로 하는 것이 좋다. 
#ifndef / #endif => 조건 컴파일 문 Circle.h를 여러 번 include 해도 문제없게 하기 위함
*/

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

#endif // !CIRCLE