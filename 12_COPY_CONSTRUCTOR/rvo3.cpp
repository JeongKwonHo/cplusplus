/*
 *
 
 핵심 개념

 1. 함수가 값 타입으로 리턴 할 때
  - 리턴용 임시객체가 생성된다.
  - 리턴용 임시객체는 함수 호출이 이루어지는 문장이 종료 될때 파괴된다.
 
 2. 함수가 참조를 리턴하면 리턴용 임시객체가 생성되지 않는다.
 
 3. 지역변수는 참조로 리턴 할 수 없다.

 4. 지역변수를 리턴할 때는 임시객체를 사용한 리턴이 효율적이다.
  - RVO : Return Value Optimization
  - NRVO : named RVO

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


//Point& foo() // 참조 리턴 안됨 지역변수 return 해주면 안된다.
Point foo()
{
    Point pt(1,1);
    std::cout<<"foo"<<std::endl;
    return pt; //pt를 복사 해서 리턴용 임시객체 생성
    
    //만들면서 리턴하자. RVO
    //임시객체로 리턴
    //return Point(1,1);
}


int main()
{
    foo();
    std::cout<<"end of main" <<std::endl;
}

// 1. 지역변수 pt 생성자
// 2. foo 출력
// 3. 복사 생성자 - 임시객체
// 4. 지역변수 pt 소멸자
// 5. 소멸자 - 임시객체
// 5. end of main
