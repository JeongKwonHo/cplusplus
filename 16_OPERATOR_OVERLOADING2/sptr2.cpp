/*
 *

 1. 템플릿으로 만들어야 한다.
 2. 얕은 복사 현상을 해결해야 한다. (참조 계수 방식을 주로 사용)

 *
 */

#include <iostream>

template <typename T>
class SPtr
{
    T* ptr;
    
public:
    SPtr(T* p = 0) : ptr{p} {}
    ~SPtr() { delete ptr;}

    T* operator->() {return ptr;}
    T& operator*() { return *ptr;}
};



int main()
{
    SPtr<int> p1 = new int;
    SPtr<int> p2 = p1; // runtime error //복사생성자 shallow copy를 해결해야 한다.

    *p1 = 10;

    std::cout<<*p1<<std::endl;
}

