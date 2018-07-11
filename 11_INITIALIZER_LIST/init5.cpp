/*
 *
 
 핵심 개념 
 
 1. delegate constructor
  - 하나의 생성자에서 다른 생성자를 호출하는 문법
  - 초기화 리스트 구문에서 다른 생성자를 호출한다.
  - C++11부터 지원되는 문법

 
 *
 */

#include <iostream>

class Point
{
public:
    int x, y;

public:
   Point() : Point(0,0) //위임 생성자
   {
      // Point(0,0); // 생성자 호출이 아니라
                     // 임시 객체 생성.
   }

   Point(int a, int b) : x(a), y(b){}
};

int main()
{
    Point p;
    std::cout<<p.x<<std::endl;
}
