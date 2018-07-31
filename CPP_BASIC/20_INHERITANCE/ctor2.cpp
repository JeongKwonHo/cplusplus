/*
 *
 
 1.생성자 호출의 원리
  - 파생 클래스의 생성자에서 기반 클래스의 디폴트 생성자를 호출하는 코드를 컴파일러가 제공해주는 것
 
 *
 */
#include <iostream>
using namespace std;

class Base
{
    int data;
public:
    Base()      { cout << "Base()"    << endl;}
    Base(int a) { cout << "Base(int)" << endl;}
    ~Base()     { cout << "~Base()"   << endl;}
};

class Derived : public Base
{
public:
    Derived()      : Base() {}
    Derived(int a) : Base(){}

    ~Derived()     { ~Base(); }
};

int main()
{
    Derived d1;
    Derived d2(5);
}
