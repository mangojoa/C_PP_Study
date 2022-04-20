#include <iostream>
using namespace std;

/*
���� ���� ���� �ȵǴ� �Լ��ߺ��� ���ϱ� ���ؼ� template �Լ��� ����غ���

void a(int& x, int& y) {
	int tmp;
	tmp = x;
	x = y;
	b = tmp;
}

void a(double& x, double& y) {
	double tmp;
	tmp = x;
	x = y;
	y = tmp;
}
*/

// a(x, y)�� �Լ��ߺ��� �Ͼ �ڵ��̴�. �̸� template �Լ��� �ٲ㺸��
template <class T> // ���ø��� �����ϴ� Ű���� <���׸� Ÿ���� �����ϴ� Ű���� / ���׸� Ÿ�� ����>
void a(T& x, T& y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}
// �̷��� ������ �ߺ��Լ� a(x, y)�� �ϳ��� �������. 

int main() {
	int x = 4, y = 5;
	a(x, y);
	cout << x << '\t' << y << endl;

	double x = 2.05; y = 491.1;
	a(x, y);
	cout << x << '\t' << y << endl;
}