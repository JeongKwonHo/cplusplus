
//Stack을 만들면서 객체지향의 기본 개념을 이해
//총 10단계의 과정 중 6단계

/*
 *
    
 1. 생성자
 - 클래스 이름과 동일한 이름을 가지는 함수.
 - 객체를 만들면 자동으로 생성자가 호출된다.
 - 리턴 타입을 표기하지 않는다.
 - 인자가 있어도 되고 없어도 된다.
 
 2. 문제점
 - buf 사이즈를 조절할 수는 없을까?
 *
 */


#include <iostream>

class Stack
{
    //멤버 데이터
    private:
        int buf[10]; 
        int idx;

    public:
        //클래스 이름과 동일한 함수 : 생성자
        Stack() { idx = 0;}
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
    Stack s1;

    s1.push(30); 
  

    std::cout<< s1.pop() <<std::endl; // 30

    //LIFO
}

