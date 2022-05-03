/* 그렇다면 char 배열의 경우에도 print() 함수를 이용하여 숫자를 출력할 수는 없는걸까?

char 배열의 정수를 출력하는 print()를 템플릿 함수와 중복 작성하면 된다.

템플릿 함수와 이름이 동일한 함수가 중복되어 있을 때, 
컴파일러는 중복된 함수를 템플릿 함수보다 우선하여 바인딩한다.

char 배열의 값을 숫자로 출력하기 위해 함수 print(char array[], int n) 를 작성해보자
*/

#include <iostream>
using namespace std;

template <class T>
void print(T array[], int n) {
	for (int i = 0; i < n; i++) {
		cout << array[i] << '\t';
	}
	cout << endl;
}

void print(char array[], int n) { // 템플릿 함수와 동일한 이름의 함수 중복
	for (int i = 0; i < n; i++) {
		cout << (int)array[i] << '\t'; // array[i]를 int 타입으로 케스팅하여 정수 출력
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