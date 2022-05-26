/* 캡쳐 리스트에 참조 활용, 합을 외부에 저장하는 람다식 */

#include <iostream>
using namespace std;

int main() {
	int sum = 0;

	[&sum](int x, int y) { sum = x + y; } (2, 3);

	cout << "합은" << sum;
}