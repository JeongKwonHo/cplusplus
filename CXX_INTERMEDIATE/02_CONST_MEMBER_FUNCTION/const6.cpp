#include <iostream>

struct Test
{
    void foo() 
    {
        std::cout << "foo()" << std::endl;
    }

    void foo() const
    {
        std::cout << "foo() const" << std::endl;
    }
    
    void goo();
};

void Test::goo()
{

}

int main()
{
    Test t1;
    t1.foo();

    const Test t2;
    t2.foo();
}
