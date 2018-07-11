#include <iostream>


struct Point
{
	int x = 0;	//멤버 초기화 가능 . C++11
	int y = 0;
};

int main()
{
	int n1 = 0b10;  	//c++11 2진수 표현
	int n2 = 1'000'000; //가독성을 위한 '표시 가능
		
	Point p2;

	bool b = true;

	std::cout<< b <<std::endl;
	
	std::cout<<n1<<std::endl;
	


}

