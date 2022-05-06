/* 제네릭 클래스
template을 이용하면 제네릭 클래스도 만들 수 있다.

제네릭 클래스 선언
이를 만들기 위해, 클래스 건언부와 구현부를 모두 template으로 선언된다.
제네릭 클래스의 맴버 함수는 자동 제네릭 함수이다.

## 제네릭 클래스 선언부
스텍에서 다루는 데이터 타입은 하나이므로 제니릭 타입은 T 하나만 필요하다.

template <class T>
class MyStack {
	int tos;
	T data [100]; // T타입의 배열 스텍에 최대 100까지
public:
	MyStack();
	void push(T element); // T타입 원소 element를 data[]에 푸시
	T pop(); // 스텍의 탑에 있는 원소를 data[]에서 팝하여 리턴
};

## 제네릭 클래스 구현부
클래스 구현부는 맴버함수를 작성하는 곳으로, 클래스 이름을 MyStack 대신 MyStack<T>로 사용하고,
각 맴버 함수 앞에 template <class T>를 붙여서 제네릭 함수임을 선언한다.

template <class T>
void  MyStack<T>::push(T element) {
	...
}

template <class T>
void  MyStack<T>::pop() {
	...
}

## 제네릭 클래스의 구체화
제네릭 클래스를 이용할 때는 클래스의 이름과 함께 제네릭 타입 T에 적용된 구체적인 타입을 지정해야한다.

MyStack<int> iStack;
MyStack<double> dStack;

이후 컴파일러는 이 선언문으로부터 다음과 같은 구체화 과정을 진행한다.
1. MyStack템플릿의 T에 int나 double을 적용하여 두 개의 구체화된 버전의 C++ 클래스 소스를 생성한다.
2. 두 C++ 클래스를 컴파일하고 iStack 객체와 dStack 객체를 생성하도록 컴파일한다.

iStack.push(3);
int n = iStack.pop();

dStack.push(3.5);
double d = dStack.pop();

포인터를 이용하여 선언할 수도 있다. 

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
	T data[100]; // T타입의 배열 스텍에 최대 100까지
public:
	MyStack();
	void push(T element); // T타입 원소 element를 data[]에 푸시
	T pop(); // 스텍의 탑에 있는 원소를 data[]에서 팝하여 리턴
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