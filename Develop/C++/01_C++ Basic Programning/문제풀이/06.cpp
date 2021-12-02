#include <iostream>

using namespace std;

int main() {
    
    char a;
    cout << "암호를 입력하세요 >> ";
    cin >> a;

    char b;
    cout << "암호를 다시 한 번 입력하세요 >> ";
    cin >> b;

    if (a != b) {
        cout << "암호가 다릅니다.";
    } else if (a == b){
        cout << "암호가 일치합니다.";
    }


}