
/*
 *
 1.기존 초기화 방식의 문제점
 - 변수의 종류에 따라 초기화 방법이 다르다. (배열, 구조체, 일반 변수 등..)
 - 동적 할당된 배열을 초기화 할 수 없다. 
 - 클래스 안에 배열 멤버를 초기화 할 수 없다.

 2. 모든 종류의 변수를 하나의 일관된 형태로 초기화 하자.
 - uniform initialzation
 - 중괄호 초기화(brace init)라고도 한다.
 - direct initialization : 초기화시에 =를 사용하지 않은것. 
 - copy initialization : 초기화시에 =를 사요하는 것.
 * 
 */
#include <iostream>

struct Point 
{
	int x,y;
};

int main()
{
	/*
	int n1 = 0;
	int n2(0);  //()초기화. C++에서 지원	
	int x[2] = {1,2};
	Point p = {1,2};
	*/


	//Direct initialization
	int n1{ 0 };
	int n2{ 0 };
	int x[2]{ 1,2};
	Point p {1,2};

	//copy initialization
	int n1 = { 0 };
	int n2 = { 0 };
	int x[2] = {1,2};
	Point p = {1,2};

}

