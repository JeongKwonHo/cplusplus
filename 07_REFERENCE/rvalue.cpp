/*
 *
 
 핵심 정리
 1. lvalue vs rvalue 
 - rvalue : 등호(=)의 오른쪽에만 올 수 있는것
 - lvalue : 등호(=)의 오른쪽과 왼쪽 모두 올 수 있는 것
 
 2. reference 규칙
 - lvalue reference : lvalue만 가리킬 수 있다.
 - const lvalue reference : lvalue와 rvalue를 모두 가리킬 수 있다.
 - rvalue reference : rvalue만 가리킬 수 있다. -C++11 개념

 3. rvalue reference가 활용되는 분야 -> 나중에 하자...
 - move semantics
 - perfect forwarding

 *
 */


int main()
{
    int v1 {0};
    int v2 {0};

    v1 = 10;  // ok
    //10 = v1;  // error 
    v2 = v1;

    // lvalue reference
    int& r1 = v1; // ok
    int& r2 = 10; // error

    const int& r1 = v1; // ok
    const int& r2 = 10; // ok
    
    // rvalue reference
    int&& r5 = v1; // error
    int&& r6 = 10; // ok

}
