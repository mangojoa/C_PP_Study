/* �� ���� �Ű� �����κ��� ū �� ���ϱ� */

#include <iostream>
using namespace std;

template <class T>
T bigger(T a, T b) { // �� ���� �Ű� ���� a, b �� ���Ͽ� ū ���� ����
	if (a > b) return a;
	else return b;
}

int main() {
	int a = 23, b = 21;
	char c = 'a', d = 'b';

	cout << "bigger(20, 21)�� ������� >> " << bigger(a, b) << endl;
	cout << "bigger('a', 'b')�� ������� >> " << bigger(c, d) << endl;
}