/*
auto 와 람다식

@@ auto를 이용한 쉬운 변수 선언

변수 선언문으로부터 변수의 타입을 추론하여 결정하도록 지시한다. 
auto는 복잡한 형식의 변수 선언을 간소하게 해주며, 타입 선언의 오타나 번거로움을 줄일 수 있게 한다. 

기본 사례
auto p1 = 3.14; // 3.14는 실수 = double 타입으로 선언하게 해준다

auto n = 3; // 3은 정수 = int 타입으로 선언하게 해준다
auto *p = &n; // 변수 p는 int* 타입으로 자동 선언

int n = 10;
int &ref = n;
auto ref2 = ref; // ref2는 int* 타입으로 자동 선언

@@ 함수의 리턴 타입으로부터 추론하여 변수 타입 선언 

int square(int a) { return x*x; }
...
auto ret = square(3); // 변수 ret는 int 타입으로 자동 선언

컴파일러는 square()의 리턴타입이 int 이므로 변수 ret의 타입을 int로 추론한다.
square() 함수가 double을 리턴하는 함수로 수정되면 변수 ret의 타입도 double타입으로 자동 결정되는데 
여기서 auto는 코드의 수정에 따른 오류 가능성을 낮추는 효과가 있다.

@@ STL 템플릿에 활용
auto를 vector, map등의 템플릿에 사용하면 복잡한 변수 선언을 간소화할 수 있다.

vector<int> v = {1,2,3,4,5}; 

iterator를 이용하여 벡터 v의 원소를 출력하려면
vector<int>::iterator it;
for (it = v.begin(); it != v.end(); it++) {
	cout << *it << endl;
}
기존의 방법대로 라면 이렇게 작성해야 한다.
하지만 auto를 이용하게 되는 순간

for (auto it = v.begin(); it != v.end(); it++) {
	cout << *it << endl;
}

기존의 방법에서 선언한 vector<int>::iterator it; 을 생략해도 된다.
*/

