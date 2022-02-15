/* [22.02.13] 다중상속 
다중 상속은 하나의 파생 클래스가 여러 클래스를 동시에 상속받는 것이다. 
다중 상속을 통해 여러 기능을 통합한 클래스를 만들 수 있다. 

다중 상속의 예시 

class MP3 {
public:
	void play();
	void stop();
};

class MobilePhone {
public:
	bool sendCall();
	bool receiveCall();
	bool sendSMS();
	bool receiveSMS();
};

class MusicPhone : public MP3, public MobilePhone { // 다중 상속 선언
public:
	void dial();
};

*/

#include <iostream>
using namespace std;
class Adder {
protected:
	int add(int a, int b) { return a + b; }
};

class Subtractor {
protected:
	int minus(int a, int b) { return a - b; }
};

class Calculator : public Adder, public Subtractor {
public:
	int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
	int res = 0;
	switch (op) {
	case '+': res = add(a, b); break; // Adder의 add() 호출
	case '-': res = minus(a, b); break; // Subtractor의 minus() 호출
	}
	return res;
}

int main() {
	Calculator handCalculator;
	cout << "2+4=" << handCalculator.calc('+', 2, 4) << endl;
	cout << "100-4=" << handCalculator.calc('-', 100, 4) << endl;
}