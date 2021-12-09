/*
String Ŭ���� 
string�� ���ڿ��� �����ϴ� ���ۿ� �Բ�, ���ڿ��� �ٷ�� �پ��ϰ� ������ �Լ��� �����ڵ��� �ɹ��� ������ �����Ƿ�
�����ڵ��� C-��Ʈ������ ���� ���ڿ��� �ٷ� �� �ִ�.

string Ŭ������ ����ϱ� ���ؼ��� 
#include <string>
using namespace std;

string Ŭ������ ���ڿ��� ũ�⿡ ���߾� ������ �޸� ũ�⸦ ���� �ϹǷ� ����ϱ� �ſ� ���ϴ�.
*/

/*
string ��ü ���� �� ���

string ��ü ����
�پ��ϰ� ���ڿ��� ������ �� �ִ�. ���ڿ��� ũ�⿡�� ������ ����.

string str; �� ���ڿ��� ���� ��Ʈ�� ��ü
string address("���� ����� 516-5"); ���ڿ� ���ͷ��� �ʱ�ȭ
string copyaddress(address); address�� ������ copyAddress ����

C-��Ʈ��(char [] �迭)���κ��� ��Ʈ�� ��ü ����
char text[] = {'L', 'o', 'v', 'e', '\0'}; 
string title(text); 
*/

/*
string ��ü�� ���� ����
��Ʈ�� ��ü ���� new �� delete �����ڸ� �̿��Ͽ� �������� �����ϰ� ��ȯ

string *p = new string("C++"); ��Ʈ�� ��ü ���� ����
delete p; ��Ʈ�� ��ü ��ȯ
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	string address("���� ����� 516-5");
	string copyAddress(address); // address�� ���ڿ��� ������ ��Ʈ�� ��ü ����

	char test[] = { 'L', 'o', 'v', 'e', '\0' };
	string title(test);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}