/*
 *
 
 1. 멤버 변수 
  - 객체 당 하나씩 만들어 진다.
 
 2. 전역 변수
  - 모든 객체가 공유 한다.
  - 누구나 접근 가능하고, 변경할 수 있다.

 *
 */

#include <iostream>

int cnt = 0;    //모든 객체 공유 가능하나, 누구나 접근 가능하고 변경 가능

class Car
{
    int speed;
    //int cnt = 0;  //객체 만들어질때마다 생성
public:
    Car() { ++cnt; }
    ~Car() { --cnt; }
};

int main()
{
    Car c1, c2;
}
