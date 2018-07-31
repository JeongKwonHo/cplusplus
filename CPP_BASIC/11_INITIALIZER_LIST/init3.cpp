#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point(int a = 0, int b = 0);

};

// 생성자 외부에 만들때.
Point:Point(int a, int b) : x(a), y(b)
{

}

int main()
{
    Point p;
}
