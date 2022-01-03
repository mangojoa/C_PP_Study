/*
���� ������ 

��ü�� ���� ����� ���� ����

���� ����
���� ��ü�� ��Ҹ� ���� ���� �״�� �纻 ��ü�� ����ǹǷ�, �纻�� ���� �޸� �Ҵ��� �Ǿ��ִٸ� 
�޸𸮸� �����ϰ� �ȴ�

���� ���� 
������ �����Ͱ� ����Ű�� �޸𸮱��� �����Ͽ� ������ �纻�� ������ �޸𸮸� ����Ű�Ƿ� 
������ ���簡 �̷������.

��ä�� ���� ���� ������
������ �纻�� ������ ��ü ��� �����ͷ� ���ڿ� �迭�� �����ϰ� �ֱ� ������ �纻 ��ü������ ���ڿ��� 
�����ϸ� ���� ���ڿ��� ����Ǵ� ������ �߻��Ѵ�. 
�׷��⿡ �����ϸ� ���� ���簡 �Ͼ�� �ʵ��� �ؾ��Ѵ�.

���� ���� �� ���� ������
���� ������ ��ü�� ������ �� ���� ��ü�� �����Ͽ� �����Ǵ� ���ν�,
C++���� ���� ���� �ÿ��� ����Ǵ� Ư���� ���� �����ڰ� �ִ�. 

class ClassName {
	ClassName(const ClassName& c); // ���� ������
}

���� �������� �Ű� ������ ���� �ϳ��̸�
�ڱ� Ŭ������ ���� ������ ����ȴ�.
���� ���� �����ڴ� Ŭ������ ���� �Ѱ��� ������ �� �ִ�.

class Circle {
	........
	Circle(const Circle& c); // ���� ������ ����
	........
};

Circle::Circle(const Circle& c) { // ���� ������ ����
	........
}
*/

#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(const Circle& c); // ���� ������ ����
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle(const Circle& c) {
	this->radius = c.radius; // ���� ������ ����
	cout << "���� ������ ���� radius = " << radius << endl;
}

int main() {
	Circle src(30); // src ��ü�� ���� ������ ȣ��
	Circle dest(src); // dest ��ü�� ���� ������ ȣ��

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dest.getArea() << endl;
}