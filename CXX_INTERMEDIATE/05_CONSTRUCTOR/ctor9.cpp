// 생성자에서 예외가 나오면 소멸자를 호출하지 못한다.
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
    Test() : p( new Resource )
    {

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
    try {
    Test t;
    }
    catch (...)
    {
        cout <<"예외 발생" << endl;
    }
}
