// cout과 << 연산자를 이용하여, 1에서 100까지 정수를 다음과 같이 한 줄에 10개씩 출력하라. 각 정수는 탭으로 분리하여 출력하라

#include <iostream>

using namespace std;

int main() {
    for (int a = 1; a < 101; a++ ) {
        cout << a << '\t';

        if (a % 10 == 0) {
            cout << '\n';
        }
    }
}