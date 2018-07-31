/*
 *

 1. 함수 객체(Function Object)
  - ()연산자를 재정의해서 함수처럼 사용가능한 객체
  - "Function Object"또는 "Functor"라고도 부른다.

 2. 함수 객체의 장점
  - 특정 상황(다른 함수의 인자로 전달될 때)에서는 일반함수보다 빠르다 => 인라인 치환
  - 상태를 가지는 함수(멤버 데이터가 있고, 멤버 함수를 활용 가능)

 *
 */

#include <iostream>

int add(int a, int b) //동작만 할 수 있다. 
{
    //static int base = 10; //이렇게 하면 10을 못 바꾼다. 
    return a+b;
}

struct Plus
{
    //상태를 가지고 다양하게 프로그래밍 할 수 있다.
    //활용도 자체가 다르다.
    int base;
    Plus(int n =0) : base(n) {}
    void resetBase(int n) {}    
    int operator()(int a, int b)
    {
        return base + a+b;
    }
};

int main()
{
    Plus p;
    int n = p(1,2); // 함수 처럼 사용
            //p.operator()(1,2)
    //a + b;    //a.operator+(b)
    //a - b;    //a.operator-(b)
    //a();      //a.operator()()
    //a(1,2);   //a.operator()(1,2)
    
    std::cout<<n <<std::endl;

}
