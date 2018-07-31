/*
 *
 
 핵심 개념
 
 1. 모양
  - "~클래스이름()"
  - 리턴 타입을 표기하지 않는다.
  - 인자를 가질 수 없다.
  - 한 개만 만들 수 있다.

 2. 특징
  - 객체가 파괴 될 때 소멸자가 호출된다.
  - 객체가 자원을 할당한 경우 소멸자에서 자원을 해지한다.
  - 사용자가 소멸자를 만들지 않으면 컴파일러가 만들어 준다.

 *
 */
#include <iostream>

class Point
{
private:
    int x, y;
    int* buf;
public:
    Point() { 
        std::cout << "Point()" << std::endl; 
        buf = new int[10];
    }
    
    //사용자가 소멸자를 만들지 않으면 컴파일러가 기본 소멸자를 제공한다.
    ~Point() 
    {
        std::cout << "~Point()" << std::endl; 
        delete[] buf;
    }

};

int main()
{
    Point p;
}
