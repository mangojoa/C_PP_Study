#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main() {
    string name;
    string age;
    char address[100];
    
    cout << "이름 >> ";
    cin >> name;

    cout << "주소 >> ";
    cin.getline(address, 100);

    cout << "나이 >> ";
    cin >> age;

    cout << "이름은 " << name << "\n";
    cout << "주소는 " << address << "\n";
    cout << "나이는 " << age << "\n";
}