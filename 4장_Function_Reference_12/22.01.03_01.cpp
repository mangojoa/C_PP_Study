/*
얕은 복사 생성자의 문제점
포인터 타입의 맴버 변수가 없는 클래스의 경우, 얕은 복사는 전혀 문제가 없다. 
모든 맴버 변수를 일대일로 복사해도 공유의 문제가 발생하지 않기 때문이다.

그러나 클래스가 포인터 맴버 변수를 가지고 있는 경우, 원본 객체의 포인터 맴버 변수가 
사본 객체의 포인터 맴버 변수에 복사되면, 이 둘은 같은 메모기를 가리키게 되어 심각한 문제를 야기한다.

예를 들어, 포인터 맴버에 동적 메모리를 할당 받은 원본 객체의 얕은 복사가 이루어지면, 
원본 객체가 할당받은 메모리를 사본 객체가 공유하게 된다. 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person 클래스 선언 
	char* name;
	int id;
public:
	Person(int id, const char* name); // 생성자
	~Person(); // 소멸자
	void changeName(const char* name);
	void show() { cout << id << "," << name << endl; }
};

Person::Person(int id, const char* name) { // 생성자
	this->id = id;
	int len = strlen(name); // name의 문자 개수
	this->name = new char[len + 1]; // name 문자열 공간 할당
	strcpy(this->name, name); // name 문자열 복사
}

Person::~Person() { // 소멸자
	if (name) // 만일 name에 동적 할당된 배열이 있으면,
		delete[] name; // 동적 할당 메모리 소멸 <- name 메모리 반환
}

void Person::changeName(const char* name) { // 이름 변경
	if (strlen(name) > strlen(this->name))
		return; // 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae"); // (1) father 객체 생성
	Person daughter(father);   // (2) daughter 객체 복사 생성, 복사 생성자 호출

	cout << "daughter 객체 생성 직후 ~~~~ " << endl;
	father.show();			   // (3) father 객체 출력
	daughter.show();		   // (3) daughter 객체 출력

	daughter.changeName("Grace");   // (4) daughter의 이름을 "Grace"로 변경
	cout << "daughter 이름을 Grace로 변경한 후 ~~~~ " << endl;
	father.show();					// (5) father 객체 출력
	daughter.show();				// (5) daughter 객체 출력

	return 0;						// (6) (7) daughter, father 객체 소멸

	/*
	daughter, father 순으로 소멸, father가 소멸할 때 프로그램이 비정상 종료됨
	*/
}
