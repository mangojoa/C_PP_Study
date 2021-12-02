// cout과 << 연산자를 이용하여 다음과 같이 구구단을 출력하는 프로그램을 작성하라.

#include <iostream>

using namespace std;

int main() {
    for (int a =1; a < 10; a++) {
        for (int b=1; b < 10; b++) {
            cout << b << "x" << a << "=" << b*a << '\t';
        }
        cout << '\n';
    }
}