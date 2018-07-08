/*
 *
 
 핵심 정리
 
 1. C 캐스팅은 "unreasonable"하다.
 
 2. C 캐스팅은 버그 가능성이 있는 경우도 캐스팅을 허용하는 경우가 많다.

 3. C++은 용도에 따라 4개의 캐스팅 연산자를 제공한다.
 - static_cast      : 컴파일 시간 캐스팅
 - dynamic_cast     : 실행시간 캐스팅
 - reinterpret_cast : 컴파일 시간 캐스팅
 - const_cast       : 컴파일 시간 캐스팅

 4. static_cast
 - 가장 기본적인 캐스팅. 위험성을 내포한 경우는 캐스팅 안됨
 - void* -> 다른타입*
 - 연관성이 있는 타입 허용

 5. reinterpret_cast
 - 메모리의 재해석
 - 서로 다른 타입의 주소를 캐스팅
 - 포인터와 정수간 캐스팅

 6. const_cast
 - 객체의 상수성을 제거하는 캐스팅

 7. dynamic_cast
 - down cast를 막기 위해
 - RTTI 기능
 - 상속 개념 필요...

 *
 */
#include <cstdlib>

int main()
{
    int* p1 = static_cast<int*>(malloc(100)); // ok  void* -> int*

    int n = 3;
    //double* p2 = static_cast<double*>(&n);
    double* p2 = reinterpret_cast<double*>(&n);


    const int c = 10;
    //int* p3 = static_cast<int*>(&c);      // error
    //int* p3 = reinterpret_cast<int*>(&c); // error
    int* p3 = const_cast<int*>(&c); // ok 
}
