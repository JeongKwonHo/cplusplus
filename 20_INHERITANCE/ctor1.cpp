/*
 *
 
 1. 파생 클래스 객체 생성시 기반 클래스의 생성자/소멸자도 호출된다.

 2. 생성자/소멸자 호출순서
  - 기반 클래스 생성자
  - 파생 클래스 생성자
  - 파생 클래스 소멸자
  - 기반 클래스 소멸자

 3. 기반 클래스의 생성자는 항상 디폴트 생성자가 호출된다.
  - 기반클래스에 디폴트 생성자가 없을 경우 기본적으로는 파생 클래스의 객체를 생성할 수 없다.

 4. 기반 클래스의 디폴트 생성자가 아닌 다른 생성자를 호출하는 방법
  - 파생클래스의 초기화 리스트에서 기반 클래스의 생성자를 명시적으로 호출해준다.

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
    Derived()      { cout << "Derived()"    << endl;}
    Derived(int a) : Base(a)
    {
        cout << "Derived(int)" << endl;
    }
    ~Derived()     { cout << "~Derived()"   << endl;}
};

int main()
{
    Derived d1;
    Derived d2(5);
}
