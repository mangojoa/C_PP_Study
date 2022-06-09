/* [22.06.09] 포멧 입출력
## 포멧플래그?
C++ 입출력 스트림은 32개의 포멧 플래스를 저장하는 맴버 변수를 두고, 이를 참조하여 포멧 입출력한다.
포멧 플래그는 모든 입출력 스트림에서 공통으로 사용되므로, ios클래스에 정수형 상수로 정의되어 있다. 

하나의 플래스는 한 비트로 표현되며 한 가지 포멧 정보를 표현한다.
cin 이나 cout은 입출력 시 이 포멧 변수에 세팅된 플래그 값을 방여하여 포멧 입출력을 수행한다. 

그러므로 포멧 변수를 적절히 설정하면 입출력 포멧을 제어할 수 있다. 

포멧을 지정하는 함수는 setf()
지정된 플래그를 해제하는 함수는 unsetf() 이다. 

long setf(long flags)
flags를 스트림의 포맷 플래그로 성정하고 이전 플래그를 리턴한다.

long unsetf(long flags)
flags에 설정된 비트 값에 따라 스트림의 포멧 플래그를 해제하고 이전 플래그를 리턴한다. 
*/

#include <iostream>
using namespace std;

int main() {
	cout << 30 << endl;

	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
	cout << 30 << endl;

	cout.setf(ios::showbase);
	cout << 30 << endl;

	cout.setf(ios::uppercase);
	cout << 30 << endl;

	cout.setf(ios::dec | ios::showpoint);
	cout << 23.5 << endl;

	cout.setf(ios::scientific);
	cout << 23.5 << endl;

	cout.setf(ios::showpos);
	cout << 23.5 << endl;

}