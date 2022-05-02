/* 배열의 합 구하기 
배열을 매개 변수로 받아 합을 구하는 add()함수 만들기
add()는 int 배열을 더할 수도 있고, double 배열이나 long 배열을 거할 수고 있다.
*/

#include <iostream>
using namespace std;

template <class T>
T add(T data[], int n) { // 타입 T의 벼열 data에서 n개의 원소를 합한 결과 리턴

	T sum = 0;
	for (int i = 0; i < n; i++) {
		sum += data[i];
	}
	return sum; // sum 변수의 타입과 리턴 타입이 모두 T로 선언되어 있다.
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2,2.3,3.4,4.5,5.6 };

	cout << "sum of x[] = " << add(x, 5) << endl;
	cout << "sum of d[] = " << add(d, 6) << endl;

}