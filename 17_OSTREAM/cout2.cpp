/*
 *

 1. 모든 primitive 타입에 대해서 operator<<() 연산자 함수 제공

 2. 리턴 값이 중요 : 자기 자신을 참조로 리턴한다.
 - 여러 개를 연속적으로 출력할 수 있게 된다.

 3. 실제로 화면에 출력하는 원리는?
 - 각 OS가 제공하는 시스템 콜 사용
 - windows : windows API 사용 - WriteFile()
 - linux   : linux system call 사용 - write()

 *
 */


#include <cstdio>
namespace std
{
    class ostream
    {
        public:
            ostream& operator<<(int n) 
            { 
                printf("%d", n);
                return *this;
            }

            ostream& operator<<(double d) 
            {
                printf("%f", d);
                return *this;
            }

    };
}
ostream cout;

int main()
{
    cout <<3 << 4;
    cout <<3.4;
}
