#include <iostream>
#include <cstdio>
class Point
{
public:
    int x, y;
};

int main()
{
    int   n = 10;
    int* p1 = &n;
    
    //void(Point::*f)() = &Point::Print; // 멤버 함수 포인터


    //실제 메모리 위치가 아닌 Point에서의 offset이 들어있다.
    int Point::*p2 = &Point::x;     // 멤버 변수 포인터 
                                    // 0 

    int Point::*p3 = &Point::y;     // 4
                                    // C의 offset_of

    std::cout << p2 <<  p3 << std::endl;
    printf("%d %d \n", p2, p3);

    Point pt;

    pt.y = 10;
    pt.*p3 = 20;
    
    std::cout << pt.y << std::endl;
}


