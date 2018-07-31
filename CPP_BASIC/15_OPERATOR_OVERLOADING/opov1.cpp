/*
 *
 
 1. a + b 코드에서
  - a,b가 모두 primitive type(int, double 등)일 경우 : 덧셈 수행
  - a,b 중 하나라도 user define type일 경우 : operator+() 함수를 찾게 된다.

 2. c1 + c2 코드를 컴파일러가 해석하는 방버
  - c1.operator+(c2) 함수를 찾게 된다. => 멤버 함수 검색
  - operator+(c1,c2) 함수를 찾게 된다. => 멤버가 아닌 일반 함수 검색
 
 =============================================================================

 operator+() 함수 구현
 
 1. 멤버 함수로 구현
  - +는 이항 연산자이지만 "operator+() 함수의 인자는 하나"이다.
 
 2. 멤버 함수가 아닌 함수로 구현
  - "operator+()의 함수 인자는 2개"가 된다.
  - 일반적으로 "friend 함수로 등록" 하게 된다. (private 매개변수 접근하기 위해)

 *
 */

#include <iostream>

class Complex
{
    int re, im;
public:
    Complex(int r = 0, int i =0) :re(r), im(i) {}
 
    void print() const
    {
        std::cout<< re << ", "<< im <<std::endl;
    }
    
    Complex operator+(const Complex& p)
    {
        Complex temp(re+p.re, im + p.im);
        
        return temp;
    }
};

int main()
{
    int n = 3 + 4;  //ok

    Complex c1(1,1);
    Complex c2(2,2);

    Complex c3 = c1 + c2;   //c1.operator+(c2)  //먼저 찾고
                            //operator+(c1,c2)  //없으면 이거 찾는다.

    c3.print();
}
