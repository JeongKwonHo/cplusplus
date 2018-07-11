/*
 *
 
 핵심 개념

 1. 객체가 자신의 타입으로 초기화 될때
  - Point p2(p1);
  - Point p2{p1};
  - POint p2 = p1;
 *
 */
#include <iostream>

class Point
{
    int x, y;
public:
    Point(int a=0, int b=0) : x(a), y(b)
    {
        std::cout<<"Point()"<<std::endl;
    }

    Point(const Point& p) : x(p.x), y(p.y)
    {
        std::cout<<"Point(Point&)"<<std::endl;
    }
};

int main()
{
    Point p1(1,2);   //생성자
    Point p2(p1);    //복사 생성자
    Point p3{ p1 };  //복사 생성자
    Point p4 = p1;   //Point p4(p1)  복사 생성자.

    //미묘한 차이가 있다.
    //int n = 0;
    //int n(0);


}
