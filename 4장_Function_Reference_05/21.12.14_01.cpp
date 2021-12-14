/*
참조와 함수 

참조 변수를 선언하기 위해서는 &기호를 사용한다. &를 참조자라고 부른다.
참조 변수는 이미 선언된 변수에 대한 별명이다. 
선언 시 반드시 원본 변수로 초기화 하여야 한다. 

int n=2;
int &refn = n; // refn이라는 n의 별명 설정 refn = n

Circle circle;
Circle &refc = circle // refc라는 circle의 별명 refc = circle
*/