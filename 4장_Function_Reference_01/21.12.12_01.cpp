/*
���� ���� ��Ŀ� ���� �˾ƺ���

���� ���� ȣ��(call by value)
ȣ���ϴ� �ڵ忡�� �Ѱ��ִ� ������ ���� �Լ��� �Ű� ������ ����Ǿ� ���޵Ǵ� ���

�ּҿ� ���� ȣ��(call by address)
�ּҸ� ���� ������ Ÿ���� �Ű� ������ ���޹޴� ���
*/

#include <iostream>
using namespace std;

// call by value
void swap(int a, int b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

// call by address
void change(int *a, int *b) {
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	// call by value
	int m = 2, n = 9;
	swap(m, n);
	cout << m << ' ' << n;

	// call by address
	int o = 2, p = 9;
	change(&o, &p);
	cout << o << ' ' << p;
}

/*
call by value 
������ ���� �����Ͽ� �����ϹǷ�, �Լ� ������ �����ڸ� �ջ��ų �� ���� ������ �ִ�. 
�׷��Ƿ� �Լ� ȣ�⿡ ���� ���ۿ�(side-effect)�� ������

call by address
�������� �ּҸ� �Ѱ��־� �ǵ������� �Լ� ������ �������� ���� �����ϰ��� �� �� �̿�ȴ�.
*/

