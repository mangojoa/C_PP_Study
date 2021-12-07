/*
동적 메모리 할당 및 반환을 위해 C++에서는 new와 delete 연산자를 이용한다.

new 연산자는 힙(heap)이라는 공간으로부터 메모리를 할당받고, 
delete 연산자는 할당받은 메모리를 힙으로 반환한다.

new와 delete 연산자 

기본 문법의 구조
데이터타입 *포인터변수 = new 데이터타입;
delete 포인터변수;

new 연산자는 '데이터타입'의 크기만큼 힙으로부터 메모리를 할당받고 주소를 리턴한다.
그 결과 '포인터변수'는 할당받은 메모리의 주소를 가진다.

delete 연산자는 '포인터변수'가 가리키는 메로리를 힙으로 반환한다. 
'데이터타입'은 int, char, double 등 기본 타입뿐 아니라 구조체(struct), 클래스(class)도 포함된다.
*/


/*
동적 메모리를 할당박도 반환하는 간단한 코드

공간할당
int* pint = new int;
char* pchar = new char;
Circle* pcircle = new Circle();

공간반환
delete pint;
delete pchar;
delete pcircle; 
*/

/*
힙 메모리가 부족하면 new는 NULL을 리턴하므로, new의 리턴 값이 NULL인지 검사하는 것이 좋다.

int *p = new int; 힙으로부터 int 타입의 정수 공간 할당
if (!p) { p가 NULL 이라면 
	return; 메모기 할당받기 실패
}
*p = 5; 할당받은 정수 공간에 5 기록
int n = *p; 할당받은 정수 공간에서 값 읽기 n = 5
delete p; 할당받은 정수 공간 반환
*/

/*
동적 할당 메모리 초기화

new를 이용하여 메모리를 할당받을 때, 다음과 같이 '초기값'을 지정하여 초기화할 수 있다. 
데이터타입 *포인터변수 = new 데이터타입(초기값);

int *pint = new int(20);
char *pchar = new char('a');
*/

/*
delete 사용시 주의 

delete로 메모리를 반환할 때 적절하지 못한 포인터를 사용하면, 실행 오류가 발생한다. (중복 반환도 포함)

int n;
int *p = &n;
delete p; 실행오류, p가 가리키는 메모리는 동적 할당받은 것이 아님
*/

#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int; // int 타입 1개 할당
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;
}