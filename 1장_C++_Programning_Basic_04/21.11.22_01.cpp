#include <iostream>
#include <string>

using namespace std;
/*
 C++ ���ڿ�

string Ŭ���� : ���ڿ��� ��ü�� �ٷ�� ��� / �����ϴ� ���

#include <iostream>
#include <string> <- include �� ���� <string> �� �߰��ؾ� �Ѵ�. 

���ڿ��� ũ�⿡ ������ ���� ������ string Ŭ������ �� ��ȣ�Ѵ�. 
*/
int main() {

	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song << "�� �θ� ������";
	cout << "(hint : ù ���ڴ� " << elvis[0] << ") ?";

	getline(cin, singer); // ���ڿ� �Է�
	if (singer == elvis) {
		cout << "�� ġ�µ� ...?";
	}
	else {
		cout << "�ٺ��� �𸣳� ... " << elvis << "�ݾ� �� �����.." << endl;
	}

}