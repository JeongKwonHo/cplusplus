#include <iostream>
#include <iterator>
#include <list>
#include <vector>

//using namespace std;


//Container version
template<typename C>
//decltype(c.begin()) begin(C& c) //compile error  // c 선언 시점보다 앞이라서 error.
constexpr auto Begin(C& c) -> decltype(c.begin())
{
    return c.begin();
}

template<typename C>
constexpr auto End(C& c) -> decltype(c.end())
{
    return c.end();
}

//Array version
template<typename T, std::size_t N>
constexpr T* begin( T(&arr)[N]) //T타입의 크기가 N인 배열을 가리킬 수 있는 참조 = T(&arr)[N]
{
    return arr;
}

template<typename T, std::size_t N>
constexpr T* end( T(&arr)[N])
{
    return arr + N;
}

int main()
{
    std::list<int> s = { 1,2,3 };
    int x[3]    = { 1,2,3 };

    auto p1 = Begin(s);
    auto p2 = Begin(x);


}
