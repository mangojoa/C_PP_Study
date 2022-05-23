/*
STL �˰��� ����ϱ�
STL �˰����� ���� �Լ��ν� STL �����̳� Ŭ������ �ɹ� �Լ��� �ƴϸ�
���ø����� �ۼ��Ǿ� �ִ�. 

STL �˰��� �Լ��� iterator�� �Բ� �۵��Ѵ�. 

STL sort() �Լ��� ��� ���� 

vector<int> v;

...
sort(v.begin(), v.begin()+3); // v.begin()���� v.begin()+2���� ó�� 3�� ���� ����
sort(v.begin()+2. v.begin()+5); // ������ 5��° ���ҿ��� v.begin()+4���� 3�� ���� ����
sort(v.begin(), v.end()); // ���� ��ü ����

sort() �Լ��� �� ���� �Ű� ������ ������ �ִ�. 
ù ��° �Ű� ������ ������ ������ ���ҿ� ���� iterator �ּҸ�,
�� ��° �Ű� ������ ������ ���� ������ iterator �ּҸ� �־�� �Ѵ�. 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;

	cout << "5���� ������ �Է��ϼ��� >> ";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	vector<int>::iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
}