#include <iostream>

class Point
{
    int x, y;
public:
    explicit Point(int a, int b) : x(a), y(b) {}

};

int main()
{
    Point p1(1, 1);

    Point p2{ 1, 1};    // direct initialize
    
    Point p3 = { 1, 1 }; // copy initialize. error
}
