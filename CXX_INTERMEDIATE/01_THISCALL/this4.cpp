#include <iostream>

class A 
{ 
    int a;
public:
    void fa() {
        std::cout << this << std::endl;
        
    }
};

class B 
{
    int b;
public:
    void fb() {
        std::cout << this << std::endl;
    }
};

class C : public A, public B
{
    int c;
};

int main()
{
    C obj;

    A* pA = &obj;
    B* pB = &obj; // &obj + sizeof(A)

    std::cout << &obj << std::endl;
    std::cout << pA   << std::endl;
    std::cout << pB   << std::endl;

    obj.fa(); //fa(&obj) cout << this => 1000
    obj.fb(); //fb(&obj + sizeof(A)) cout << this = > 1004
}
