#include <iostream>
/*
C++ 프로그레밍 과정에서 이름(identifier)이 충돌하는 경우가 있다.
협업을 하는 경우 다양한 이름을 생성하면서 충돌이 발생하곤 한다.
이를 방지 하기 위해 이금 공간을 생성할 수 있도록 namespase 키워드를 도입
서로 다른 공간 안에 건언된 이름들은 별개의 이름으로 취급되기 때문에, 
각 개발자가 자신만의 이름 공간을 사용하면 이름 충돌을 막을 수 있다.
*/
using namespace std;

/*
std:: 란 ?? 표준 이름 공간을 의미한다. 
응용 프로그램이 C++ 표준 라이브러리에서 선언된 이름을 사용할 때, std::를 접두어로 붙여야 한다.
하지만  using namespace std; 를 선언하면 
지시어 아래 모든 코드에서 cout을 생략할 수 있다. 
*/

int main() {

	/*
	cin 과 >> 연산자를 이용한 키 입력
	<iostream> 안에 cin 과 >> 연산자가 파일 안에 있다. 
	cin은 키보드와 C++ 응용프로그램을 연결하는 C++ 표준 입력 스트임 객체이다.
	응용 프로그램은 cin 객체로부터 입력된 키 값을 읽는다. 
	>>은 스트림 추출 연산자로 불리며 왼쪽 피연산자인 스트림 객체로부터 데이터를 읽어 
	오른쪽 피연산자에 지정된 변수에 삽입한다. 
	C++의 기본 연산자이지만 <iostream> 헤더 파일에 스트림 추출 연산자로 
	재정의(overloading)되어 있다. 
	실행문 중간에 변수 선언
	C++ 에서도 프로그렘 어디서나 변수 선언이 가능하다.
	*/
	cout << "너비를 입력하세요 >> ";
	int width;
	cin >> width; // 키보드로부터 정수 값 너비를 읽어 width 변수에 저장

	cout << "높이를 입력하세요 >> ";
	int height;
	cin >> height; // 키보드로부터 정수 값 높이를 읽어 height 변수에 저장

	int area = width * height; // 면적을 계산 
	cout << "면적은 >> " << area << endl;

	return 0;
}