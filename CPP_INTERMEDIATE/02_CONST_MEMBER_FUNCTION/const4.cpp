#include <iostream>

struct Cache
{
    char cache[16];
    bool cache_valid = false;
};


class Point
{
    int x, y;
    // mutable 멤버 변수는 상수 멤버함수 안에서도 값을 변경할 수 있다.
    Cache* pCache;

public:
    Point(int a = 0, int b = 0) : x(a), y(b)
    {
        pCache = new Cache;
    }
    
    const char* toString() const
    {
        if(pCache->cache_valid == false)
        {
            sprintf(pCache->cache, "%d, %d",x, y);
            pCache->cache_valide = true;
        }
        return pCache->cache;
    }
    ~Point() {
        delete pCache;
    }
};


int main()
{
    const Point p1(1, 1);

    std::cout << p1.toString() << std::endl;
}
