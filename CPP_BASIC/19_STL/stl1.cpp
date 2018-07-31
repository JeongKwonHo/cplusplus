/*
 *
 
 Standard template Library
 "C++ 언어가 제공하는 템플릿 기반의 표준 라이브러리"

 
 배열 : 크기를 변경할 수 없다.
 STL vector : 크기를 변경할 수 있다.

 1.멤버 함수 이름이 대부분 동일하다.
  - 대부분 코드를 수정하지 않고 컨테이너를 교체할 수 있다.
  - 요소 삽입 : push_front, push_back, insert
  - 요소 제거 : pop_front, pop_back, erase
  - 요소 접근 : front, back
  - vector는 앞에 삽입할 수 없다. (push_front 함수가 없다.)
 
 2. 주의사항. 제거와 리턴을 동시에 하지 않는다.
  - pop_back : 제거만 하고 리턴 하지 않는다.
  - back : 리턴만 하고 제거 하지 않는다.

 *
 */

#include <iostream>
#include <vector>
#include <list>

int main()
{
    //int x[10];
    std::vector<int> v(10);
    v.resize(5);
    
    //list에서 vector로 바꾸려면 타입만 수정
    //std::list<int> s = {1,2,3};
    std::vector<int> s = {1,2,3};

    s.push_back(10);
    s.push_back(20);
    s.push_back(30);
    s.pop_back();

    //int n1 = s.pop_back(); //error 제거는 하나 리턴은 안함.
    int n2 = s.back(); //30 리턴은 하나 제거는 안함.
    s.pop_back();
    int n4 = s.back(); //20
}
