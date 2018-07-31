/*
 *
 
 1. 스마트 포인터
  - 다른 타입의 포인터 역할을 하는 객체
 
 2. 구현 원리
  - -> 연산자와 *연산자를 재정의해서 포인터처럼 보이게 한다.
  - *연산자를 재정의 할 때는 반드시 참조를 리턴해야 한다.
 
 3. 장점
  - 객체이므로 생성자/복사생성자/대입연산자/ 소멸자 등을 통해서 생성/복사/대입/소멸의 과정을 제어할 수 있다.
  - 소멸자에서 자원을 삭제.

 *
 */

#include <iostream>

class Car
{
public:
    void Go()
    {
        std::cout << "Go" << std::endl;
    }
    ~Car()
    {
        std::cout<< "~Car" << std::endl;
    }
};

class SPtr
{
    Car* ptr;
public:
    SPtr(Car* p = 0) : ptr(p) {}

    ~SPtr() { delete ptr;}

    Car* operator->() { return ptr;}
    Car& operator*() {return *ptr;}
};

int main()
{
    // SPtr의 객체 p가 Car의 포인터 처럼 사용
    // 다른 타입의 포인터 역할을 하는 걸 스마트포인터

    SPtr p =new Car; //SPtr p(new Car)

    p->Go(); // p+ a : p.operator+(a)처럼
             // (p.operator->())Go()
             // (p.operator->())->Go()
   
    (*p).Go(); // p.operator*()
}       
