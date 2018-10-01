#include <iostream>

void true_function(){}

class istream // basic_istream
{
public:
    bool fail() 
    {
        return false;
    }
    
    // 방법 1. bool로 변환 - 단점. shift 연산이 허용된다.
    operator bool() { return fail() ? false : true; }
    
    // 방법 2. void*로 변환
    operator void*() { return fail() ? 0 : this; } // this로 리턴하는 이유? 0이 아닌 참이면 되므로...

    // 방법 3. 함수 포인터로 변환.
    typedef void(*F)();
    operator F() { return fail() ? 0 : &true_function; }
    
    // 방법 4. 멤버 함수 포인터로의 변환 - Safe BOOL
    //          if() 문에 넣을 수 있고, side effect가 가장 적다..
    struct Dummy
    {
        void true_function() {}
    };
    typedef void(*F)();
    operator F() { return fail() ? 0 : &Dummy::true_function; }

};

istream cin;

int main()
{
    int n = 0;

    if (cin.fail()) {}
    
    cin << n;   //이렇게 하면 bool 변환시 shift 연산이라서 오류가 안난다.

    delete cin; //void*의 경우에는 delete 시 compile 에러가 안난다.

    //함수 포인터는 if문에 들어갈 수 있다.
    //함수 포인터는 shift연산과 delete를 할 수 없다.

    void(*f)() = cin; // 다시 이 문제가 생겼다.
    //멤버 함수 포인터 사용

}
