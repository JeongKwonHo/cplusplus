/*
 *
 
 핵심 정리
 1. 기존 메모리(변수)에 새로운 이름(alias)을 부여하는 것.
 
 2. 레퍼런스 변수는 메모리를 할당하지 않는가?
 - 단순한 코드의 경우 메모리를 사용하지 않는다.
 - 복잡한 경우(함수 인자로 사용되거나 할 때) 상황에 따라 내부적으로 포인터를 사용하기도 한다.
 - C++ 표준 문서는 레퍼런스의 동작만 정의할 뿐, 구현은 정의하고 있지 않다.

 3. 반드시 초기화해야 한다.

 *
 */
#include <iostream>

int main()
{
    int n = 10;
    int* p = &n;

    int& r = n; // r은 reference 변수. 

    r = 20;

    std::cout<< &r <<std::endl;
    std::cout<< &n <<std::endl;
    std::cout<< n <<std::endl;

    //int& r2;  // error 초기값을 설정해줘야함.

}

