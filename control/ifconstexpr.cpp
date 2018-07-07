/*
 *
 
 핵심 정리
 1. C++17 부터 지원되는 문법
 2. static if 라고 부르기도 한다.
 3. if 문은 실행 시간에 조건문이지만 if constexpr은 컴파일 시간 조건문
 4. 컴파일 시간에 결정되는 상수표현식만 조사할 수 있다. 즉, 변수를 조사할 수 없다.
 5. 일반 프로그램보다는 템플릿 프로그램에서 사용이 유용하다. 

 *
 */

#include <iostream>

int main()
{

	int n = 0;
	
	//전통적인 입력값 체크 구문
	/*
	std::cin >> n;

	if(n==0)
	{
	}
	*/
	
	//constexpr : 컴파일 시간
	//if constexpr (n == 0) //error
	constexpr int c = 10;

	if constexpr ( c == 10)
	{
	}
}
	
