#include <iostream>

int main() {
	/*
	cout << 연산자를 통해서 다양한 데이터를 화면에 출력할 수 있다.
	cout는 C++ 표준 출력 스트림 객체이다.

	cout 앞에 붙여진 std::의 접두어는 cout의 이름공간(namespase)을 의미한다.

	cout 옆의 '<<'는 시프트 삽입 연산자로 불리며 오른쪽 피연산자 데이터를
	왼쪽 스트림 객체에 삽입하는 역할을 한다.
	*/
	int a = 1;

	int b = 2;

	std::cout << a + b;
	// 여러개의 << 연산자로 한문장에 여러 데이터 출력
	std::cout << "Hello!!\n" << "Would!!\n";
	// bool char short int long float double 등 다양한 데이터를 출력할 수 있다.

	char c = 'm';

	std::cout << c << '\n';

	// 화면에서 다음 줄로 넘어가기 

	std::cout << c << '\n';

	std::cout << c << std::endl; // endl 조작자를 사용해도 된다. 

	/* \n / endl 의 차이점
	\n 의 경우 << 연산자가 '\n' 문자를 cout의 스트림 버퍼에 단순히 삽입하고 끝난다.
	그 후 cout 스트림 버퍼가 꽉 차거나 강제 출력 지시가 있는 경우,
	cout은 '\n'을 해석하여 커서를 다음줄로 넘긴다.

	endl()의 경우 <iostream> 헤더 파일에 작성되어 있는 함수이다.
	<< 연산자가 endl() 함수를 호출하는 방식으로 '\n'을 cout의 스트림 버퍼에 넣고, cout에게
	현재 스트림 버퍼에 있는 데이터를 즉각 장치에 출력하도록 지시한다.
	줄을 넘기는 것과 동시에 모든 데이터를 출력 시킨다.

	*/
	return 0;
}