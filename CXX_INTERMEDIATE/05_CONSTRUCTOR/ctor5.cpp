/*
 *
 *  생성 순서
 *  1. 기반 클래스의 멤버의 생성자
 *  2. 기반 클래스의 생성자
 *  3. 파생 클래스의 멤버의 생성자
 *  4. 파생 클래스의 생성자
 *  
 *
 */

#include <iostream>
using namespace std;

struct BM { BM() { cout << "BM()" << endl; } };
struct DM { DM() { cout << "DM()" << endl; } };

struct Base
{
    BM bm;
    int x;
    Base() { cout << "Base()" << endl; }
};

struct Derived : public Base
{
    DM dm;
    int y;
    Derived() { cout << "Derived()" << endl; }
};

int main()
{
    Derived d;
}
