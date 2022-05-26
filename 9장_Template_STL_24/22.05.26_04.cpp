/* STL 함수 for_each() 를 이용한 백터의 모든 원소 출력 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//void print(int n) {
// 	cout << n << " ";
//}
// 람다식 사용으로 인해 이제 void print(int n)은 사용하지 않아도 된다.

int main() {
	vector <int> v = { 1,2,3,4,5,6,7,8,9 };

	// 여기에 람다식을 사용한다면 ?
	for_each(v.begin(), v.end(), [](int n) {cout << n << " ";});
}