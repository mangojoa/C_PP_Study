/* [22.01.10] friend Ű����
Ŭ���� ���� friend Ű����� ����� �ܺ� �Լ��� ������ �Լ���� �θ���,
������ �Լ��� ��ġ Ŭ������ �ɹ��� ��ó�� Ŭ������ ��� ������ �Լ��� ������ �� �ִ�.

������ �Լ��� �ʿ伺 

Ŭ���� �ɹ� �Լ��δ� �������� ������, Ŭ������ private, protected �ɹ��� �����ؼ� �ؾ��ϴ� Ư���� ���,
�� �Լ��� �ܺ� �Լ��� �ۼ��ϰ� ������� �����Ѵ�.
������ �Լ��� ���� �����ϰ� ���Ǵ� ��ǥ���� ��찡 ������ �Լ��̴�.

1. Ŭ���� �ܺο� �ۼ��� �Լ��� ������� ����
2. �ٸ� Ŭ������ �ɹ� �Լ��� ������� ����
3. �ٸ� Ŭ������ ��� �ɹ� �Լ��� ������� ����

������ �Լ� ����
Ŭ���� �ܺο� �ۼ��� �Լ��� Ŭ���� ���� ������� �����ϴ� ���
Ŭ���� �ܺο� ������ �Լ��� friend Ű����� Ŭ���� ���� �ƹ� ������ �����ϸ� �ȴ�.

class Rect {
	......
	friend bool equal(Rect r, Rects); // �Լ� equal()�� ������ �Լ��� ����
}
*/

#include <iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s); // equal ����

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend  bool equals(Rect r, Rect s); // ������ �Լ� ����
};

bool equals(Rect r, Rect s) { // �ܺ� �Լ�
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}