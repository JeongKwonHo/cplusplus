/*
 *
 
 1. 멤버의 이름과 지역변수(함수 인자)이름이 동일 할 때.
  - 지역 변수가 우선시 된다.
  - this를 사용하면 멤버 변수에 접근 할 수 있다.
 
 2. this를 리턴하는 함수
  - 멤버 함수 호출을 연속적으로 사용할 수 있다.
  - 자신(*this)을 리턴시 반드시 참조로 리턴해야 한다. (임시객체 생성 방지)

 *
 */
#include <iostream>

class Point
{
    int x = 0;
    int y = 0;
public:
    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Point* foo() { return this;}
    
    //Point goo() {return *this; } //임시객체 리턴
    Point& foo() { return *this;}
    
};

int main()
{
    Point p;
    p.set(10,20);
    
    p.foo()->foo()->foo();

    t.goo().goo().goo();
    
    std::cout <<"A"<<"B"<<"C"; //this리턴을 통한 cout
}

