
//Stack을 만들면서 객체지향의 기본 개념을 이해
//총 10단계의 과정 중 9단계

/*
 *
 
 1.Stack은 int 뿐 아니라 다른 타입 버전도 필요하다.
 - 템플릿 사용.

 2. 하나의 스택에 여러 가지 타입이 보관되는 것이 아니라, 각각의 타입을 저장하는 stack 클래스를 별도로 코드 생성하는 것.

 3. 주의사항. 클래스 템플릿에서 멤버 함수 구현시
 - 클래스 선언 안에 구현부를 넣어도 되고, 
 - 클래스 선언에는 멤버 함수 선언만 넣고, 멤버 함수 구현은 클래스 외부에 놓아도 된다.
   하지만, 이때 구현부를 별도의 소스로 분리하면 안된다. 
   함수 선언과 구현 모두 헤더 파일에 있어야 한다. 

 *
 */


#include <iostream>

template<typename T>
class Stack
{
    private:
        T* buf;
        int idx ;

    public:
        Stack(int sz = 10)  
        { 
            buf = new T[sz];
            idx = 0;
        }
        ~Stack()
        {
            delete[] buf;
            buf=nullptr;
        }
        void push(T n) 
        {
            buf[idx++] = n;
        }

        T pop() 
        {
            return buf[--idx];
        }
};

int main()
{

    Stack<int> s1(20);
    
    s1.push(30); 

    Stack<double> s2(20);
    s2.push(100.111);

    std::cout<< s1.pop() <<std::endl; 
    std::cout<< s2.pop() <<std::endl; 

}

