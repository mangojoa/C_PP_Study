/* 표준 템플릿 라이브러리(STL)의 활용
STL이란? 템플릿으로 작성된 많은 제네릭 클래스와 함수 라이브러리
이 안의 제네릭 함수나 클래스를 이용하면 보다 쉽게 C++ 프로그렘을 구축할 수 있다.

이에 대표적으로 3가지 종류로 분류된다.

1. 컨테이너 Container 템플릿 클래스
데이터를 저장하고 검색하기 위해 담아두는 자료 구조로 구현한 클래스로서
리스느, 큐, 스택, 맵, 셋, 백터 등이 있다.

2. iterator 컨테이너 원소에 대한 포인터
반복자라고 불리는 것인데, 컨테이너의 원소들을 하나씩 순회 접근하기 위해 만들어진
컨테이너 원소에 대한 포인터이다.
원소를 읽거나 기록하거나 둘 다 가능한 포인터 등 3가지의 포인저가 존재한다.

3. 알고리즘 템플릿 함수
컨테이너의 원소에 대한 복사, 검색, 삭제, 정렬등의 기능을 구현한 템플릿 함수로서 통칭하여 알고리즘이라고 한다.

-----------------------------------------------

자 그럼 여기서 Vector 컨테이너를 활용해보자 
이는 가변 길이 배열을 구현한 제네릭 클래스이다. 
Vector는 내부에 배열을 가지고 원소를 저장, 삭제, 검색하는 맴버들을 제공한다.
Vector는 스스로 내부 크기를 조절하므로, 개발자가 Vector의 크기에 대해 고민할 필요가 없어진다. 

#Vector 객체 생성
vector<int> v; // int 차닙의 값만 다루는 백터 객체 생성

v 는 오직 int 타입만 다루므로 다른 타입의 값을 삽입하면 오류가 발생한다.

#vector에 원소 삽입
벡터에 값을 삽입하기 위해서는 push_back() 맴버 함수를 이용해야한다. push_back()은 삽입되는 값을 백터의 맨 마지막에 삽입한다.
v.push_back(1);
v.push_back(2);
v.push_back(3);

#vector의 원소 값 읽기 및 변경
v.at(2) = 5; // v의 3번째 원소 값을 5로 변경
int n = v.at(1); // v의 2번째 원소값을 읽어 n에 저장

!!잘 보면 vector의 경우, [] 연산자가 작성되어 있기 때문에 백터를 배열처럼 쉽게 사용할 수 있다. 
v[2] = 5;
int n = v[1];

#vector의 원소 삭제
백터에 들어 있는 원소를 개별적으로 삭제하는 맴버함수로 erase()가 있지만
erase()는 iterator와 함께 사용해야한다. 
vector<int> ::iteractor it; // it은 정수 백터의 원소를 가리키는 포인터
it = v.begin(); // it는 백터 v의 첫 번째 원소를 가리킨다.
it = v.erase(it); // 백터 v에서 첫 번째 원소를 삭제한다.

erase(it)은 it가 가리키는 원소를 삭제한 후, 백터의 원소들을 다시 앞으로 한 자리씩 이동시킨다.
그리고 삭제된 다음 원소를 가리키는 포인터를 리턴한다.
그러므로 erase(it) 후에는 다음과 같이 반드시 it이 리턴 값으로 치환되어야 한다.

it = v.erase(it); // 삭제 후 erase()의 리턴 갑으로 it 재실행

push_back(element)					백터의 마지막에 element 추가
at(int index)						index 위치의 원소에 대한 참조 리턴
begin()								백터의 첫 번째 원소에 대한 참조 리턴
end()								백터의 끝을 가리키는 참조 리턴
empty()								백터가 비어 있으면 true 리턴
erase(iterator it)					백터에서 it가 가리키는 원소 삭제, 삭제 후 자동으로 백터 조절
insert(iterator it, element)		백터 내 it 위치에 element 삽입
size()								백터에 들어 있는 원소의 개수 리턴
operator[]()						지정된 원소에 대한 참조 리턴
operator=()							이 백터를 다른 백터에 치환(복사)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\t';
	}
	cout << endl;

	v[0] = 10;
	int m = v[2];
	v.at(2) = 5;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\t';
	}
	cout << endl;
}