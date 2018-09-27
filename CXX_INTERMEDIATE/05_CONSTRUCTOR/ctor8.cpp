#include <iostream>
using namespace std;

// 생성자에서는 가상함수가 동작하지 않는다!
// why? 기반 클래스의 생성자가 호출되는 시점에서 파생클래스의 멤버들은 아직 초기화 되지 않았다.
struct Base
{
    Base() { goo(); }

    void foo() { goo(); }

    virtual void goo() { cout << "Base::goo" << endl; }
};

struct Derived : public Base
{
    int x;
    
    Derived() : x(1) {}
    virtual void goo() { cout << "Derived::goo" << x << endl; }
};

int main()
{
    Derived d;
    d.foo();
}
