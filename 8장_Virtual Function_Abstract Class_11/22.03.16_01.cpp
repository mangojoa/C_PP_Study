/* [22.03.16] �߻� Ŭ������ ��ӹ޴� �Ļ� Ŭ���� ���� */

#include <iostream>
using namespace std;

class Calculator {
	void input() {
		cout << "���� 2 ���� �Է��ϼ��� >> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; // �� ������ �� ����

public: 
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};

class Adder : public Calculator {
protected:
	int calc(int a, int b) { // ���� ���� �Լ� ����
		return a + b;
	}
};

class Subtractor : public Calculator {
protected:
	int calc(int a, int b) { // ���� ���� �ϼ� ����
		return a - b;
	}
};

int main() {
	Adder adder;
	Subtractor subtravtor;
	// �⺻������ Calculator�� ��ӹ��� �� Ŭ������ ��ӹ��� Ŭ������ virtual �Լ��� �������� �Լ��� �����Ͽ�
	// �̸� �ڽŵ��� ���Ӱ� ����� �����̴�. 

	adder.run();
	subtravtor.run();

	/*
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}

	����� �⺻������ �ް� �ֱ⿡ run() �� �ش��ϴ� �Լ��� �����ϰ� �ȴٸ� �ȿ���
	input()�� �۵��Ͽ� Calculator�� ������ �����ϰ� �ִ�.
	*/
}