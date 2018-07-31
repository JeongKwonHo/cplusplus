
//Stack을 만들면서 객체지향의 기본 개념을 이해
//총 10단계의 과정 중 7단계

/*
 *
    
 핵심 개념
 
 1. 자료구조의 변경
 - 사용자가 스택의 버퍼 크기를 변경할 수 있게 동적 메모리 할당 사용

 2. 소멸자 (Destructor)
 - "~클래스 이름()"의 모양의 함수
 - 객체가 파괴될 때 호출된다.
 - 객체가 자원(메모리)를 할당한 경우 소멸자에서 해지한다.
 - 리턴 타입을 표기하지 않으면 인자도 가질 수 없다.

 *
 */


#include <iostream>

class Stack
{
    //멤버 데이터
    private:
        int* buf;
        int idx ;

    public:
        // 생성자 : 객체가 생성될때 자동으로 호출.
        Stack(int sz = 10)      //buf 사이즈 임의 설정, default parameter 10
        { 
            buf = new int[sz];  //동적 할당, 메모리 해제 필요 
            idx = 0;
        }
        // 소멸자 : 객체가 파괴될때 자동으로 호출.
        ~Stack()
        {
            delete[] buf;
            buf=nullptr;
        }

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
    Stack s1(20);

    s1.push(30); 

    std::cout<< s1.pop() <<std::endl; // 30

}

