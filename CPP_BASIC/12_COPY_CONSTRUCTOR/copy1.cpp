/*
 *
 
 핵심 개념
 
 1. 복사 생성자 (Copy Constructor)
  - 객체가 자신과 동일한 타입으로 초기화 될 때 사용된다.
  - 사용자가 만들지 않으면 컴파일러가 제공해준다. => "디폴트 복사 생성자(default copy constructor)"
  - 컴파일러가 제공하는 복사 생성자는 모든 멤버를 복사 해준다. (bitwise copy)
  - 필요한 경우 사용자가 직접 만들어도 된다.
 
 2. 복사 생성자의 정확한 모양
  - Point( const Point& p)

 *
 */

#include <iostream>

class Point
{
    int x, y;
public:
    Point()             : x(0), y(0) {} // 1
    Point(int a, int b) : x(a), y(b) {} // 2

    //복사 생성자.
    //직접 만들지 않아줘도 컴파일러가 자동으로 복사생성자 제공
    Point( const Point& p) : x(p.x), y(p.y)
    {
        std::cout<<"copy constructor"<<std::endl;
        //x = p.x;
        //y = p.y;
        //,,,,,
    }
};

int main()
{
    Point p1;       // 1
    Point p2(1,2);  // 2
    //Point p3(1);    // error, default parameter 없음
    Point p4(p2);   // ok. Point( Point ) 

}
