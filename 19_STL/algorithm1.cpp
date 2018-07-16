/*
 *
 
 1. STL 알고리즘의 특징
 - 멤버 함수가 아닌 일반 함수이다.
 - <algorithm>
 - 대부분 함수 인자와 반환 타입으로 반복자 사용한다.
 - 자료구조에 독립적이다.

 
 *
 */
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    std::list<int> s = {1,2,3,4,5};
    std::vector<int> v = {1,2,3,4,5};
    
    
    //s.find(3);
    //v.find(3);
    
    // std::list<int>::iterator p

    auto p1 = std::find(s.begin(), s.end(), 3);
    auto p2 = std::find(v.begin(), v.end(), 3);
    
    std::cout<<*p1<<std::endl;
    std::cout<<*p2<<std::endl;

}
