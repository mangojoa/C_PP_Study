/*
C++ ������ ���� �̸��� �Լ��� ���� �� ���� �� ������ �̰��� �Լ��ߺ�(function overloading)�̶�� �Ѵ�.

�Լ� �ߺ��� �������� �� ��ʷν�
���� �Լ��� �ɹ� �Լ��� ��� ����Ǹ� ��� ���迡 �ִ� �⺻ Ŭ������ �Ļ� Ŭ���� ���̿��� ���ȴ�.

�ߺ� �Լ� ���� 
1. �ߺ��� �Լ����� �̸��� �����Ͽ��� �Ѵ�.
2. �ߺ��� �Լ����� �Ű� ���� Ÿ���̳� �Ű� ������ ������ �޶�� �Ѵ�.
3. �Լ� �ߺ��� ���� Ÿ���� ������� �ʴ´�.

�Լ� �ߺ��� ���� 
�̸��� �������� ����� �ʿ� ���� �Լ��� �߸� ȣ���ϴ� �Ǽ��� ���� �� �ִ�.
*/

#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}

int big(int a[], int size) {
	int res = a[0];
	for (int i = 1; i < size; i++)
		if (res < a[i]) res = a[i];
	return res;
}

int main() {
	int array[5] = { 1,9,-2,8,6 };
	cout << big(2,3) << endl; // int big(int a, int b) ȣ��
	cout << big(array, 5) << endl; // int big(int a[], int size) ȣ��
}