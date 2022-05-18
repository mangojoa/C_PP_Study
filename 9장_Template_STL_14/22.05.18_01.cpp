/* Vector 컨테이너 활용 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v; // 정수만 삽입 가능한 백터

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\t';
	}
	cout << endl;

	v[0] = 10;
	int m = v[2];
	v.at(2) = 5;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\t';
	}
	cout << endl;

}