/*
묵시적 복사 생성 
묵시적인 복사 생성의 경우는 다음 3가지로서, 컴파일러가 복사 생성자를 자동으로 호출하는 경우이다.

1. 객체로 초기화 하여 객체가 생성될 때
son 객체를 생성할 때 father 객체로 초기화 하도록 하는 선언문
Person son = father; // 복사 생성자 자동 호출

컴파일러는 이 문장을 다음과 갗이 변환하여 복사 생성자를 호출
Person son(father); // 치환문과 혼돈하지 말자.

2. 값에 의한 호출로 객체가 전달될 때
값에 의한 호출로 객체가 전달되면 함수의 매개 변수 객체가 생성될 때 복사 생성자가 자동으로 호출된다. 

coid f(Person person) { // 매개 변수 person이 생성될 때 복사 생성자 호출
	.........
}
Person father(1, 'Kotae'); 
f(father); // 값에 의한 호출로 father 객체 전달

함수 f()가 호출되어 매개 변수 person이 생성될 때, 
다음과 유사한 모양으로 복사 생성자가 호출되도록 컴파일 된다.
Person person(father); // 복사 생성자 호출 

전에는 값에 의한 호출로 매개 변수 객체가 생성될 때, 생성자가 실행되지 않는다고 하였다. 
생성자 대신 복사 생성자가 실행된다.
그리고 복사 생성자가 구현되지 않은 경우, 컴파일러가 삽입한 디폴트 생성자가 실행된다.

3. 함수가 객체를 리턴할 때
함수가 객체를 리턴할 때, return 문은 리턴 객체의 복사본을 생성하여 호출한 곳으로 전달한다. 

Person g() {
	Person mother(2, "Jane");
	return mother; // mother의 복사본을 생성하여 복사본 리턴 // 사본이 만들어질 때 복사 생성자 호출
}

g(); <- 복사본이 여기로 전달 된다. 
*/

#include <iostream>
using namespace std;

class Person { // Person 클래스 선언 
	char* name;
	int id;
public:
	Person(int id, const char* name); // 생성자
	Person(const Person& person); // 복사 생성자
	~Person(); // 소멸자
	void changeName(const char* name);
	void show() { cout << id << "," << name << endl; }
};

void f(Person person) {
	person.changeName("dummy"); // 2번
}

Person g() {
	Person mother(2, "Jane");
	return mother; // 3번
}

int main() {
	Person father(1, "Kitea");
	Person son = father; // 1번
	f(father);
	g();
}