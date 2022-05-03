/* 중복 함수가 템플릿 함수보다 우선순위이다. */
#include <iostream>
using namespace std;

template <class T>
void print(T array[], int n) {
	for (int i = 0; i < n; i++) {
		cout << array[i] << '\t';
	}
	cout << endl;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	print(x, 5);
	print(d, 5);

	char c[5] = { 1,2,3,4,5 };
	print(c, 5);
}

/*
결과값으만 본다면 int x[], double d[]의 값은 정상적으로 출력하고 있다는 것을 볼 수 있다. 
하지만 char c[]의 print() 함수의 경우, 우리가 예상하지 못한 알 수 없는 값을 출력하고 있다.

이는 제네릭 타입 T가 char 타입으로 구체화되어 라인 7에서 << 연산자가 array[i] 값을 문자로 출력한다.
그런데 1,2,3,4,5 정수 값에 해당하는 ASCII 문자가 없기 때문에, 
윈도우 운영체제의 문자 코드표에 정의된 그래픽 문자를 출력한다.
*/