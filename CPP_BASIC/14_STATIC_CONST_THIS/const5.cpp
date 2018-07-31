/*
 *
 
 1. mutable
  - 상수 멤버 함수 안에서 값을 변경하고 싶을 때 사용
  - 논리적으로는 상수 멤버 함수가 되야 하지만, 다양한 이유로 멤버의 값을 변경하고 싶을 때 사용

 2. 상수 멤버 함수 주의사항
  - 상수 멤버 함수 안에서는 모든 멤버가 상수 취급된다.
  - 동일 이름의 상수 멤버 함수와 비상수 멤버 함수를 동시에 제공 할 수 있다.
  - 멤버 함수를 선언과 구현으로 분리할 때 선언과 구현 모두에 const를 붙여야 한다.

 *
 */
#include <iostream>

class Test
{
    int data = 0;
public:
    const int* getPointer() const 
    {
        return &data;
    }

    void foo()
    {
        std::cout << "1" <<std::endl;
    }
    void foo() const
    {
        std::cout<<"const foo"<<std::endl;
    }
    
    void goo() const;

};

void Test::goo() const
{
    //선언부에 const 붙였으면 구현부에도 const 붙여야 한다.
    std::cout << "const 어렵다..."<<std::endl;
}

int main()
{
    Test t1;
    t1.foo();
    
    const Test t2;
    t2.foo();
}

