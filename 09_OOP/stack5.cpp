
//Stack을 만들면서 객체지향의 기본 개념을 이해
//총 10단계의 과정 중 5단계

/*
 *
 
 1. 접근 지정자
 - private : 멤버 함수에서만 접근 할 수 있다.
 - public : 멤버 함수가 아닌 함수에서도 접근할 수 있다.

 2. 정보 은닉(information hiding)
 - 멤버 데이터를 외부에서 직접 접근할 수 없게 하고, 멤버 함수를 통해서만 접근가능하게 한다.
 - 외부에 잘못된 사용으로부터 객체가 불안해 지는 것을 막을 수 있다.
 - Stack을 사용하는 사람은 push()/pop() 함수만 알면 되고, Stack의 내부 데이터를 몰라도 된다. (encapsulation)

 3. struct vs class
 - struct : 접근 지정자 생략 시 디폴트가 public
 - class  : 접근 지정자 생략 시 디폴트가 private

 4. 문제점
 - init() 함수를 대체 할 수는 없을까?

 *
 */


#include <iostream>
//struct Stack
class Stack
{
    //멤버 데이터
    private:
        int buf[10]; 
        int idx = 0;

    public:
        //멤버 함수
        void init()
        { 
            idx = 0;
        }
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
    s1.init();   
    //s1.idx = 0; //error private member이기 때문에.


    //push(&s1, 10);    // 함수 중심.    
    s1.push(30);        // 객체 중심.

    std::cout<< s1.pop() <<std::endl; // 30

    //LIFO
}

