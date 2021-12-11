/*
���ڿ� �ٷ�� 

���ڿ� ġȯ 
string a = "C++", b = "Java";
a = b; // a�� "Java"�� b�� ������ ���ڿ��� ������.

���ڿ� �� 
compare() �Լ��� �̿��Ѵ�. �� �Լ��� �� ���ڿ��� ������ 0,
str���� ���� ������ �տ� ���� ����, �ڿ� ���� ����� �����Ѵ�. 

string name = "Kitea";
string alias = "Kito";
int res = name.compare(alias); // name �� alias�� ���Ѵ�.
if (res = 0) cout << "�� ���ڿ��� ����"; // name = alias
else if (res < 0) cout << name << "<" << alias << endl; // name �� �տ� �´�.
else cout << name << " < " << alias << endl; // name�� �ڿ� �´�.

���ڿ� ���� 
append() �Լ��� �̿��Ѵ�. �� �Լ��� ���� ���ڿ����� �ڿ� �߰��ϴ� ����̴�. 
string a("I");
a.append(" Love C++"); => a = "I Love C++"

���� ���ڿ� ������ '+', '+=' �� ���� ���� �� ���� �ִ�.

���ڿ� ����
string Ŭ������ ���ڿ��� ���ο� ���ڿ��̳� ������ ���� ������ �����ϸ�, ���ڿ��� �Ϻκ��� 
�ٸ� ���ڵ�� ������ �� �ִ�. insert() �Լ��� �̿��Ͽ� a�� �ε��� 2 ��ġ�� "realy" ���ڿ��� �����ϴ� �ڵ��̴�.
string a("I Love C++");
a.insert(2, "realy"); // ���̽��� insert() �Լ��� ���� �����̶�� ���� �ȴ�.

���ڿ��� ����
���ڿ��� ���Ե� ���� ������ ���ϸ� length(), size()�� ���ڿ��� ���̸� �����Ѵ�.
���̿ʹ� �޸� string ��ü�� ���� �޸� �뷮�� �����ϴ� capacity()�� �ִ�.
string a("I study C++");
int length = a.length();
int size = a.size();
int capacity = a.capacity();

���꽺Ʈ��
substr() �Լ��� ����ϸ� ���ڿ����� �Ϻκ��� ������ ���ڿ�(���� ��Ʈ��)�� ���� �� �ִ�.
string b = "I Love C++";
string c = b.substr(2,4); // index 2 ~ 4 ������ c �� ����
string d = b.substr(2); // index 2 ~ ������ ���ڿ� ����

���ڿ� �˻�
���ڿ� ���� Ư�� ���ڿ��� �����ϴ��� �˻��ϴ� ����� ���� ���뿡�� ���ȴ�.
find()�� ���ڿ����� Ư�� ���ڳ� ���ڿ��� �߰��ϸ� ù ��° �ε����� �����Ѵ�.
�߰����� ���ϸ� -1�� �����Ѵ�.
string e = "I Love Love C++";
int index = e.find("Love"); �ε��� 2 ����
index = e.find("Love", index+1); �ε��� 3������ "Love" Ž��, �ε��� 7 ����
index = e.find("C#"); // C#�� �������� �ʱ⿡ -1 ����
index = e.find("v", 7); // �ε��� 7������ "v"�� Ž��, �ε��� 9 ����

���ڿ��� �� ���� �ٷ��
at() �Լ��� [] �����ڴ� �� �� ���ڿ��� Ʈ�� ��ġ�� �ִ� ���ڸ� �����Ѵ�.
at()�� �޸� [] �����ڸ� �̿��ϸ� Ư�� ���ڸ� �ٸ� ���ڷ� ������ �� �ִ�. 
string f("I Love C++");
char ch1 = f.at(7); // ���ڿ� f�� �ε��� 7�� �ִ� ���� ����. ch1 = 'C'
char ch2 = f.[7]; // f.at(7)�� ������ ǥ��, ch2 = 'C'
f[7] = "D" // f = "I Love D++"

���ڿ��� ���� ��ȯ, stoi()
C++11 ǥ�غ��� ���ڿ��� ���ڷ� ��ȯ�ϴ� �����Լ� stoi()�� �߰��Ͽ���. 
string year = "2014";
int n = stoi(year); // n�� ���� 2014 ���� ������.

���� �ٷ��
string�� ���ڿ��� �ٷ��� ���ڸ� �ٷ�� ����� ����. 
���ڸ� �ٷ�� �Լ��� <locale> ��� ���Ͽ� �����Ѵ�. 
<locale> ��� ���Ͽ� �ִ� toupper(), isdigit() �Լ��� ����Ѵ�.
string a = "hello";
for ( int i=0; i<a.length(); i++ ) a[i] = toupper(a[i]); // a�� "HELLO"�� ����
cout << a; // "HELLO" ���
if (isdigit(a[0])) cout << "����"; 
else if (isalpha(a.at(0))) cout << "����"; // a[0]�� ���� 'H'
*/

// ���ڿ��� �Է¹ް� ȸ����Ű�� ����
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�. (�ѱ� ������) >> " << endl;
	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1);
		string sub = s.substr(1, len - 1); // �� �ձ��ڸ� ������ �������� ���ڿ��� �и�
		s = sub + first;
		cout << s << endl;
	}
}
