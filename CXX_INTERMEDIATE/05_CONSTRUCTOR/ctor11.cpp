// 생성자에서 예외가 나오면 소멸자를 호출하지 못한다.
// 해결책 2. two-phase constructor

#include <iostream>
using namespace std;

struct Resource
{
    Resource() { cout << "acquire Resource" << endl; }
    ~Resource() { cout << "release Resource" << endl; }
};

class Test
{
    Resource* p;
public:
    Test() : p(0)
    {
        // 예외 가능성이 있는 어떠한 작업도 하지 않는다.
    }
    
    //자원 할당 전용 함수
    void Construct()
    {
        p = new Resource;
        cout << "Test()" << endl;
        throw 1;
    }
    ~Test()
    {
        delete p;
        cout << "~Test()" << endl;
    }
};

int main()
{
    try 
    {
        Test t;
        t.Construct(); // 필요한 자원 할당
    }
    catch (...)
    {
        cout <<"예외 발생" << endl;
    }
}
