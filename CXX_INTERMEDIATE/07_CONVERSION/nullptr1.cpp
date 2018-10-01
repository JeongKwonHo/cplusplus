#include <iostream>

int main()
{
    int   n1 = 10;    // ok
    void* p1 = 10;    // error;

    int   n2 = 0;     // ok 
    void* p2 = 0;     // ok. 0은 정시주만 포인터로 암시적 형변환된다.

    
}
