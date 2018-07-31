#include <iostream>

class Base
{
public:
    Base() {}
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "자원할당" << std::endl;
    }
    virtual ~Derived() override
    {
        std::cout << "자원해제" << std::endl;
    }

};

int main()
{
    Base* p = new Derived;  // Derived 생성자 호출
    delete p;               // Base 소멸자 호출
}
