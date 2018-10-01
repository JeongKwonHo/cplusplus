#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main()
{
    // STL의 string 클래스는 생성자가 explicit가 아니다.
    string s1("hello");     // ok
    string s2 = "hello";    // ok

    // shared_ptr은 생성자가 explicit
    shared_ptr<int> p1 = new int; // error 생성자가 explicit
    shared_ptr<int> p2(new int);  // ok
}
