#include <iostream>
using namespace std;

int main() {
	char name[100];
	int cnt = 0, max = 0;

	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���!" << endl;

	for (int a = 0; a < 5; a++) {
		cin.getline(name, 100, ';');
		cout << a + 1 << ' : ' << name << endl;
		
	
	
	}


}