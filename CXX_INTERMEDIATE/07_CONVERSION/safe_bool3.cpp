#include <iostream>

class istream
{
public:
    bool fail() { return false; }

    explicit operator bool() { return fail() ? false : true; }

};

istream cin;

int main()
{
    //bool b1 = cin;    // error // 암시적 변환 허용되지 않기 때문에

    bool b1 = static_cast<bool>(cin); // ok // 명시적 변환 해주었기 때문에

    int n = 10;
    cin << n;  // error

    if( cin ) {} //explicit bool로 변환하면 if문을 사용해서 객체를 조사 할 수 있다.

    if ( cin == false ) {} // error
}
