/*
 *
    default initialization
    초기화 구문 없이 초기화 하는 것 

    value initialization
    빈 초기화 구문을 가지고 초기화 하는것

 *
 */
#include <iostream>

int main()
{
    // direct initialization
    int n1(0);
    int n2{0};

    // copy initialization
    int n3 = 0;
    int n4 = {0};

    //-----------------------
    int n5;     // default initilization. 쓰레기값
    int n6{};   // value initialization.  0으로 초기화
    
    std::cout << n5 << std::endl;
    std::cout << n6 << std::endl;

    int n7();   //주의. 함수선언
}
