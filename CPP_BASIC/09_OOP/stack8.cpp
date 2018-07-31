
//Stack을 만들면서 객체지향의 기본 개념을 이해
//총 10단계의 과정 중 8단계

/*
 *

 1. 선언과 구현의 분리
 - 클래스 선언 안에는 함수의 선언만 포함한다.
 - 함수의 구현은 클래스 외부에 구현한다.
 
 2. 선언 파일과 구현 파일의 분리
 - 클래스 선언부는 헤더 파일로 만든다.
 - 클래스 구현부는 소스 파일(.cpp)로 만든다.

 *
 */


#include <iostream>

//Stack.h
class Stack
{
    //멤버 데이터
private:
    int* buf;
    int idx ;

public:
    //클래스 안에는 멤버 함수 선언
    Stack(int sz = 10);
    ~Stack();
    void push(int n);
    int pop();
};

//Stack.cpp
//멤버 함수 구현은 클래스 외부.
Stack::Stack(int sz)   
{ 
    buf = new int[sz];
    idx = 0;
}

Stack::~Stack()
{
    delete[] buf;
    buf=nullptr;
}

void Stack::push(int n) 
{
    buf[idx++] = n;
}

int Stack::pop() 
{
    return buf[--idx];
}




int main()
{
    Stack s1(20);

    s1.push(30); 

    std::cout<< s1.pop() <<std::endl; // 30

}

