
#include <iostream>

template<typename T>
struct Point
{
    T x;
    T y;
};

int main()
{
    Point<int> p1;
    p1.x = 3;
    p1.y = 4;

    Point<double> p2;
    p2.x = 3.3;
    p2.y = 4.4;
    
    std::cout<< p1.x << '\t' << p1.y <<std::endl;
    std::cout<< p2.x << '\t' << p2.y <<std::endl;
}
