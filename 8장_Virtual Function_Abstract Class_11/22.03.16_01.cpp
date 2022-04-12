/* [22.03.16] 추상 클래스를 상속받는 파생 클래스 구현 */

#include <iostream>
using namespace std;

class Calculator {
	void input() {
		cout << "정수 2 개를 입력하세요 >> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; // 두 정수의 합 리턴

public: 
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};

class Adder : public Calculator {
protected:
	int calc(int a, int b) { // 순수 가상 함수 구현
		return a + b;
	}
};

class Subtractor : public Calculator {
protected:
	int calc(int a, int b) { // 순수 가상 하수 구현
		return a - b;
	}
};

int main() {
	Adder adder;
	Subtractor subtravtor;
	// 기본적으로 Calculator를 상속받은 두 클래스는 상속받은 클래스의 virtual 함수를 순수가상 함수로 구현하여
	// 이를 자신들이 새롭게 사용한 개념이다. 

	adder.run();
	subtravtor.run();

	/*
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}

	상속을 기본적으로 받고 있기에 run() 에 해당하는 함수는 실행하게 된다면 안에서
	input()이 작동하여 Calculator의 동작을 수행하고 있다.
	*/
}