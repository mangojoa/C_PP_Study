/*
참조리턴

C++에서는 함수가 참조를 리턴할 수 있다. 참조리턴이랑 변수 등과 같이 현존하는 공간에 대한 참조의 리턴이다.
*/

#include <iostream>
using namespace std;

char& find(char s[], int index) {
	return s[index];
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S';
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't';
	cout << name << endl;

}