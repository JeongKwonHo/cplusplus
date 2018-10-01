/*
 *
 *  1. assert
 *   - <cassert>
 *   - assert (expression of scalar type)
 *   - 실행 시간에 expr이 거짓이면, 메시지를 출력하고 프로그램을 종료. (abort)
 *  
 *  2. static_assert
 *   - C++11에서 도입된 문법
 *   - 실행시간이 아닌 컴파일 시간에 주어진 식(expression)을 조사해서 
 *     거짓이면 진단 메시지 출력하고 컴파일 종료
 *   - 컴파일 시간에 조사가능한 상수 표현식만 사용가능. 변수는 사용불가
 *
 *  3. static_assert 기본 모양
 *   - static_assert(bool_constexpr, message);
 *   - static_assert(bool_constexpr); C++17
 *  
 */

#include <iostream>
#include <cassert>

using namespace std;

void foo(int age)
{
    assert(age>0);  //
    //static_assert(age>0, "error"); 컴파일 시간에 조사 가능한 상수 표현식만 사용 가능. 변수 사용x
    // ....
}

int main()
{
    int num{10};
//    static_assert(sizeof(void*)>=8, "error. 32bit");  //compiletime
    static_assert(sizeof(void*) >= 8);
//    foo(-10);               // runtime 
}
