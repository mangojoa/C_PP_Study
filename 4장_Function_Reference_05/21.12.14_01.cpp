/*
������ �Լ� 

���� ������ �����ϱ� ���ؼ��� &��ȣ�� ����Ѵ�. &�� �����ڶ�� �θ���.
���� ������ �̹� ����� ������ ���� �����̴�. 
���� �� �ݵ�� ���� ������ �ʱ�ȭ �Ͽ��� �Ѵ�. 

int n=2;
int &refn = n; // refn�̶�� n�� ���� ���� refn = n

Circle circle;
Circle &refc = circle // refc��� circle�� ���� refc = circle

���� ������ ����Ǹ� ���� ���� �̸��� �����Ǹ� ������ ������ �Ҵ���� �ʴ´�. ��� ���� ������ �ʱ�ȭ�� 
������ ���� ������ ������ �����Ѵ�. 

���� ������ ���
���� ������ �����ϸ�, ���� ������ ���� ����� �ٷ� ���� ������ ����̴�.

int n = 1;
refn = 3;
n = 5;  
refn++; // n �� refn�� ���������� 6�� ��

���������� �����Ͱ� �ƴϹǷ� ������ �����ڰ� ���Ǹ� ������ ������ �߻��Ѵ�.
refc->setRadius(30); // ������ ������ �߻� refc.setRadius(30);���� �ؾ� �Ѵ�.

���� ������ ���� �����͸� ���� �� �ִ�.
int *p = &refn;
*p = 20;

���� ���� ���� �� ���ǻ���
1. �ʱ�ȭ�� ���ٸ� ������ ������ �߻��Ѵ�.
2. ������ &�� ��ġ�� �����ϴ�. 
3. ������ &��뿡 �����ؾ� �Ѵ�.
4. ���� ������ �迭�� ���� �� ����.
5. ���� ������ ���� ���� ������ �����ϴ�.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {

	// ��ü�� ���� ����
	Circle circle;
	Circle& refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea() << endl; // �� ȣ���� ������ ��ü�� ���� ȣ���̴�.

	// �⺻ Ÿ�� ������ ���� ���� 

	cout << "i" << "\t" << "n" << "\t" << "refn" << endl;
	int i = 1;
	int n = 2;
	int& refn = n;
	n = 4;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i;
	refn++; 
	cout << i << '\t' << n << '\t' << refn << endl;

	int* p = &refn;
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << endl;
}