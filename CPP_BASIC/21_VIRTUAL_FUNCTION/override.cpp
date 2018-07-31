/*
 *

 1. fuction override
  - 기반 클래스의 함수를 파생 클래스에서 재정의 할 수 있다.
 
 2. 기반 클래스의 포인터로 파생 클래스 객체를 가리킬 때
  - C++과 Java가 다르게 동작 (이론 상으로는 자바가 맞다)

 3. virtual function
  - 멤버 함수 호출 시, 포인터 타입이 아닌 실제 객체에 따라 함수를 호출
  - 실행시간에 포인터가 가리키는 메모리를 조사한 후 호출하는 것
 *
 */

#include <iostream>

class Animal
{
public:
    virtual void Cry()
    {
        std::cout<<"Animal Cry"<<std::endl;
    }
};

class Dog : public Animal
{
public:
    //함수 오버라이드 (override)
    virtual void Cry()
    {
        std::cout<<"Dog Cry"<<std::endl;
    }

};

int main()
{
    Animal a;
    a.Cry();

    Dog d;
    d.Cry();

    Animal* p = &d;
    p->Cry();
             // C++ Animal Cry()
             // Java Dog Cry()

}
