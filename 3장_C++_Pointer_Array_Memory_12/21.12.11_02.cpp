#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25 �� ���� ���� ���ڿ��� �Է��ϼ��� >>" << endl;
	getline(cin, s, '\n'); // ���ڿ� �Է�
	int sum = 0;
	int startIndex = 0;
	while (true) {
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) { // '+' �� ã�� ���ߴٸ� ���� ( ��ǻ� ������ ó�� �κ� )
			string part = s.substr(startIndex);
			if (part == "") break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = fIndex - startIndex; // count�� + ������ �ε��� ��ġ ����
		string part = s.substr(startIndex, count); // + ������ �ε��� ���� ����

		cout << part << endl; // �ε��� ���� ���
		sum += stoi(part); // �ε��� ���� ���� �ջ�
		startIndex = fIndex + 1; // ���ο� �ε��� �������� ����
	}
	cout << "���ڵ��� �� = " << sum;
}