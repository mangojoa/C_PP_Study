/*
객체 배열의 동적 생성 및 반환
new와 delete를 이용하면 객체 배열을 동적 생성하고 반환할 수 있다.

객체 배열의 동적 생성과 생성자 
클래스이름 *포인터변수 = new 클래스 이름 [배열 크기];
Circle *pArray = new Circle[3];

객체 배열의 동적 생성과 동시에 초기화 방법
Circle *pArray = new Circle[3] { Circle(1), Circle(2), Circle(3) }; 

객체 배열의 사용
pArray[0].setRadius(10);
pArray[1].setRadius(20);
pArray[2].setRadius(30);
for (int i = 0; i < 3; i++) 
	cout << pArray[i].getArea(); 배열의 i 번째 객체의 getArea() 맴버 함수 호출

포인터를 사용
pArray->setRadius(10);
{pArray+1}->setRadius(20);
{pArray+2}->setRadius(30);
for (int i = 0; i < 3; i++)
	cout << {pArray+i}->getArea();

배열의 반환과 소멸자
delete [] 포인터변수;
delete [] pArray;
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	// Circle(int r);
	~Circle() {  }
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	// cout << "생성자 실행 radius = " << radius << endl;
}

/*
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}
*/

int main() {
	/* 배열의 동적 생성 및 반환
	Circle* pArray = new Circle[3];

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << endl;
	}
	Circle *p = pArray; // 포인터 p에 배열의 주고값 설정
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++; // 다음 원소의 주소로 증가
	}

	delete[] pArray; // 객체 배열 반환
	*/

	// 응용
	cout << "생성하고자 하는 원의 개수 >> ";
	int n, radius;
	cin >> n;
	if (n <= 0) return 0; 
	Circle *pArray = new Circle[n]; // n개의 Circle 배열 생성
	for (int i = 0; i < n; i++) {
		cout << "원" << i + 1 << ": "; // 프롬프트 출력
		cin >> radius; // 반지름 입력
		pArray[i].setRadius(radius); // 각 Circle 객체를 반지름으로 초기화
	}

	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {
		cout << p->getArea() << ' '; // 원의 면적 출력
		if (p->getArea() >= 100 && p->getArea() <= 200) 
			count++;
		p++;
	}
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 >> " << count << endl;
	delete[] pArray;
}