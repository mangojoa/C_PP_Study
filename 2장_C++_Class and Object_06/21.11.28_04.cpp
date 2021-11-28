/*
�Ҹ��� => ��ü�� �Ҹ�Ǵ� �������� �ڵ����� ȣ��Ǵ� Ŭ������ �ɹ� �Լ��̴�.

1. ��ü�� ����� �� �ʿ��� ������ �۾��� �����̴�. 
	�������� �Ҵ���� �޸𸮸� �ü������ �����ְų� ������ �����ϰ� �ݰų�, ����� ��Ʈ��ũ�� �����ϴ� �� 
	��ü�� ������� ���� �ʿ��� ��ġ�� �ϵ��� �ϱ� �����̴�.

2. Ŭ���� �̸� �տ� ~�� ���δ�. 
	Circle::~Circle() { --- } 

3. ���� Ÿ���� ������ � ���� �����ؼ��� �ȵȴ�. 
	� ���� �����ؼ��� �ȵȴ�. 

4. ���� �� ���� �����ϸ� �Ű� ������ ������ �ʴ´�. 
	�����ڿ� �޸� �� Ŭ������ �� ���� �����ϸ� �Ű� ������ ������ �ʴ´�. 

5. �Ҹ��ڰ� ����Ǿ� ���� ������ �⺻ �Ҹ��ڰ� �ڵ����� �����ȴ�.
	�⺻ �����ڿ� ���� �����̴�. 
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
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::~Circle() { // ~�Ҹ��� ����
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle pizza;
	Circle dount(30);
	return 0; // main() �Լ��� ����Ǹ� main() �Լ��� ���ÿ� ������ dount, pizza ��ü�� �Ҹ�˴ϴ�. 
}