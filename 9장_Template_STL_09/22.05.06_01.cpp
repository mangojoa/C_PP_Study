/* ���׸� Ŭ����
template�� �̿��ϸ� ���׸� Ŭ������ ���� �� �ִ�.

���׸� Ŭ���� ����
�̸� ����� ����, Ŭ���� �Ǿ�ο� �����θ� ��� template���� ����ȴ�.
���׸� Ŭ������ �ɹ� �Լ��� �ڵ� ���׸� �Լ��̴�.

## ���׸� Ŭ���� �����
���ؿ��� �ٷ�� ������ Ÿ���� �ϳ��̹Ƿ� ���ϸ� Ÿ���� T �ϳ��� �ʿ��ϴ�.

template <class T>
class MyStack {
	int tos;
	T data [100]; // TŸ���� �迭 ���ؿ� �ִ� 100����
public:
	MyStack();
	void push(T element); // TŸ�� ���� element�� data[]�� Ǫ��
	T pop(); // ������ ž�� �ִ� ���Ҹ� data[]���� ���Ͽ� ����
};

## ���׸� Ŭ���� ������
Ŭ���� �����δ� �ɹ��Լ��� �ۼ��ϴ� ������, Ŭ���� �̸��� MyStack ��� MyStack<T>�� ����ϰ�,
�� �ɹ� �Լ� �տ� template <class T>�� �ٿ��� ���׸� �Լ����� �����Ѵ�.

template <class T>
void  MyStack<T>::push(T element) {
	...
}

template <class T>
void  MyStack<T>::pop() {
	...
}

## ���׸� Ŭ������ ��üȭ
���׸� Ŭ������ �̿��� ���� Ŭ������ �̸��� �Բ� ���׸� Ÿ�� T�� ����� ��ü���� Ÿ���� �����ؾ��Ѵ�.

MyStack<int> iStack;
MyStack<double> dStack;

���� �����Ϸ��� �� �������κ��� ������ ���� ��üȭ ������ �����Ѵ�.
1. MyStack���ø��� T�� int�� double�� �����Ͽ� �� ���� ��üȭ�� ������ C++ Ŭ���� �ҽ��� �����Ѵ�.
2. �� C++ Ŭ������ �������ϰ� iStack ��ü�� dStack ��ü�� �����ϵ��� �������Ѵ�.

iStack.push(3);
int n = iStack.pop();

dStack.push(3.5);
double d = dStack.pop();

�����͸� �̿��Ͽ� ������ ���� �ִ�. 

MyStack<char> *p = new MyStack<char>();
p->push();
char c = p->push();
delete p;
*/

#include <iostream>
using namespace std;

template <class T>
class MyStack {
	int tos;
	T data[100]; // TŸ���� �迭 ���ؿ� �ִ� 100����
public:
	MyStack();
	void push(T element); // TŸ�� ���� element�� data[]�� Ǫ��
	T pop(); // ������ ž�� �ִ� ���Ҹ� data[]���� ���Ͽ� ����
};

template <class T>
MyStack<T>::MyStack() {
	tos = -1;
}

template <class T>
void  MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T  MyStack<T>::pop() {
	T retData;
	if (tos == -1) {
		cout << "stack empty";
		return 0;
	}
	retData = data[tos--];
	return retData;
}

int main() {
	MyStack<int> iStack;
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack;
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char>* p = new MyStack<char>();
	p->push('a');
	cout << p->pop() << endl;
	delete p;
}