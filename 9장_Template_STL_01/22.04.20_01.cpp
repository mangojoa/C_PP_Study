#include <iostream>
using namespace std;

/* [22.04.20] 일반화와 템플릿
매개 변수 타입만 다른 중복된 a() 함수들을 일반화시킨 틀(template)을 만들고
이 틀로부터 매개 변수 타입을 지정하여 찍어내듯이 a() 함수를 만들수 있다. 

즉, template 키워드를 이용하면, 중복 함수들을 일반화 시킨 특별한 함수를 만들 수 있다. 
이 함수를 보통 템플릿 함수(template function) or 제네릭 함수(generic function)이라 부른다. 
*/

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

int main() {

	/*
	* 언듯 본다면 매개변수가 중복되지 않은 함수 중복의 일반화로 보인다
	* 하지만 a() 함수를 계속 중복 작성한다면, 전체 프로그램의 길이도 늘어나고,
	* 작업 도중 실수의 가능성도 있으며, 함수의 알고리즘을 수정하게 되면
	* 중복된 모든 함수들의 코드를 수정해야하는 번거로움이 생긴다.
	*/

	int x = 4, y = 5;
	a(x, y);
	cout << x << '\t' << y << endl;

	double x = 2.05; y = 491.1;
	a(x, y);
	cout << x << '\t' << y << endl;
	
}