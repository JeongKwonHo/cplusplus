/*
 *

 1. 반복자(iterator)
  - 컨테이너의 요소를 가리키는 포인터와 유사한 객체
  - ++, *연산자 등을 재정의 해서 포인터와 유사하게 동작하도록 만든 것
  - container<primitive type>::iterator가 정확한 타입.
  - 멤버합수 begin()을 통해서 꺼낼 수 있다.
 
 2. 주의사항
  - end로 꺼내는 반복자는 마지막 요소가 아닌 마지막 다음 요소를 가리킨다.
 
 3. 반복자 꺼내기
  - 멤버 함수 begin/end 사용
  - 일반 함수 begin/end 사용 C++11


 *
 */

#include <iostream>
#include <vector>
#include <list>

int main()
{
  //  std::list<int> s = {1,2,3,4,5,6,7,8,9,10};
    
    std::vector<int> s = {1,2,3,4,5,6,7,8,9,10};

//    std::list<int>::iterator p = s.begin();
   // auto p1 = s.begin();
   // auto p2 = s.end(); //마지막 다음요소.
    
//   int s[] = {1,2,3,4,5,6,7,8,9,10};
   auto p1 = std::begin(s);
   auto p2 = std::end(s);

   //*p2 = 10; //runtime error

    while(p1!=p2)
    {
        int n =*p1;
        ++p1;
    }
    int n = *p;
    std::cout << n << std::endl;



}
