/* �׷��ٸ� char �迭�� ��쿡�� print() �Լ��� �̿��Ͽ� ���ڸ� ����� ���� ���°ɱ�?

char �迭�� ������ ����ϴ� print()�� ���ø� �Լ��� �ߺ� �ۼ��ϸ� �ȴ�.

���ø� �Լ��� �̸��� ������ �Լ��� �ߺ��Ǿ� ���� ��, 
�����Ϸ��� �ߺ��� �Լ��� ���ø� �Լ����� �켱�Ͽ� ���ε��Ѵ�.

char �迭�� ���� ���ڷ� ����ϱ� ���� �Լ� print(char array[], int n) �� �ۼ��غ���
*/

#include <iostream>
using namespace std;

template <class T>
void print(T array[], int n) {
	for (int i = 0; i < n; i++) {
		cout << array[i] << '\t';
	}
	cout << endl;
}

void print(char array[], int n) { // ���ø� �Լ��� ������ �̸��� �Լ� �ߺ�
	for (int i = 0; i < n; i++) {
		cout << (int)array[i] << '\t'; // array[i]�� int Ÿ������ �ɽ����Ͽ� ���� ���
	}
	cout << endl;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	print(x, 5);
	print(d, 5);

	char c[5] = { 1,2,3,4,5 };
	print(c, 5);
}

/*
���ø� �Լ��� ����Ʈ �Ű� ���� ���

���ø����� �Լ� ���� ����Ʈ �Ű� ������ ����� �� �ִ�.
template <class T1, class T2>
void mcopy(T1 src [], T2 dest [], int n) { // n�� ����Ʈ ���� 5
	for(int i = 0; i < n; i++) {
		dest[i] = (T2)src[i];
	}
}

mcopy()�� ����Ʈ �Ű� ������ Ȱ���Ͽ� ������ ���� ȣ���� �� �ִ�.
int x[] = { 1,2,3,4,5 };
double d[5];
mcopy(x, d); // x[]�� ���� 5 ���� d[]�� ����
*/