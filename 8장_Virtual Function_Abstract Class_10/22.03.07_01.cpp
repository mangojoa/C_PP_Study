/* [22.03.14] �߻� Ŭ����
���� ���� �Լ� => �Լ��� �ڵ尡 ���� ���� �ִ� �����Լ��� ���´´�.

�ɹ� �Լ��� ���� �ڿ� =0; ���� �����ϸ�, ShapeŬ������ Draw()�� ���� ���� �Լ��� �����ϸ� ������ ����.
class Shape{
public:
	virtual void draw()=0; // ���� ���� �Լ� ����
};

[�߻� Ŭ����]

�ּ� �ϳ��� ���� ���� �Լ��� ���� Ŭ������ �߻� Ŭ������� ���Ѵ�.
Shape�� ���� ���� �Լ� draw()�� ������ �ֱ� ������ �߻� Ŭ�����̴�.

class Shape { Shape�� �߻� Ŭ����
public:
	void paint() {
		draw(); // ���� ���� �Լ��� ȣ���� �� �ִ�.
	}
	virtual void draw() = 0; // ���� ���� �Լ�
};

�߻� Ŭ������ ���� �ڵ尡 ���� ���� ���� �Լ��� ������ �ֱ� ������ �ҿ����� Ŭ�����̴�. 
�׷��Ƿ� ���� ���α׷����� �߻� Ŭ������ �ν��Ͻ�(��ü)�� ������ �� ����.
Shape shape(); // ������ ����
Shape *p = new Shape(); // ������ ����

�׷��� �߻� Ŭ������ ���� �������� ������ �������� �ʴ´�.
Shape *p; // �߻� Ŭ������ ������ ����

[�߻� Ŭ������ ����]

�߻�Ŭ������ ����� ���� �⺻ Ŭ������ Ȱ���ϴ� ���� �����̴�.
���� ���� ���� �Լ��� ���� �Ļ� Ŭ������ ������ �Լ��� ������ �����ִ� �������̽� ������ �Ѵ�.
�߻� Ŭ������ ��� �ɹ� �Լ��� ���� ���� �Լ��� ������ �ʿ�� ����.
�Ϲ������� �߻� Ŭ������ ���� �ɹ��� ������ ���� �ɹ� �Լ��� �����ϰ� ��������� ����� �����.
�ٸ�, �Ļ� Ŭ�������� �����ؾ� �� �Լ��� ���� ���� �Լ��� �����Ѵ�. 

[�߻� Ŭ���� ���]
�߻� Ŭ������ ��ӹ޴� �Ļ� Ŭ������ �ڵ����� �߻�Ŭ������ �ȴ�. ���� ���� �Լ��� �״�� ��ӹޱ� �����̴�.

class Shape { // Shape�� �߻� Ŭ����
public:
	void paint() {
		draw();
	}
	virtual void draw() = 0; // ���� ���� �Լ�
};

class Circle : public Shape { // Circle�� �߻� Ŭ���� 
public:
	string toString() { return "Circle ��ü" }
};

�߻� Ŭ������ ��� ������ ��ü�� ������ �� ����.
Circle circle;
Circle *p = new Circle();

[�߻� Ŭ������ ����]

�Ļ� Ŭ������ �߻� Ŭ������ ���� ���� �Լ��� �ڵ带 �ۼ����� ���Ѵ�.
�Ļ� Ŭ������ ������ Ŭ������ �Ƿ��� ��ӹ��� �߻� Ŭ������ ��� ���� ���� �Լ��� �������̵��Ͽ� �����Ͽ��� �Ѵ�.

class Shape { // Shape�� �߻� Ŭ����
public:
	void paint() {
		draw();
	}
	virtual void draw() = 0; // ���� ���� �Լ�
};

class Circle : public Shape { // Circle�� �߻� Ŭ����
public:
	virtual void draw() { cout << "Circle"; } // ���� ���� �Լ� ����
	string toString() { return "Circle ��ü"; }
};

���� �߻� Ŭ������ �ƴϹǷ� ��ü�� ������ �� �ִ�.
Circle circle;
Circle *p = new Circle();
*/

#include <iostream>
using namespace std;

class Calculator {
	virtual int add(int a, int b) = 0;
	virtual int subtract(int a, int b) = 0;
	virtual double average(int a[], int size) = 0;
};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
	double average(int a[], int size) {
		double sum = 0;
		for (int i = 0; i < size; i++) {
			sum += a[i];
			return sum / size;
		}
	}
};

int main() {
	int a[] = { 1,2,3,4,5 };
	GoodCalc* p = new GoodCalc();
	cout << p->add(2, 3) << endl;
	cout << p->subtract(5, 2) << endl;
	cout << p->average(a, 5) << endl;
	delete p;
}

