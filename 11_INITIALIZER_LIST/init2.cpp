/*
 *
 
 핵심 개념
 
 1. 생성자 () 뒤에 :을 표기하고 멤버를 초기화 하는것.
 
 2. 특징
  - 대입이 아니라 초기화이다.

 3. 주의사항
  - 멤버가 놓인 순서대로 초기화 된다.
 *
 */
#include <iostream>

class Point
{
public:
    //멤버 데이터 놓인 순서대로 초기화
    int y;
    int x;
public:
    Point() : y(0), x(y)
    {

    }

};

int main()
{
    Point p;

    std::cout << p.x << std::endl;
    std::cout << p.y << std::endl;
}
