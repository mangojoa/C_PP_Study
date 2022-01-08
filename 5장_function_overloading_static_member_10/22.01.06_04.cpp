/* [22.01.06] static 맴버
static은 변수와 함수의 생명주기와 사용범위를 지정하는 방식 중 하나로서, static으로
선언된 변수와 함수의 생병 주기와 사용 범위는 다음과 같은 특징을 가진다.

1. 생명주기 - 프로그램이 시작할 때 생성되고 프로그램이 종료할 때 소멸
2. 사용범위 - 변수나 함수가 선언된 범위 내에서 사용, 전역 혹은 지역으로 구분

non-static 맴버는 각 객체마다 별도로 생성되므로 instance 맴버라고 부르며 
static 맴버는 클래스당 하나만 생기고 모든 객체들이 공유하므로 class 맴버라고 부른다. 

class Pweson {
public:
	[non-static 맴버]
	맴버는 객체마다 별도 생성 => 인스턴스 맴버
	객체와 생명을 같이한다. / 공유되지 않는다.
	int money;
	void addMoney(int money) {
		this->money += money;
	}

	[static 맴버]
	맴버는 클래스 당 하나 생성 - 객체 내부가 아닌 별도의 공간에 생성 => 클래스 맴버
	프로그렘과 생명을 같이한다. / 동일한 클래스의 모든 객체들에 의해 공유된다. 
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};
	// static 변수 공간 할당, 반드시 프로그램의 전역 공간에 선언
int Person::sharedMoney = 10; // sharedMoney를 10 으로 초기화

static 맴버 사용 : 객체의 맴버로 접근하는 방법
static 맴버는 객체 이름이나 객체 포인터를 이용하여 보통 맴버와 동일하게 다루면 된다.
객체.static맴버
객체포인터 -> static맴버

Person lee;
lee.sharedMoney = 500;

Person *p;
p = &lee;
p->addShared(200); 

static 맴버 사용 : 클래스명과 범위지정 연산자(::)로 접근
static 맴버는 클래스 당 하나만 존재하므로 클래스의 이름으로도 접근 할 수 있으며,
클래스 이름과 static 맴버 사이에 범위 지정 연산자(::)를 사용하여 static 맴버를 접근한다. 
Person::sharedMoney = 200; // 클래스명으로 접근
Person::addShared(200); // 클래스명으로 접근

객체이름으로 sharedMoney와 addShared() 맴버를 접근하는 코드로 클래스명에 접근할 수 있다. 
lee.sharedMoney = 500;
han.addShared(200);

그러나 non-static 맴버는 클래스명으로 접근할 수 없다. 
Person::money = 100;
Person::addMoney(100);
non-static 맴버는 클래스명으로 접근 불가하다

non-static 맴버는 알다시피 객체의 이름이나 포인터로만 접근 가능하다.
lee.money = 100;
Person *p = &lee;
p->addMoney(200);
*/

#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};

int main() {
	Person::addShared(40);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 500;
	Person::addShared(100);

	cout << han.money << Person::sharedMoney << endl;
	
}