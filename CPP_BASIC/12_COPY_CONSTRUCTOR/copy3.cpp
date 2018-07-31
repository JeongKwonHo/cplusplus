/*
 *
 
 1. 객체가 자신의 타입으로 초기화 될 때
  - Point p2(p1);
  - Point p2{p1};
  - Point p2 = p1;

 2. 함수 인자로 객체를 값으로 받을 때 (call by value)
  - const &를 사용하면 복사 생성자/소멸자의 호출을 막을 수 있다.
  - void foo( const Point& p);
 
 *
 */
#include <iostream>

class Point
{
    int x, y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b)
    {
        std::cout << "Point()" <<std::endl;
    }
    Point(const Point& p) : x(p.x), y(p.y)
    {
        std::cout << "Point(Point&)" <<std::endl;
    }
};

//void foo(Point pt)  //Point pt = p; 즉, 복사생성자 호출
void foo(const Point& pt) 
{

}

int main()
{
    Point p;    //생성자 호출
    foo(p);
}
