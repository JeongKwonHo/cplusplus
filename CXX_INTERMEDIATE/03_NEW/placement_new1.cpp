
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
    Point p;
    
    //new Point; // 인자가 1개인 operator new()호출.

    new(&p) Point; // 인자가 2개인 operator new()호출.
                   // 메모리 할당이 아닌 생성자를 호출하는 코드


    //p.Point(); // error. public에 있다고 하더라도 호출할 수 없다.
    p.~Point(); // ok. 소멸자는 가능.
}
