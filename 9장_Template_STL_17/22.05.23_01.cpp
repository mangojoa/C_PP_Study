/* map �����̳��� Ȱ��
map�� 'Ű' �� '��'�� ���� ���ҷ� �����ϰ� 'Ű'�� �̿��Ͽ� ���� �˻��ϴ� ���׸� �����̳��̴�. 

Ű�� ���� �⺻Ÿ�� (int, double��), Ŭ���� Ÿ�� ��� ����������, 
������ Ű�� ������ ���Ұ� �ߺ� ����Ǹ� ������ �߻��Ѵ�.

map�� �̿��ϱ� ���ؼ��� ������ ���� <map> ��� ���ϰ� using ���þ �ʿ��ϴ�.

#include <map>
using namespace std;

@@ map �����̳� ���� �� ���� ���� 
map�� Ȱ���Ͽ�, ����� �ѱ� �ܾ��� ���� ���ҷ� �����ϰ� 
���� �ܾ�� �ѱ��� �˻��ϴ� ���� ���α׷��� ������

���� map �����̳ʸ� ����
map<stinrg, string> dic; // Ű�� ���� �ܾ�, ���� �ѱ� �ܾ�

map�� insert() �ɹ� �Լ��� []�����ڸ� ����Ͽ� ������ ���� ���Ҹ� �����Ѵ�.
dic.insert(make_pair("love", "���")); // ("love", "���") ����
dic["love"] = "���"; // ("love", "���") ����

@@ 'Ű'�� �˻��Ͽ� '��' �˾Ƴ��� 
[] �����ڸ� �̿��ϸ� 'Ű'�� �˻��Ͽ� '��'�� �˾Ƴ� �� �ִ�. 
string kor = dic["love"]; // kor = "���"

[]�����ڴ� ã�� �� ���� ��� �� ���ڿ�("")�� �����Ѵ�. ������ ���� at()�� �̿��Ͽ� �˻��� �� �� ������,
at()�� ã�� �� ���� ��� ���ܸ� �߻���Ű�Ƿ� ���� ó�� �ڵ带 �ۼ��ؾ� �ϴ� �δ��� �ִ�. 

string kor = dic.at("love"); // kor = "���"

�ʿ� 'Ű'�� �����Ͱ� �ִ��� �˻��ϱ� ���ؼ��� ���������� ���� �ڵ带 �̿�
if(dic.find(eng) == dic.end()) // eng "Ű"�� ã�� �� ���ٸ� ���ǹ��� true

<map>�� �ɹ� �Լ��� ������ �Լ�
insert(pair<> &element)	�ʿ� 'Ű'�� '��'���� ������ pair ��ü element ����
at(key_type& key)		�ʿ��� 'Ű' ���� �ش��ϴ� '��' ����
begin()					���� ù ��° ���ҿ� ���� ��������
end()					���� ��(������ ���� ����)�� ����Ű�� ���� ����
empty()					���� ��� ������ true ���� 
find(key_type& key)		�ʿ��� 'Ű' ���� �ش��ϴ� ���Ҹ� ����Ű�� iterator ����
erase(iterator it)		�ʿ��� it�� ����Ű�� ���� ����
size()					�ʿ� ����ִ� ������ ���� ����
operator[key_type& key]()	�ʿ��� 'Ű' ���� �ش��ϴ� ���Ҹ� ã�� '��' ����
operator=()				�� ġȯ(����)

*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> dic;

	dic.insert(make_pair("banana", "�ٳ���"));
	dic.insert(make_pair("mango", "����"));
	dic["cherry"] = "ü��";

	cout << "����� �ܾ� ����" << dic.size() << endl;

	string eng;
	while (true) {
		cout << "ã�� ���� �ܾ� >> ";
		getline(cin, eng);
		
		if (eng == "exit") {
			break;
		}

		if (dic.find(eng) == dic.end()) {
			cout << "����" << endl;
		}
		else {
			cout << dic[eng] << endl;
		}
	}

	cout << "�����մϴ�........" << endl;
}
