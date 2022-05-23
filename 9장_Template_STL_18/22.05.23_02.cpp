/*
STL 알고리즘 사용하기
STL 알고리즘은 전역 함수로써 STL 컨테이너 클래스의 맴버 함수가 아니며
템플릿으로 작성되어 있다. 

STL 알고리즘 함수는 iterator와 함께 작동한다. 

STL sort() 함수의 사용 예시 

vector<int> v;

...
sort(v.begin(), v.begin()+3); // v.begin()에서 v.begin()+2가지 처음 3개 원소 정렬
sort(v.begin()+2. v.begin()+5); // 벡터의 5번째 원소에서 v.begin()+4까지 3개 원소 정렬
sort(v.begin(), v.end()); // 백터 전체 정렬

sort() 함수는 두 개의 매개 변수를 가지고 있다. 
첫 번째 매개 변수에 정렬을 시작할 원소에 대한 iterator 주소를,
두 번째 매개 변수는 마지막 원소 다음의 iterator 주소를 주어야 한다. 
*/