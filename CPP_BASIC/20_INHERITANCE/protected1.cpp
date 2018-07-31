/*
 *
 
 1. private :
  - 멤버 함수와 friend 함수만 접근 가능

 2. protected :
  - 멤버 함수와 friend 함수
  - 파생 클래스의 멤버 함수, 파생 클래스의 friend함수에서 접근 가능

 3. public:
  - 모든 함수에서 접근 할 수 있다.

 *
 */

class Base
{
private:
    int a;
protected:
    int b;
public:
    int c;
};

class Derived : public Base
{
public:
    void foo()
    {
        //a = 10; // error
        b = 10; // ok
        c = 10; // ok
    }
};

int main()
{
    Base b;
    //b.a = 10;  // error
    //b.b = 10; //error
    b.c = 10;  // ok..

}
