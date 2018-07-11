
//Stack을 만들면서 객체지향의 기본 개념을 이해
//총 10단계의 과정 중 2단계

/*
 *
 
 전역 변수를 사용해서 버퍼와 index를 관리

 문제점
 - stack이 2개 이상 필요하면 어떻게 해야 할까?

 *
 */


#include <iostream>

int buf[10];
int idx = 0;

void push(int n) 
{
    buf[idx++] = n;
}

int pop() 
{
    return buf[--idx];
}
int main()
{
    push(10);
    push(20);
    push(30);

    std::cout<< pop() <<std::endl; // 30

    //LIFO
}

