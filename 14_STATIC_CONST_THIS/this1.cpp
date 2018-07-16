/*
 *

 [참고] 일반 함수 인자는 스택으로 전달되지만 객체 주소는 레지스터로 전달되는 경우가 많다.

 1. 멤버 함수 호출의 원리
  - 멤버 함수는 호출시 객체의 주소가 추가로 전달된다.
 
 2. this
  - 객체의 주소를 나타내는 상수포인터, 멤버 함수 안에서 사용할 수 있다.


 *
 */

#include <iostream>

class Point
{
    int x = 0;
    int y = 0;
public:
    void set(int a, int b)
    {
        std::cout << this << std::endl;
        x = a;
        y = b;
    }
    /*
    void set(Point* const this, int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    */
};

int main()
{
    Point p1;
    Point p2;
    
    std::cout << &p1 <<std::endl;
    p1.set(10,20);  // set(&p1, 10, 20) 

    std::cout << &p2 << std::endl;
    p2.set(10,20);
    
}
