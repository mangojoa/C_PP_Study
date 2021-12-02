#include <iostream>

using namespace std;

int main() {
    char a[100];
    int cnt = 0;

    cout << "문자들을 입력하라(100개 미만) >> ";

    cin.getline(a, 100, '\n');

    for (int m = 0; m < 101; m++) {
        if (a[m] == 'x') {
            cnt++;
        }
    }

    cout << "X의 갯수는 " << cnt << "개 입니다.";

}