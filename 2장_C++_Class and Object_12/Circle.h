#pragma once

/*
���� ������ ���� ���(CIRCLE_H)�� �ٸ� ���� ������ ����� �浹�� ���ϱ� ���� 
Ŭ������ �̸����� �ϴ� ���� ����. 

#ifndef / #endif => ���� ������ �� Circle.h�� ���� �� include �ص� �������� �ϱ� ����
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


