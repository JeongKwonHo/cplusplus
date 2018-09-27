// 생성자에서 예외가 나오면 소멸자를 호출하지 못한다.
// 해결책 1. Raw Pointer 대신 스마트 포인터 사용.

#include <iostream>
#include <memory>
using namespace std;

struct Resource
{
    Resource() { cout << "acquire Resource" << endl; }
    ~Resource() { cout << "release Resource" << endl; }
};

class Test
{
//    Resource* p;
    unique_ptr<Resource> p;
public:
    Test() : p( new Resource )
    {

        cout << "Test()" << endl;
        throw 1;
    }
    ~Test()
    {
        cout << "~Test()" << endl;
    }
};

int main()
{
    try {
    Test t;
    }
    catch (...)
    {
        cout <<"예외 발생" << endl;
    }
}
