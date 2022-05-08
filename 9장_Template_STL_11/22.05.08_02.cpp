/* 두 개 이상의 제네릭 타입을 자긴 제네릭 클래스 구현하기

템플릿을 사용하여 2개 이상의 제네릭 타입을 가진 제네릭 클래스를 만들 수 있다.

template <class T1, class T2, class T3>
*/

#include <iostream>
using namespace std;

template <class T1, class T2> class GClass {
	T1 data1;
	T2 data2;
public:
	GClass();
	void set(T1 a, T2 b);
	void get(T1& a, T2& b);
};

template <class T1, class T2> GClass<T1, T2>::GClass() {
	data1 = 0; data2 = 0;
}

template <class T1, class T2> void GClass<T1, T2>::get(T1& a, T2& b) {
	a = data1;
	b = data2;
}

int main() {
	int a;
	double b;
	GClass<int, double> x;
	x.set(2, 0.6);
	x.get(a, b);
	cout << "a = " << a << '\t' << "b = " << b << endl;

	char c;
	float d;
	GClass<char, float> y;
	y.set('m', 12.9);
	y.get(c, d);
	cout << "c = " << c << '\t' << "d = " << d << endl;
}


