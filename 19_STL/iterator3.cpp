/*
 *
 
 1. 반복자의 장점 
  - 컨테이너의 내부 자료구조에 상관없이 동일한 방법으로 모든 요소를 접근 할 수 있다.
  - GoF's 디자인 패턴 중 "Iterator"패턴
 
 *
 */
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::list<int> s = {1,2,3,4,5};
    std::vector<int> v = {1,2,3,4,5};

    auto p1 = std::begin(s);
    auto p2 = std::begin(v);

    ++p1;
    ++p2;
    
    int n1 = *p1;
    int n2 = *p2;
}
