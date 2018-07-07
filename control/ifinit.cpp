/*
 *
 
 핵심 정리
 1. C++17부터 지원되는 문법
 2. 조건문(if, switch)에 초기화 구문을 포함할 수 있다.
 3. if(init; 조건문), switch(init; 조건문) 형태로 사용 가능.

 *
 */
#include <iostream>

int foo() { return -1;}

int main()
{
	
	//전통적인 if문
	
	/*
	int ret = foo();

	if(ret == -1)
	{
		std::cout<< "fail" <<std::endl;
	}
	*/
	//---------------------
	
	//C++17의 if문
	if( int ret = foo(); ret == -1)
	{
		std::cout<<"fail"<< std::endl;
	}

	switch (int ret = foo(); ret)
	{
		case -1:
			std::cout<< "-1" <<std::endl;
			break;
	}
}
