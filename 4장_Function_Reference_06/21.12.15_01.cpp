/*
call by reference
원본 변수와 참조 변수를 함께 사용하면 변수 사용이 혼란스러운 것은 사실이다. 그렇기에 
C++의 새로운 인자 전달의 방식인 '참조에 의한 호출'을 사용하자.

참조에 의한 호출은 함수의 매개 변수를 참조 타입으로 선언하여, 매개 변수가 함수를 호출하는 쪽의
실인자를 참조하여 실인자와 공간을 공유하고록 하는 인자 전달 방식이다. 
참조 타입으로 선언된 함수의 매배 변수를 참조 매개 변수라고 부른다.

void swap(int &a, int *b); 참조 매개 변수를 가진 함수의 선언 사례

swap() 함수는 두개의 참조 매개 변수 a, b를 가지며, swap() 함수에 대한 호출은 '참조에 의한 호출'이 된다.
int n = 2, m = 3;
swap(n,m); 참조에 의한 호출

값에 의한 호출과 모양이 동일하여 헷갈릴 수 있는데, 이들은 함수의 원형에 의해 구분된다.
참조 매개변수를 가진 함수에 대한 호출이 '참조에 의한 호출'이다.
*/

#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) { // 리턴 타입을 bool로 하고, 평균값을 전달하기 위해 참조 매개 변수를 추가
	if (size <= 0) return false;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	avg = sum / size;
	return true;
}

int main() {
	int x[] = { 0,1,2,3,4,5 };
	int avg;
	if (average(x, 6, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;

	if (average(x, -2, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;
}