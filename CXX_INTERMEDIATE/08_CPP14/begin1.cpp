/*
 *
 *  1. 반복자를 꺼내는 2가지 방법
 *   - 컨테이너 멤버 함수 사용
 *    auto p1 = c.begin();     // STL의 대부분의 컨테이너에 사용할 수 있지만,
 *    auto p2 = c.end();       // raw 배열에는 사용할 수 없다.
 *
 *   - 멤버가 아닌 함수 사용
 *    auto p1 = begin(c);      // STL의 컨테이너 뿐 아니라, 
 *    auto p2 = end(c);        // raw 배열에도 사용할 수 있다.
 *  
 *  2. 일반함수 begin() / end()
 *   - C++11부터 제공
 *   - <iterator> 헤더 파일
 *   - STL 컨테이너 뿐 아니라 raw 배열에서 사용 가능한 알고리즘을 만들 수 있다.
 *   - C++11 : begin(), end()
 *   - C++14 : cbegin(), cend(), rbegin(), rend(), crbegin(), crend()
 *
 *
 */

#include <iostream>
#include <list>
#include <vector>
#include <iterator>

template<typename T>
void show(T& c)
{
    // auto p1 = c.begin();    // 배열에 대해서 error
    // auto p2 = c.end();
    auto p1 = std::begin(c);
    auto p2 = std::end(c);

    while(p1 != p2)
    {
        std::cout << *p1 << std::endl;
        ++p1;
    }
}

int main()
{
    std::list<int> c = {1,2,3};
    std::vector<int> b = {1,2,3};
    show(c);
    show(b);

    int x[3] = {1,2,3};
    
    show(x);
}
