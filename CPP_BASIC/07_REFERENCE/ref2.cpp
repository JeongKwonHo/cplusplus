/*
 
   함수 인자의 값을 변경하게 하려면 포인터 또는 레퍼런스를 사용한다.

 */
#include <iostream>

void inc1(int n) 
{ 
    ++n; 
}

void inc2(int* p) 
{
    ++(*p);
}

void inc3(int& r)
{
    ++r;
}

int main()
{
    int a = 10, b = 10, c = 10;

    inc1(a);
    inc2(&b);
    inc3(c);

    std::cout<< a << std::endl; // 10 Call by value
    std::cout<< b << std::endl; // 11 Call by pointer
    std::cout<< c << std::endl; // 11 Call by reference

}
