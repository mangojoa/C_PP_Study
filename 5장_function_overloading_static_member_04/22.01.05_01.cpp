// ����Ʈ �Ű� ������ ���� �Լ� ����� ����

#include <iostream>
#include <cstring>
using namespace std;

// ���� ���� (����Ʈ �Ű� ���� ����)
void f(char c = ' ', int line = 1);

// �Լ� ����
void f(char c, int line) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++)
			cout << c;
		cout << endl;
	}
}

int main() {
	f();
	f('&');
	f('@', 5);
}

/* [22.01.05] ������ ������ ����Ʈ ��
������ ����� ����Ʈ �Ű� ������ ������ �� �ٸ��� ���� ����Ʈ ���� �� �� �ִ�.
void f(int *p = NULL); 
void g(int x[] = NULL);
void h(const char *s = "Hello");
*/