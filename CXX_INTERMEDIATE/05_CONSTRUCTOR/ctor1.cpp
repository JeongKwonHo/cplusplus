/*
 *
 *  1, 파생 클래스 생성시 기반 클래스의 생성자가 먼저 호출된다.
 *  2. 기반 클래스의 생성자는 항상 디폴트 생성자가 호출된다.
 *  3. 기반 클래스의 디폴트 생성자가 없는 경우 파생 클래스 객체를 만들 수 없다.
 *  4. 기반 클래스의 다른 생성자를 호출하려면 파생 클래스 생성자의 초기화 리스트에서 명시적으로 호출해야 한다.
 */
#include <iostream>
using namespace std;

class Base
{
public:
//    Base()      { cout << "B()"    << endl; }
    Base(int a) { cout << "B(int)" << endl; }
    ~Base()     { cout << "~B()"   << endl; }
};

class Derived : public Base
{
public:
    Derived()      : Base(0) { cout << "D()"    << endl; }
    Derived(int a) : Base(a) { cout << "D(int)" << endl; }
    ~Derived()     { cout << "~D()"   << endl; }
};

int main()
{
//    Derived d;
    Derived d(5);
}
