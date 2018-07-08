/*
 *
 
 1. STL
 - C++ 표준 라이브러리
 - 다양한 자료구조와 알고리즘 함수를 제공한다.
 
 2. stack
 - 내부 버퍼 크기는 자동으로 관리한다.
 - 템플릿으로 되어있다.

 3. 제거용 함수와 리턴용 함수가 분리되어 있다.
 - pop : 제거만 하고 리턴 하지 않는다.
 - top : 리턴만 하고 제거되지 않는다.

 *
 */
#include <iostream>
#include <stack>    //C++ 표준 stack

int main()
{
    std::stack<int> s;
    
    s.push(10);
    s.push(20);
    s.push(30);

    //int n = s.pop(); //error. pop 제거만 되고 리턴 안됨.

    int n1 = s.top(); //return 만 하고 제거는 안됨.
    int n2 = s.top(); //n1 n2 같다.
    s.pop(); //pop 해줘야 제거

    std::cout << n2 << std::endl;

}
