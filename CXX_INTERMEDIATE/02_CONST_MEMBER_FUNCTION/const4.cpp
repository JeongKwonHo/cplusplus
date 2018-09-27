#include <iostream>

class Point
{
    int x, y;
    // mutable 멤버 변수는 상수 멤버함수 안에서도 값을 변경할 수 있다.
    mutable char cache[16];
    mutable bool cache_valid = false;

public:
    Point(int a = 0, int b = 0) : x(a), y(b){}
    
    const char* toString() const
    {
        if(cache_valid == false)
        {
            sprintf(cache, "%d, %d",x, y);
            cache_valid = true;
        }
        return cache;
    }

};


int main()
{
    const Point p1(1, 1);

    std::cout << p1.toString() << std::endl;
}
