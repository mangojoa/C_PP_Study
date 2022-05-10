/* 문자열을 저장하는 백터 구현 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> sv;
	string name;

	cout << "이름을 5개 입력해봐 >> " << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}

	name = sv.at(0); 
	for (int i = 1; i < sv.size(); i++) {
		if (name < sv[i]) name = sv[i];
	}

	cout << "사전에서 가장 뒤에 나오는 이름은 [" << name << "] 입니다" << endl;
}