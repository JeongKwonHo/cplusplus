
//Stack을 만들면서 객체지향의 기본 개념을 이해
//총 10단계의 과정 중 4단계

/*
 *

 1. 상태를 나타내는 데이터와 상태를 조작하는 함수를 묶는다.
 - C++의 구조체는 함수를 포함 할 수 있다.

 2. 멤버 함수에서는 멤버 데이터를 접근 할 수 있다.

 3. push 함수의 모양
 - Stack 타입이 없다면 : void push(int* buf, int*dix, int n)
 - Stack 타입이 있다면 : void push(Stack* s, int n)
 - 멤버 함수로 만들면  : void push(int n)

 4. 문제점
 - 사용자가 idx에 잘못된 값을 넣으면 어떻게 될까?
 - 잘못 사용하기 어렵게 만들 수 없을까?

 *
 */


#include <iostream>

struct Stack
{
    //멤버 데이터
    int buf[10]; 
    int idx = 0;


    //멤버 함수
    void push(int n) 
    {
        buf[idx++] = n;
    }

    int pop() 
    {
        return buf[--idx];
    }

};

int main()
{
    Stack s1, s2;
    s1.idx = 0;
    s2.idx = 0;
    
    //push(&s1, 10);    // 함수 중심.    
    s1.push(30);        // 객체 중심.
    s2.push(20);        //내부적으로는 push(&s1, 20)

    std::cout<< s1.pop() <<std::endl; // 30

    //LIFO
}

