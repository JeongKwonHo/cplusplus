#include <iostream>
#include <iomanip>

int main()
{
	int n = 10;

	std::cout<< n <<std::endl; //10진수
	
	std::cout<< std::hex << n << std::endl;
	
	std::cout<< n << std::endl;
	std::cout<< std::dec << n << std::endl;
	
	std::cout<< std::setw(10) << std::setfill('#') 
			 << std::left << "hello" <<std::endl;


}

