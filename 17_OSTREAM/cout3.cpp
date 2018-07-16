/*
 *

 cout과 사용자 정의 타입

 1. 사용자 정의 타입을 cout으로 출력하는 방법.
  - operator<<() 함수를 일반 함수로 제공하면 된다.


 *
 */

#include <iostream>
using namespace std;

class Complex
{
    int re, im;
public:
    Complex(int r = 0, int i = 0) : re{r}, im{i} {}
    
    friend ostream& operator<<(ostream&, const Complex&); 

};

ostream& operator<<(ostream& os, const Complex& c)
{
    //상수객체는 상수 멤버만 호출가능하다.
    //os.operator<<(3);

    os << c.re << ", " <<c.im;
    return os;
}
int main()
{
    Complex c(1,1);
    
    cout << c << endl; //cout.operator(c)
                       //cout.operator<<(Complex)
                       //operator<<(cout, c)
}
