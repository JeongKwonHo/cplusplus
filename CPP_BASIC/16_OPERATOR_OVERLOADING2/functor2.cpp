/*
 *
 
 C++표준 함수 객체
  - <functional> 헤더
  - plus, minus, module 등등

 *
 */

#include <iostream>
#include <functional>

/*
template<typename T> struct Plus
{
    T operator()(T a, T b)
    {
        return a+b;
    }
};
*/

int main()
{
    /*
    Plus<int> p;
    int n = p(1,2);

    Plus<double> p2;
    double d = p2(1.2, 3.4);
*/
    std::plus<int> p;
    int n = p(1,2);

    std::cout<<n<<std::endl;
   // std::cout<<d<<std::endl;
}
