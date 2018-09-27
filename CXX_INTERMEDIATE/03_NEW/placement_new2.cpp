
#include <iostream>

class Point
{
public:
    Point()
    {
        std::cout << "Point" << std::endl;
    }
    ~Point()
    {
        std::cout << "~Point" << std::endl;
    }

private:
    int x;
    int y;
};

// placement new : 생성자를 호출하기 위해 만든 new
/*
void* operator new(size_t sz, void* p)
{
    return p;
}
*/
int main()
{
    // malloc : 메모리만 할당
    Point p = static_cast<Point*>malloc(sizeof(Point));
    

    // new : 객체의 생성 (메모리 할당 + 생성자 호출)
    Point* p2 = new Point; 
    
    Point* p3 = new Point;      // 새로운 메모리에 객체를 생성해 달라.

    Point* p4 = new(p1) Point;  // 기존 메모리에 객체를 생성해 달라.
}
