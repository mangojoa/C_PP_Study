/*
C++ Struct(����ü)

ǥ�� C ����ü�� ����� Ȯ���Ͽ� Ŭ������ ������ ������ ����� ������
C++����ü�� struct Ű����� �����ϸ� �ɹ� ������ �ɹ� �Լ��� ������ ���� ������ �ؾ��Ѵ�.
*/

#include <iostream>
using namespace std;

struct  structName {
private:

public:

protected:
};

/*
C++ ����ü�� ��ü ���� 

Ŭ���� ��ü ���� ��İ� ���� ����ü Ÿ�� �ڿ� ��ü�̸��� �����ϸ� �ȴ�. 
������ structName Ÿ���� ��ü stObj�� �����ϴ� ���̴�.
*/

structName stObj; // structName Ÿ���� ����ü ��ü ���� 

/*
����ü�� Ŭ������ ������ 

C++ ����ü�� Ŭ������ ��������� �����ϴ�.
�ɹ���� �Ӹ� �ƴ϶� �����ڿ� �Ҹ��ڸ� ����� �ɹ� �Լ��� ���� �� ������ 
�ٸ� ����ü�� Ŭ�������� ��� �����ϰ� �ٸ� ����ü�� Ŭ������ ��ӹ��� ���� �ִ�. 
�ɹ����� ���� �����ڷ� �����Ǹ� �ɹ� Ȱ�� ��� ���� Ŭ������ ���� �����ϴ�.

���� �� ���� �ٸ����� Ŭ������ ����Ʈ ���� ������ private
����ü�� ����Ʈ ���� ������ public�̴�. 
�̴� C���� ȣȯ���� ����, ��� �ɹ����� �������� C����ü�� C++���� �����ϱ� ���ؼ��̴�. 
*/

struct StructCircle { // ����ü�� ���� 
private:
	int radius;
public:
	StructCircle(int r) { radius = r; } // ����ü�� ������.
	double getArea();
};

double StructCircle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	StructCircle waffle(3);
	cout << "������ " << waffle.getArea();
}