/*
 *
 
 핵심 개념

 1. 함수가 값 타입으로 리턴 할 때
  - 리턴용 임시객체가 생성된다.
  - 리턴용 임시객체는 함수 호출이 이루어지는 문장이 종료 될때 파괴된다.
 
 2. 함수가 참조를 리턴하면 리턴용 임시객체가 생성되지 않는다.

 *
 */
#include <iostream>

class Point
{
    int x, y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b)
    {
        std::cout << "Point()" <<std::endl;
    }
    Point(const Point& p) : x(p.x), y(p.y)
    {
        std::cout << "Point(Point&)" <<std::endl;
    }
    ~Point()
    {
        std::cout<< "~Point()" << std::endl;
    }

};

Point pt(1,1);

//Point foo() // 임시객체를 막으려면
Point& foo()
{
    std::cout<<"foo"<<std::endl;
    return pt; //pt를 복사 해서 리턴용 임시객체 생성
}

int main()
{
    foo();
    std::cout<<"end of main" <<std::endl;
}

// 1. 전역변수 생성자
// 2. foo 출력
// 3. 복사 생성자 - 임시객체
// 4. 임시객체 소멸
// 5. end of main
// 6. 전역변수 소멸자
