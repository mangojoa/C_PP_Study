/* 문자열을 저장하는 백터 만들기 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> sv;
	string name;

	cout << "이름 5개를 입력하세요 >> " << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " >> ";
		getline(cin, name);
		sv.push_back(name);
	}

	name = sv.at(0);

	for (int i = 0; i < sv.size(); i++) {
		if (name < sv[i]) name = sv[i]; // sv[i]의 문자열이 name보다 사전에서 뒤에 나온다면
			// name을 sv[i]로 문자열을 변경
	}

	cout << "사전에서 가장 뒤에 나오는 이름은 >> " << name << endl;
}