/* 한 줄 읽기 ?!
키보드나 파일로부터 읽틑 프로그램을 작성하다보면, 한 줄 단위로 읽는 경우가 생기는데 
이를 입력 스트림으로부터 한줄을 읽어 배열에 저장하는 함수이다.

istream get(char *s, int n, char delim='\n')
입력 스트림으로부터 최대 n-1개의 문자를 읽어 배열 s에 저장하고 마지막에 '\n'문자 삽입
입력 도중 delim에 지정된 구분 문자를 만나면 지금까지 읽은 문자를 배열 s에 저장하고 리턴

getline()은 delim에 지정된 구분 문자를 만날 때까지, 혹은 n-1개의 문자를 모두 읽을 때까지 배열 s에 문자를 읽어들이는 함수이다.
delim 매개 변수가 생략되면 <Enter> 키가 입력될 때까지 한 라인을 읽는다. 

char line[80];
cin.getline(line, 80);

getline()이 delim문자를 스트림 버퍼에서 제거하는 젓과 달리,get()은 delim문자를 버퍼에 그대로 남겨둔다.
그러므로 get()으로 한 줄 읽기를 하고 난 후, 연이어 get()으로 입력 스트림에서 릭으면 delin문자를 다시 마주치게 되어 읽지 않고 리턴한다.

그러므로 get()으로 여러 라인을 연속하여 읽을 때 각 라인마다 스트림 버퍼에서 강제로 '\n'을 제거하지 않으면 무한 루프에 빠질 수 있다. 
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char line[80];

	cout << "cin.getline() 함수로 라인을 읽습니다." << endl;
	cout << "exit 을 입력하면 루프가 끝납니다!" << endl;

	int no = 1;
	while (true) {
		cout << "라인" << no << " >> ";
		cin.getline(line, 80);
		if (strcmp(line, "exit") == 0) break;
		cout << "echo -->";
		cout << line << endl;
		no++;
	}
}