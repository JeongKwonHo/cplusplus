/*
 *
 
 핵심 정리

 1. 함수의 인자로 사용한 변수의 값을 변경하지 않게 하려면
 - call by value : 동일한 객체가 메모리에 한 번 더 생성된다.
 - const reference가 좋다.

 2. const reference 장점.
 - 객체의 복사본이 생성되지 않는다.
 - 복사생성자와 소멸자의 호출을 막을 수 있다.

 3. 권장사항
 - primitive type : call by value
 - user define type : const frefenrece
 *
 */
#include <iostream>

struct Data
{
    char data[1000]; //큰 데이터
};

void foo( const Data&  a) // call by value
{

}

int main()
{
    Data x = 10;

    foo(x);

    std::cout << x << std::endl;

}

//void goo(int n)        {} //권장사항 컴파일 최적화가 더 좋다.
//void goo(const int& n) {}

