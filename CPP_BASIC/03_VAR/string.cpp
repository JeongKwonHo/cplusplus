/*
 *
 
 핵심 정리

 1. C언어에서는 문자열
 - char* 또는 char 배열 사용
 - 문자열 전용 함수를 사용해야 한다. (strcmp, strcpy 등등..)

 2. string 타입을 사용하자. (STL의 string class)
 - 문자열 처리가 정수형 변수처럼 직관적으로 사용 할 수 있다.
 - C언어의 const char*로의 변환이 필요하면 .c_str()을 사용한다.

 *
 */
#include <iostream>
#include <string.h> //<cstring>
#include <string>

int main()
{
	//char s1[] = "hello";
	//char s2[10];

	std::string s1 = "hello";
	std::string s2;

	s2 = s1; // error 
	//strcpy(s2, s1)
	
	if(s1 == s2) // 배열 주소 비교이므로 틀린 문법 //strcmp(s2, s1) == 0
	{}
	
	std::string s3 = s1+s2;
	
	std::cout << s3 << std::endl;

}
