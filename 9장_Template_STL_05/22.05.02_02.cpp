/* �迭�� �� ���ϱ� 
�迭�� �Ű� ������ �޾� ���� ���ϴ� add()�Լ� �����
add()�� int �迭�� ���� ���� �ְ�, double �迭�̳� long �迭�� ���� ���� �ִ�.
*/

#include <iostream>
using namespace std;

template <class T>
T add(T data[], int n) { // Ÿ�� T�� ���� data���� n���� ���Ҹ� ���� ��� ����

	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += data[i];
	}
	return sum; // sum ������ Ÿ�԰� ���� Ÿ���� ��� T�� ����Ǿ� �ִ�.
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2,2.3,3.4,4.5,5.6 };

	cout << "sum of x[] = " << add(x, 5) << endl;
	cout << "sum of d[] = " << add(d, 6) << endl;

}