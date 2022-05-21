/* iterator ���
iterator�� �����̳� �ȿ� �ִ� ���ҵ��� ������ ���������� �����ϱ� ���� ���ҿ� ���� �������̴�.
iterator�� �����Ϸ��� �����̳� ���ø��� ��ü���� Ÿ���� �����Ͽ�, ������ Ÿ���� Ʈ�������� �Ͽ��� �Ѵ�.

vector<int>�� ���ҿ� ���� iterator ������ �����ϴ� �ڵ�

vector<int> : iterator it;

it ������ int ���� ���ҷ� ������ ������ ���Ҹ� ����Ű�� �������̴�.
���� it�� � ���ҵ� ����Ű�� ���� �ʴ�. 
v.begin()�� ���� v�� ù ��° ������ �ְ� �����ϹǷ�, 

vector<int> v;
it = v.begin();

iterator�� �̿��Ͽ� ���͸� �����ϴ� �ڵ�� '++', '--' �����ڵ� ����� �� �ִ�.

int n = *it; it �� ����Ű�� ������ ���� n�� �о�´�
*it = 5; it�� ����Ű�� ���ҿ� 5�� ����

it = v.end(); ������ ���� ���� ��ġ�� ���� �����͸� it�� ����

���⼭ v.end()�� ������ ���Ұ� �ƴ϶�, ������ ���� �ٸ� ��ġ�� ���� �ּҸ� �����Ѵٴ� ���� �ָ�!!

for (it =v.begin(); it != v.end(); it++) {
	int n = *it;
	cout << n << endl;
}

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; // create vector int type
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it; // ���� v�� ���ҿ� ���� ������ it ����

	for (it = v.begin(); it != v.end(); it++) {
		int n = *it;
		n = n * 2;
		*it = n;
	}

	for (it = v.begin(); it != v.end(); it++) {
		cout << "it" << ' ';
	}
	cout << endl;
}