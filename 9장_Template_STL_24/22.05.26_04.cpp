/* STL 함수 for_each() 를 이용한 백터의 모든 원소 출력 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int n) {
	cout << n << " ";
}

int main() {
	vector <int> v = { 1,2,3,4,5,6,7,8,9 };

	for_each(v.begin(), v.end(), print);
}