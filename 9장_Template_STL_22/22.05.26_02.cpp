/* ĸ�� ����Ʈ�� ���� Ÿ���� ������ ���ٽ� ����� 
���ٽ���, ĸ�� ����Ʈ�� �̿��Ͽ� �ֺ��� non-static ������(���� / ���� ����)�� ����
���� �����Ͽ� �ްų� ������ Ȱ���� �� �ִ�. 
*/

#include <iostream>
using namespace std;

int main() {
	double pi = 3.14;

	auto clac = [pi](int r) -> double { return pi * r * r; };

	cout << "������ " << clac(3);
}