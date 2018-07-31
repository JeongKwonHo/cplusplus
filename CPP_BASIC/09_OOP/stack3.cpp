
//Stack을 만들면서 객체지향의 기본 개념을 이해
//총 10단계의 과정 중 3단계

/*
 *

 1. 필요한 타입을 먼저 설계하자.
 - Complex가 필요하면 int 타입 2개를 사용하지 말고 Complex 타입을 만들자.
 - 구조체를 사용해서 "Stack"이라는 타입을 만들자.

 2. push 함수의 모양
 - Stack 타입이 없다면 : void push(int* buf, int* idx, int n)
 - Stack 타입이 있다면 : void push(Stack* s, int n)

 3. 문제접
 - Stack의 상태를 나타내는 데이터와 Stack의 상태를 조작하는 함수가 분리되어 있다.
 - push(), pop()함수가 1번째 인자로 Stack을 받아야만 한다.
 - 상태를 나타내는 데이터와 상태를 조작하는 함수를 묶으면 어떨까?
 *
 */


#include <iostream>

struct Stack
{
    int buf[10];
    int idx = 0;
};

void push(Stack* s, int n) 
{
    s->buf[(s->idx)++] = n;
}

int pop(Stack* s) 
{
    return s->buf[--(s->idx)];
}

int main()
{
    Stack s1, s2;
    s1.idx = 0;
    s2.idx = 0;

    push(&s1, 10);
    push(&s1, 20);
    push(&s1, 30);

    std::cout<< pop(&s1) <<std::endl; // 30

    //LIFO
}

