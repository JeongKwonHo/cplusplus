/*
 *
 
 핵심 정리
 1. C++17 부터 지원 되는 문법
 2. 구조체 또는 배열의 각 멤버에서 값을 꺼낼 때 사용
 3. 타입은 반드시 auto를 사용해야 한다.
 *
 */

#include <iostream>

struct Point
{
	int x = 10;
	int y = 20;
};

int main()
{
	Point p;

	//int a = p.x;
	//int b = p.y;
	

//	auto[a,b] = p;
	//int [a,b] = p; // error 
	
	int x[2] = {1,2};
	
	auto[a,b] = x;


	std::cout<< a <<", " << b << std::endl;
}
