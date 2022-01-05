// 중복된 생성자들을 디폴트 매개 변수를 이용한 간소화 연습

/* 기존 함수 의 중복을 간소화 해보자
class MyVector {
	int* p;
	int size;
public:
	MyVector() {
		p = new int[100];
		size = 100;
	}

	MyVector(int n) {
		p = new int[n];
		size = n;
	}
	~MyVector() { delete [] p; }
};
*/

#include <iostream>
using namespace std;

class MyVector {
	int* p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() { delete[] p; }
};

int main() {
	MyVector* v1, *v2;
	v1 = new MyVector();
	v2 = new MyVector(1024);
	
	delete v1;
	delete v2;
}