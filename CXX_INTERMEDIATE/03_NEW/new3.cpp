#include <iostream>

class Point
{
    int x, y;
public:
    Point() 
    {
        std::cout << "Point()" << std::endl;
    }
    ~Point()
    {
        std::cout << "~Point()" << std::endl;
    }
};
void* operator new(size_t sz)
{
    std::cout << "my new" << std::endl;
    return malloc(sz);
}
//인자 갯수 변경해서 재정의 가능하나 size_t는 항상 첫번째여야 한다.
void* operator new(size_t sz, const char* s, int n)
{
    std::cout<< "my new2" <<std::endl;
    return malloc(sz);
}
void operator delete(void* p) noexcept
{
    std::cout << "my delete" << std::endl;
    free(p);
}
int main()
{
    Point* p = new Point;   //operator new(sizeof(Point))
    
    Point* p2 = new("AA", 2) Point; // operator new(sizeof(Point), "AA", 2);
    delete p;
    delete p2;
}
