/*
 *
 
 1. 알고리즘이 사용하는 정책을 변경하는 방법
  - 일반 함수 사용
  - 함수 객체 사용 - <functional>
  - 람다 표현식 사용 (C++11)
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
    std::vector<int> v = {1,3,5,7,9,2,4,6,8,10};

    std::sort(std::begin(v), std::end(v));
    // 1. 일반 함수 사용. 
    std::sort(std::begin(v), std::end(v), cmp);
    // 2. 함수 객체 사용.
    std::greater<int> g;
    std::sort(std::begin(v), std::end(v), g);
    
    // 3. Lambda Expression - C++11
    std::sort(std::begin(v), std::end(v), 
            [](int a, int b) {return a>b;});

    for(auto& n:v)
        std::cout<<n<<", ";

    std::cout<<std::endl;

}
