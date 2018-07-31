
#include <iostream>

class Complex
{
    int re;
    int im;

public:
    Complex(int r, int i) : re(r), im(i) {}

    void print() const
    {
        std::cout<< re << ", " <<im <<std::endl;
    }
    
    friend Complex operator+(const Complex& c1, const Complex& c2);
};

Complex operator+(const Complex& c1, const Complex& c2)
{
    Complex temp(c1.re+c2.re, c1.im + c2.im);
    return temp;
}
int main()
{
    Complex c1(1,1);
    Complex c2(2,2);

    Complex c3 = c1 + c2;
    
    c3.print();

    return 0;
}
