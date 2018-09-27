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

void operator delete(void* p) noexcept //noexcept 예외가 없다는 키워드
{
    std::cout << "my delete" << std::endl;
    free(p);
}
int main()
{
    Point* p = new Point;   // 1. 메모리 할당 - operator new(sizeof(Point))
                            // 2. 생성자 호출

    delete p;
}
