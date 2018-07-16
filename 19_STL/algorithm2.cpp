/*
 *
 
 1. find 알고리즘
  - [first, last) 사이의 선형 검색을 수행한다.
  - last는 검색의 대상이 아니다.
  - 검색 실패시 0이 아닌 last를 반환한다.

 *
 */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    std::vector<int> v = {1,2,3,4,5};

    //[first, last) 시작하는 요소는 검색에 포함되지만, 끝나느 요소는 검색에 포함되지 않는다.
    auto p = std::Find (v.begin(), v.end(), 13);
    //검색 실패하면 v.end()를 리턴
    
    if(p==v.end())
    {
        std::cout<<"검색 실패"<<std::endl;
    }

    auto p1 = std::begin(v);
    
    //3을 찾을 수 없다. p1+2는 검색대상이 아니므로...
    auto ret = std::find(p1, p1+2, 3);

    if(ret == p1+2)
        std::cout<<"실패"<<std::endl;
    
    std::find(ret, std::end(v), 3);
    

}

