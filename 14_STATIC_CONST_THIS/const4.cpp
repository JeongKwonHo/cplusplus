
/*
 *
 
 1. mutable
  - 상수 멤버 함수 안에서 값을 변경하고 싶을 때 사용.
  - 논리적으로는 상수 멤버 함수가 되야 하지만, 다양한 이유로 멤버의 값을 변경하고 싶을 때 사용

 *
 */

#include <iostream>

class Point
{
    mutable int cnt = 0;
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}

    void print() const
    {
        ++cnt;
        std::cout << x << "," << y << std::endl;
    }
};

int main()
{
    Point p(1,2);
    p.print();
}
