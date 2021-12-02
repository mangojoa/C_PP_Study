#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char a[20];

    while (true) {
        cout << "종료하고 싶다면 yes를 입력하세요 >> ";
        cin.getline(a, 20, '\n');

        if (strcmp(a, "yes")) {
            cout << "종료합니다....";
            break;
        }
    }
}