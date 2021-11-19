#include <iostream> 
/*
<iostream> 헤더파일에는 C++ 표준 입출력을 위한 클래스와 객체가 선언되어 있어 
키보드 입력이나 화면 출력을 위해서는 꼭 필요하다. 

cout 객체와 << 연산자 를 사용하려면 꼭 필요하다 
*/

int main() { // main 함수는 C++ 프로그램의 실행 시작점이다. 

	int a = 1;

	int b = 2;

	std::cout << a + b;


	return 0; 
	/* 
	return이 실행되면 main() 함수가 종료하고 프로그램이 종료된다.
	필요에 따라 return 값이 0이 아닐 수 있다. 

	int main() 함수에서 return 문 생략 가능하다. (개발자의 편의를 위해(?))
	*/
}
