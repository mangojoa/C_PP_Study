/* STL �Լ� for_each() �� �̿��� ������ ��� ���� ��� */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//void print(int n) {
// 	cout << n << " ";
//}
// ���ٽ� ������� ���� ���� void print(int n)�� ������� �ʾƵ� �ȴ�.

int main() {
	vector <int> v = { 1,2,3,4,5,6,7,8,9 };

	// ���⿡ ���ٽ��� ����Ѵٸ� ?
	for_each(v.begin(), v.end(), [](int n) {cout << n << " ";});
}