/*
 *
 
 1. shared_ptr
  - C++ 표준의 스마트 포인터
  - <memory> 헤더
  - 참조 계수 기반으로 구현

 2. 사용시 주의사항
  - shared_ptr<Car> p1 = new Car; //error
  - shared_ptr<Car> p1 (new Car) //ok
 *
 */

#include <iostream>
#include <memory>

class Car
{
public:
    void Go()
    {
        std::cout<<"Go"<<std::endl;
    }
    ~Car()
    {
        std::cout<< "~Car" <<std::endl;
    }

};

int main()
{
    //std::shared_ptr<Car> p = new Car; //error 대입

    std::shared_ptr<Car> p(new Car); // ok

    p->Go();
}


