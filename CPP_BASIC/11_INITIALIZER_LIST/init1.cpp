/*
 *
 
 핵심 개념
 
 1. 생성자의 ()뒤에 :을 표기하고 멤버를 초기화 하는것.

 2. 특징
  - 대입이 아니라 초기화

 *
 */
#include <iostream>

class Point
{
private:
    int x;
    int y;
    const int c;
public:
    Point() : x(0), y(0), c(10) // 초기화 리스트
                         // initializer_list
    {
        // 대입
        //c = 10; // error
        
        //old style initialization
        //x = 0;
        //y = 0;
    }
};

int main()
{
    Point p;
    

    const int c1 = 10;  //ok

    //const int c2;       //error
    //c2 = 10;            //error
    

    int n1 = 0; // 초기화
                // 생성자로 초기화
    
    int n2;     // 생성자 호출
    n2 = 0;     // 대입. 대입연산자 호출
}
