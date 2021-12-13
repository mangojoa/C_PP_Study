/*
인자 전달 방식에 대해 알아보자
값에 의한 호출(call by value)
호출하는 코드에서 넘겨주는 실인자 값이 함수의 매개 변수에 복사되어 전달되는 방식
주소에 의한 호출(call by address)
주소를 직접 포인터 타입의 매개 변수에 전달받는 방식
*/

#include <iostream>
using namespace std;

// call by value
void swap(int a, int b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

// call by address
void change(int *a, int *b) {
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	// call by value
	int m = 2, n = 9;
	swap(m, n);
	cout << m << ' ' << n;

	// call by address
	int o = 2, p = 9;
	change(&o, &p);
	cout << o << ' ' << p;
}

/*
call by value 
실인자 값을 복사하여 전달하므로, 함수 내에서 실인자를 손상시킬 수 없는 장점이 있다. 
그러므로 함수 호출에 따른 부작용(side-effect)은 업ㄱ다
call by address
실인자의 주소를 넘겨주어 의도적으로 함수 내에서 실인자의 값을 변경하고자 할 때 이용된다.
*/