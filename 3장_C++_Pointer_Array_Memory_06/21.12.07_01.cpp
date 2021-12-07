/*
배열의 동적 할당 및 반환
new와 delete 연산자로 배열을 할당 받고 반환할 수 있다.

1. 배열의 동적 할당/반환의 기본 형식

배열을 동적으로 할당받고 반환하는 new와 delete의 구문
데이터타입 *포인터변수 = new 데이터타입[배열의 크기];
delete[] 포인터변수
*/

#include <iostream>
using namespace std;

int main() {
	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n; // 정수의 개수 입력

	if (n <= 0) { return 0; }

	int* p = new int[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수 >> "; // 프롬프트 출력
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}

	cout << "평균 = " << sum / n << endl;

	delete[] p; // 배열 메모리 반환
}

/*
배열을 초기화할 때 주의 사항

new로 배열을 동적 할당받을 때 다음과 같이 생성자를 통해 직접 '초기값'을 지정할 수 있다.
int *pArray = new int[10][20]; 구분 오류, 배열의 초기화는 불가
int *pArray = new int[20][10]; 구문 오류
*/

/*
배열을 delete할 때 주의사항

배열을 반환할 때 delete 연산자의 사용에 다음과 같이 주의해야 한다.
int *p = new int[10];
delete p; // 비정상 반환 delete[] p; 로 해야한다. (반대도 해당)
*/