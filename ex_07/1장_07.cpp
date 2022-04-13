#include <iostream>
#include <string>
using namespace std;

int main() {
	string exitcmd;

	while (true) {
		cout << "이 프로그렘을 끄고 싶다면 '나는 빡빡이다' 를 써라 >> ";

		getline(cin, exitcmd);

		if (exitcmd == "나는 빡빡이다") {
			cout << "이걸 작성해버리네 .... 종..료 ..... 됩니다......(덜컥)";
			break;
		}
	}
}