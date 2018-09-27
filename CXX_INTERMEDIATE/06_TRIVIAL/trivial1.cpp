#include <iostream>
#include <type_traits>

using namespace std;

// Trivial : 사소한, 하찮은, 하는일 없다.

// Trivial default Constructor : 기본 생성자가 하는 일이 없는 경우


class A
{
public:
    
    A() = default;  //컴파일러 한테 디폴트 정의해달라
    //A() {}  //이 경우는 한다고 생각

    //virtual void foo() {} // 가상함수 테이블 초기화 하므로 하는일이 있다.
    

    void foo() {} //이 경우에는 trivial 하다.

};

int main()
{
    cout << is_trivially_constructible<A>::value << endl;
}
