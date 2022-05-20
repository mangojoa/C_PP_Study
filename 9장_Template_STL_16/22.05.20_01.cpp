/* iterator 사용
iterator는 컨테이너 안에 있는 원소들을 나나씩 순자적으로 접근하기 위한 원소에 대한 포인터이다.
iterator를 생성하려면 컨테이너 템플릿에 구체적인 타입을 지정하여, 원소의 타입이 트러나도록 하여야 한다.

vector<int>의 원소에 대한 iterator 변수를 생성하는 코드

vector<int> : iterator it;

it 변수는 int 값을 원소로 가지는 벡터의 원소를 가리키는 포인터이다.
현재 it은 어떤 원소도 가리키고 있지 않다. 
v.begin()은 벡터 v의 첫 번째 원소의 주고를 리턴하므로, 

vector<int> v;
it = v.begin();

iterator를 이용하여 백터를 접근하는 코드는 '++', '--' 연산자도 사용할 수 있다.

*/