/*
 *
 
 cout의 원리
 
 1. cout은 ostream 타입의 객체이다.

 2. <<연산자를 각각의 primitive 타입에 대해서 연산자 오버로딩 한 것.
  - cout << 5 => cout.operator<<(int)
  - cout << 3.4 => cout.operator<<(double)

 *
 */

#include <iostream>
using namespace std;

/*
namespace std
{
    class ostream
    {
        //.....
        operator<<(int);
        operator<<(double);
    };
    ostream cout;
}
*/
int main()
{
    int n {10};
    double d{3.4};

    cout.operator<<(n);
    cout.operator<<(d);
    cout<<n;    //cout.operator<<(n)
    cout<<d;    //cout.operator<<(d)


}
