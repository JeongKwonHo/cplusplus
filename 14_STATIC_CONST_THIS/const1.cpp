/*
 *
 
 1. 상수 멤버 함수 (const member function) 특징
  - 상수 멤버 함수 안에서는 모든 멤버를 상수 취급한다.
  - 멤버의 값을 변경 할 수 없다. (Read Only)
  - 상수 멤버 함수 안에서는 상수 멤버 함수만 호출 할 수 있다.

 *
 */
#include <iostream>

class Point
{
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}

    void set(int a, int b)
    {
        x = a;
        y = b;
    }

    void print() const  // 상수 멤버 함수
    {
        //함수 내에서 모든 멤버를 다 상수 취급
        // x = 10; //error 
      
        //상수 멤버 함수 안에서는 상수 멤버 함수만 호출 할 수 있다.
        //set(1,2);
        std::cout << x << "," << y <<std::endl;
    }

};

int main()
{
}
