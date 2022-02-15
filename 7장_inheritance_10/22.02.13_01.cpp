/* [22.02.13] ���߻�� 
���� ����� �ϳ��� �Ļ� Ŭ������ ���� Ŭ������ ���ÿ� ��ӹ޴� ���̴�. 
���� ����� ���� ���� ����� ������ Ŭ������ ���� �� �ִ�. 

���� ����� ���� 

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

class MusicPhone : public MP3, public MobilePhone { // ���� ��� ����
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
	case '+': res = add(a, b); break; // Adder�� add() ȣ��
	case '-': res = minus(a, b); break; // Subtractor�� minus() ȣ��
	}
	return res;
}

int main() {
	Calculator handCalculator;
	cout << "2+4=" << handCalculator.calc('+', 2, 4) << endl;
	cout << "100-4=" << handCalculator.calc('-', 100, 4) << endl;
}