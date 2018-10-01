/*
 *
    range for
    - C++11에서 도입된 문법
    - STL컨테이너, raw 배열에 있는 모든 요소에 접근하기 위한 편리한 방법
    - java, C# 등의 foreach()와 유사한 개념
 *
 */

#include <iostream>
#include <list>

int main()
{
    //int x[10] = {1,2,3,4,5,6,7,8,9,10};
    std::list<int> s = {1,2,3,4,5,6,7,8,9,10};

    // foreach()
    for(auto& n : s)
        std::cout << n << std::endl;
}
