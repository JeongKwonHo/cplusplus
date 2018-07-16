/*
 *
 
 1. []연산을 사용한 컨테이너 접근
  - vector, deque 사용 가능.
  - list는 []연산을 사용할 수 없다.
 
 2. 컨테이너의 모든 요소를 열거하는 방법
  - []연산자를 사용한 방법
  - range for 사용 - C++11
  - 반복자를 사용한 방법

 *
 */

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    // 1. [] 연산자 - list는 안됨
    for(int i=0;i<v.size(); i++)
    {
        std::cout<< v[i] << std::endl;
    }

    // 2. range for
    for ( auto& n : v)
        std::cout<<n<<std::endl;
    
    // 3. 반복자 사용
    auto p1 = std::begin(v);
    while( p1!=std::end(v))
    {
        std::cout<<*p1<<std::endl;
        ++p1;
    }
}
