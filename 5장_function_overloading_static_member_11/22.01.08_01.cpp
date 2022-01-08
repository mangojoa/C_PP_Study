/* [22.01.08] static �� Ȱ�� 
���������� ���� �Լ��� Ŭ������ ĸ��ȭ 
��ü ���� ���� �߱��ϴ� �ٽ� ��ġ�� ĸ��ȭ�̴�. 
���� �Լ��� ���� ������ ���ְ� ��� �Լ��� ������ Ŭ���� �ȿ� �����ϵ��� �Ѵ�.
C++�� ���� ������ ���� �Լ��� ����ϴ� C������ ȣȯ�������� 100% ĸ��ȭ���� ���Ѵ�.

�ǵ����̸� ���� ������ ���� �Լ��� �������� ����, Ŭ������ static �ɹ��� �����Ͽ� ��� ĸ��ȭ�� ��õ�Ѵ�.

�̷��� Ŭ������ ĸ��ȭ�Ǿ� ���� �ʰ� ���� �Լ����� �����ϴ� ���� �ʴ� �ڵ� ���
int abs(int a) { return a>0?a:-a; }
int max(int a, int b) { return (a>b)?a:b; }
int min(int a, int b) { return (a>b)?b:a; }
*/

#include <iostream>
using namespace std;

class Math {
public:
	static int abs(int a) { return a > 0 ? a : -a; }
	static int max(int a, int b) { return (a > b) ? a : b; }
	static int min(int a, int b) { return (a > b) ? b : a; }
};

int main() {
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
}