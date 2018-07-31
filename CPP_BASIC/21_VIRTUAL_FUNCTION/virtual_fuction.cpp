/*
 *

 1. 가상 함수 재정의(override)시에는 virtual 키워드는 붙여도 되고 붙이지 않아도 된다.

 2. 가상 함수 재정의 시 실수를 막기 위해서는 override 키워드를 사용한다.(C++11)

 3. 가상 함수를 선언과 구현으로 분리 할 때는 선언부에만 virtual, overried를 표기
    구현부에서는 표기해서는 안된다.

 *
 */

#include <iostream>

class Animal
{
public:
    virtual void Cry() {}
};

class Dog : public Animal
{
public:
    virtual void Cry() override;
};

void Dog::Cry()
{
}

int main()
{
    Dog d;
    Animal* p = &d;

    p->Cry();

}

