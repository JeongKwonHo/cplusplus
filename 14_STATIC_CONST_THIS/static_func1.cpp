/*
 *

 1. static 멤버 함수
  - 객체 없이 호출 가능한 멤버 함수
  - 클래스이름::함수이름()으로 호출 할 수 있다. => 권장사항
  - 객체이름.함수이름()으로도 사용가능.
  - 일반 멤버 함수 : 호출하려면 반드시 객체가 필요하다.

 *
 */
#include <iostream>

class Car
{
    int speed;

    static int cnt; // 선언 (declaration)
public:

    Car() { ++cnt; }
    ~Car() { --cnt; }

    static int getCount() { return cnt; }
};

int Car::cnt = 0; //정의 (definition)

int main()
{

    std::cout << Car::getCount() << std::endl;

    Car c1, c2;
    
    std::cout << c1.getCount() <<std::endl; 
    
}
