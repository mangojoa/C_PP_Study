/* 제네릭 스텍의 제네릭 타입을 포인터나 클래스로 구체화 */

#include <iostream>
#include <String>
using namespace std;

template <class T>
class MyStack {
	int tos;
	T data[100]; 
public:
	MyStack();
	void push(T element); 
	T pop(); 
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

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	void show() { cout << '(' << x << ', ' << y << ')' << endl; }
};

int main() {
	MyStack<int*> ipStack; 
	int* p = new int[3];
	for (int i = 0; i < 3; i++) p[i] = i * 10;
	ipStack.push(p);
	int* q = ipStack.pop();
	for (int i = 0; i < 3; i++) cout << q[i] << ' ';
	cout << endl;
	delete[] p;

	MyStack<Point> pointStack;
	Point a(2, 3), b;
	pointStack.push(a);
	b = pointStack.pop();
	b.show();

	MyStack<Point*> pStack;
	pStack.push(new Point(10, 20));
	Point* pPoint = pStack.pop();
	pPoint->show();

	MyStack<string> stringStack;
	string s = "c++";
	stringStack.push(s);
	stringStack.push("java");
	cout << stringStack.pop() << ' ';
	cout << stringStack.pop() << endl;



}