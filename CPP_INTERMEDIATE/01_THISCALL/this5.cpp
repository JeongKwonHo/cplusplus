#include <iostream>

class A 
{ 
    int a;
public:
    void fa() {
        std::cout << this<<std::endl;
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

    obj.fa(); //fa(&obj) cout << this => 1000
    obj.fb(); //fb(&obj + sizeof(A)) cout << this = > 1004


    void(C::*f)();
    
    std::cout << sizeof(f) << std::endl;
    f = &C::fa; // f = { fa 주소, 0};
    (obj.*f)(); // f.함수주소(&obj + f.this offset)

    f = &C::fb; // f = { fb 주소, sizeof(A)};
    (obj.*f)(); // f.함수주소(?obj + f.this offset)
}
