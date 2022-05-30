/* istream�� �ɹ� �Լ��� �̿��� ���� �Է� 

istream Ŭ������ >> ������ �ܿ� �پ��� �Է� �ɹ� �Լ��� ������ �ִ�. 
>> �����ڴ� ��ĭ, ��, ������ �� ���� ����Ű�� ���� �� ������,
istream�� �ɹ��Լ��� ����ϸ� ���� ���ڸ� ���� �� �ִ�. 

## �����Է� ���ڸ� �Է� �޴� get() �Դ� ������ ���� �� ������ �����Ѵ�.
1. int get()
�Է� ��Ʈ������ ���ڸ� �о� ����, ������ EOF�� ������ -1(EOF) ����

2. istream get(char& str)
�Է� ��Ʈ������ ���ڸ� �о� ch�� ����, ���� �Է� ��Ʈ�� ��ü(*this)�� ���� ����, ������ EOF�� ������,
��Ʈ�� ������ ���� �÷���(failbit) ����

## int get()

int ch;
while ((ch=cin.get()) != EOF) {
	cout.put(ch);
	if (ch != '\n') break;
}

?? �� get()�� ���� Ÿ���� char�� �ƴϰ� int�ΰ�?
get()�� ���ڸ� ����������, �Է� ��Ʈ���� ���� ������ EOF�� �����Ѵ�.
EOF�� C++ ǥ�� ��� ���Ͽ� "#define EOF -1"�� int Ÿ������ ����Ǿ� �ֱ� �����̴�. 

## istream & get(char& ch)
get(char& ch) �Լ��� ���ڸ� �о� ���� �Ű� ���� ch�� �����ϰ� �����Ѵ�. 
�� �Լ��� ���� (' ', '\n') ���� ���ڸ� �о� ������ �� �ִ�. 

char ch;
while (true) {
	cin.get(ch);
	if (cin.eof()) break; // EOF ���� �� ctrl-z Ű�� �Էµ� ���, �б� ����
	cout.put(ch);
	if (ch != '\n') break; // <Enter> Ű�� �Էµ� ���, �б� ����
}
*/

#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get()�� <Enter>Ű���� �Է� �ް� ��� >> ";
	int ch;
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n') break;
	}
}

void get2() {
	cout << "cin.get(char& ch)�� <Enter>Ű���� �Է� �ް� ��� >> ";
	char ch;
	while (true) {
		cin.get(ch);
		if (cin.eof()) break; // EOF ���� �� ctrl-z Ű�� �Էµ� ���, �б� ����
		cout.put(ch);
		if (ch == '\n') break; // <Enter> Ű�� �Էµ� ���, �б� ����
	}
}

int main() {
	get1();
	get2();
}