/*
 *
 
 핵심 정리
 1. C++에서 상수를 만드는 방법
 - const : 초기값으로 literal 뿐 아니라 변수도 사용가능.
 - constexpr : 컴파일 시간 상수. 초기값으로 컴파일 시간에 결정된 값만 사용해야 한다.

 *
 */

int main()
{
	int n = 0;
	n =10;

	const int c = 10;
	c = 20; //error

	constexpr int c2 = 10;
	c2 = 20; //error

	const int c3 = n;	//ok
	constexpr int c3 = n;	//error
}
