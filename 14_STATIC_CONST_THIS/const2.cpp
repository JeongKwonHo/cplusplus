/*
 *

 1. 상수 멤버 함수 (const member function) 특징
  - 상수 멤버 함수 안에서는 모든 멤버를 상수 취급한다.
  - 멤버의 값을 변경할 수 없다. 읽은 것은 문제 없다.
  - 상수 멤버 함수안에서는 상수 멤버 함수만 호출 할 수 있다.

 2. 상수 멤버 함수의 필요성
  - 상수 객체는 상수 멤버 함수만 호출 할 수 있다.
  - 상수 객체는 많이 사용된다. 항상 상수 객체를 고려해야 한다.
  - 객체의 상태를 변경하지 않는 모든 멤버 함수는 상수 함수가 되어야 한다.
  - getter는 대부분 상수 멤버 함수가 되어야 한다.

 *
 */

#include <iostream>
class Point
{
public:

    int x, y;
    Point(int a, int b) : x(a), y(b) {}

    void set(int a, int b) 
    { 
        x = a; 
        y = b;
    }

    void print() const;
/*    {
        std::cout << x << ", " << y << std::endl;
    }
*/
};


int main()
{
    const Point p(1, 2);
//    p.x = 10;       //error
//    p.set(10,20);   //error
    p.print();      //error
    //상수 객체는 상수 멤버 함수만 호출 가능
}

void Point::print() const
{
    std::cout<< x << ", " << y <<std::endl;
}
