#include <iostream> 
using namespace std;

int main() {
	
	char BD[100];
	int cnt = 0;
	
	cout << "문자들을 입력하라(100개 미만) >> ";

	cin.getline(BD, 100, '\n');

	for (int a = 0; a < 100; a++) {
		if (BD[a] == 'x') cnt++;
	}

	cout << "x는 몇 번 사용되었는가 ? >> " << cnt << "번 사용 되었습니다!";
}