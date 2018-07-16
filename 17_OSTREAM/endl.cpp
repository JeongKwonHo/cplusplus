/*
 *

 endl의 원리

 1. endl은 함수이다.
  - cout << endl;
  - endl(cout);
  
 2. hex, dec, alpha, ...등은 모두 함수이다.
  - 입출력 조정자 (i/o manipulator)

 3. 사용자가 직접 만들 수 있다.

 *
 */
#include <cstdio>
#include <iostream>

class ostream
{
public:
    ostream& operator<<(int n)
    {
        printf("%d",n);
        return *this;
    }
    ostream& operator<<(double d)
    {
        printf("%f", d);
    }
    ostream& operator<<(char c)
    {
        printf("%c", c);
        return *this;
    }

    ostream& operator<<(ostream&(*f)(ostream&))
    {
        f(*this);       //endl(cout)
        return *this;
    }

};

ostream cout;

ostream& endl(ostream& os)
{
    os << '\n'; // cout <<'\n'
    return os;
}
ostream& tab(ostream& os)
{
    os <<'\t'; //cout <<tab
    return os;
}
int main()
{
    //cout << '\n'; 
    cout<<endl;

    endl(cout); //cout.operator<<(endl)
                // cout.operator<<(함수포인터)
    
    cout << tab;
    cout << 'A' << tab<<'B'<<endl;
}

