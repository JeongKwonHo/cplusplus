#include <iostream>

// Point => int : 변환 연산자   p.operator int()
// int => Point : 변환 생성자   Point(int)

class Point
{
    int x, y;
public:
    Point()             : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
    
    // p = n이 작동하게 하기 위해
    // 인자가 한개인 생성자 - 변환 생성자 : 다른 타입이 Point로 변환되게 한다. 
    Point(int a) : x(a), y(0) {}
    
    operator int()
    {
        return x;
    }
};

int main()
{
    Point p1;
    Point p2(1,1);


    int    n = 3;
    Point p(1,2);

    n = p;  // Point => int     p.operator int()
    p = n;  // int   => Point   n.operator Point() 가 있으면 된다. 
            // 하지만 n은 user defined가 아니고 primitive type이다 

    std::cout << n << std::endl;
    std::cout << p << std::endl;

    return 0;
}
