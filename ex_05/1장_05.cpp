#include <iostream> 
using namespace std;

int main() {
	
	char BD[100];
	int cnt = 0;
	
	cout << "���ڵ��� �Է��϶�(100�� �̸�) >> ";

	cin.getline(BD, 100, '\n');

	for (int a = 0; a < 100; a++) {
		if (BD[a] == 'x') cnt++;
	}

	cout << "x�� �� �� ���Ǿ��°� ? >> " << cnt << "�� ��� �Ǿ����ϴ�!";
}