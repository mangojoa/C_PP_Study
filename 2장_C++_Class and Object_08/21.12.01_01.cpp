/*
���������� 

private / public / protected ���� �����Ѵ�.

private �ɹ�
Ŭ���� ���� �ɹ� �Լ��鿡�Ը� ������ ���ȴ�.

public �ɹ� 
Ŭ���� ���ܸ� �����ϰ� ���α׷��� ��� �Լ��鿡�� ������ ���ȴ�.

protected �ɹ�
Ŭ���� ���� �ɹ� �Լ��� �� Ŭ������ ��ӹ��� �Ļ� Ŭ������ �ɹ� �Լ����Ը� ������ ���ȴ�.

class Sample {
private: default ������ 
	
public:

protected:

}
*/

#include <iostream>
using namespace std;

class Circle {
private: 
	int radius;

public: // �ɹ������� ��ȣ�� ���� ���Ѵ�.
	// int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int r) {
	radius = r;
}

int main() {
	Circle waffle;
	waffle.radius = 5; // ����� �ɹ��� ������� ������ �� �ִ�. 
	// private �ȿ� ������ �����̱⿡ ������� ������ �� ����. 
}

