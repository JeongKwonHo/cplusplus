#include <iostream>
#include <list>

int main()
{
    std::list<int> s = {1,2,3,4,5,6,7,8,9,10};

    for(auto& n : s)
        std::cout << n << std::endl;

    //컴파일러가 해당 형태로 변경
    for(auto p = std::begin(s); p! = std::end(s); ++p)
    {
        auto& n = *p;

        std::cout << n << std::endl;
    }
}
