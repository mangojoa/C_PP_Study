/* [22.03.01] �������̵��� �������� ������(::) 
�������̵��� ���� ���õǰ� ���簨�� ����� �⺻ Ŭ������ ���� �Լ��� �� �̻� ������ �� ������?
�׷� ���� �ƴϴ� .. 

���� ���� ������(::)�� �̿��Ͽ� �⺻ Ŭ������ ���� �Լ��� ȣ���� �� �ִ�. 

���� ���� �����ڸ� �̿��� �⺻ Ŭ������ ���� �Լ� ȣ��
(���� ���� �����ڸ� �̿��Ͽ� �⺻ Ŭ���� Shape�� ���� �Լ��� ���� ���ε����� ȣ���ϴ� ���)
*/

#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--" << endl;
	}
};

class Circle : public Shape {
public:
	int x;
	virtual void draw() {
		Shape::draw(); // �⺻ Ŭ������ draw() ȣ�� => ���� ���ε� �߻� 
		cout << "Circle" << endl; 
	}
};

int main() {
	Circle circle;
	Shape* pShape = &circle;

	pShape->draw(); // ���� ���ε� �߻� => draw()�� virtual�̹Ƿ� ! 
	pShape->Shape::draw(); // ���� ���ε� �߻�, ���� ���� �����ڷ� ����
}