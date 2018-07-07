/*
 *
 
 핵심 정리
 
 1. 상수의 종류
 - runtime constant
 - compile-time constant (constexpr)

 2. constexpr은 compile-time 상수로만 초기화 할 수 있다.

 3. 배열의 크기
 - C89문법 : 컴파일 시간 상수만 가능하다.
 - C99문법 : 변수도 가능하다. VC++은 지원 안함.
 
 *
 */
#include <iostream>

int main()
{
	//const int c = 10; // 컴파일 시간 상수
						// 컴파일 시간에 c를 사용하는곳을 매크로 처럼 이미 fix해버림	
						// 이를 위해 constexpr이라는 키워드가 생성.

	int n = 10;
	const int c = n; 	// 실행시간 상수 
						// c에 접근 할때 메모리에서 직접 읽어옴 그러므로 20이 출력

	//int* p = &c; //error
	
	int* p = (int*)&c; //ok..

	*p = 20;

	std::cout<< c <<std::endl; 	// 10 20
	std::cout<< *p <<std::endl; // 20 10

}
