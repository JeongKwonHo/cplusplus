/*
 *
 
 핵심 정리
 1. C++11부터 지원되는 새로운 for문
 2. 다른 언어(C#, Java등)의 foreach()와 유사한 구문
 3. 배열 뿐 아니라 STL(C++ 표준 라이브러리)의 list, vector 등의 컨테이너도 사용가능
 4. auto 와 같이 사용되는 경우가 많이 있다.
 5. 사용자가 만든 list도 사용가능하다 -> 중급 버전.
 
 *
 */

#include <iostream>

int main()
{
	int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for( auto n : x) //x에서 하나씩 꺼내서 n에 담아달라.
	{
		std::cout<< n << std::endl;
	}

	/*
	for (int i=0;i<10;i++)
	{
		std::cout<< x[i]<<std::endl;
	}
	*/

}
