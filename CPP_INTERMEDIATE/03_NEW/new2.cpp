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
    cout << "my new" << std::endl
    return malloc(sz);
}

void operator delete(void* p) noexcept
{
    cout << "my delete" << std::endl;
    free(p);
}
int main()
{
    Point* p = new Point;

    delete p;
}
