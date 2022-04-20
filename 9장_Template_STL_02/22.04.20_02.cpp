#include <iostream>
using namespace std;

/*
전에 만든 말도 안되는 함수중복을 피하기 위해서 template 함수를 사용해보자

void a(int& x, int& y) {
	int tmp;
	tmp = x;
	x = y;
	b = tmp;
}

void a(double& x, double& y) {
	double tmp;
	tmp = x;
	x = y;
	y = tmp;
}
*/

// a(x, y)의 함수중복이 일어난 코드이다. 이를 template 함수로 바꿔보자
template <class T> // 템플릿을 선언하는 키워드 <제네릭 타입을 선언하는 키워드 / 제네릭 타입 선언>
void a(T& x, T& y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}
// 이렇게 위에서 중복함수 a(x, y)를 하나로 만들었다. 

int main() {
	int x = 4, y = 5;
	a(x, y);
	cout << x << '\t' << y << endl;

	double x = 2.05; y = 491.1;
	a(x, y);
	cout << x << '\t' << y << endl;
}