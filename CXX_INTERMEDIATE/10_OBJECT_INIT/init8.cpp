#include <iostream>
using namespace std;

int main()
{
    int n1;     // default. 쓰레기값
    int n2{};   // value.   0
    int n3();   // 함수 선언

    int* p1 = new int;      // default. 쓰레기값
    int* p2 = new int();    // value.   0
    int* p3 = new int{};    // value.   0

    cout << *p1 << endl;    // 쓰레기 값
    cout << *p2 << endl;    // 0
    cout << *p3 << endl;    // 0
}

