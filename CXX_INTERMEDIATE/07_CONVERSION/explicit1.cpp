#include <iostream>

class Test
{
    int value;
public:
    explicit Test(int n) : value(n) {}

};

int main()
{

    // what's difference?

    Test t1(5);     // 인자가 한개인 생성자 호출
                    // Direct Initialization

    Test t2 = 5;    // 1. 변환 생성자를 사용해서 5를 가지고 Test의 임시객체 생성
                    // 2. 임시객체를 복사 생성자를 새용해서 t2에 복사
                    // Copy Initialization
}
