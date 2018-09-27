#include <iostream>
#include <type_traits>
using namespace std;

// trivial default constructor의 조건
// https://en.cppreference.com/w/cpp/language/default_constructor

struct Base
{
   // Base() {}
};

class A : public Base //기반 클래스가 없거나, 기반 클래스가 trivial한 경우
{
    // Data data;      //객체형 멤버가 없거나, 객체형 멤버가 trivial한 경우

    // int n = 10; // 컴파일러가 디폴트 생성자에서 초기화 해주므로 없어야 한다.
    int n;
public:
    // A() {}                   // user define 생성자가 없어야
    // virtual void foo() {}    //가상 함수가 없어야
};

int main()
{
    cout << is_trivially_constructible<A>::value << endl;
}
