/*
 *
 
 1. 객체가 자신의 타입으로 초기화 될 때
  - Point p2(p1);
  - Point p2{p1};
  - Point p2 = p1;

 2. 함수 인자로 객체를 값으로 받을 때 (call by value)
  - const &를 사용하면 복사 생성자/소멸자의 호출을 막을 수 있다.
  - void foo( const Point& p);

 3. 함수가 객체를 값으로 리턴 할 때 - 리턴용 임시객체 생성.
  - RVO / NRVO
  - g++ 사용시 -fno-elide-constructors 옵션 사용하면 복사생성자 생략 안됨.

 
 복사 생성자가 불리는 경우
 - 객체가 자신의 타입으로 초기호 다뢰 때
 - 함수 인자로 객체를 값으로 받을 때 ( call by value)
 - 함수가 객체를 값으로 리턴할 때 (return by value)
 
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
};

//copy ellipse 컴파일러가 복사생성자 생략 하는것
//
Point foo()
{
    Point pt(1, 2); //생성자
    
    return pt;  // 리턴용 임시객체 생성
                // 임시객체 리턴.
}
int main()
{
    Point p;    //생성자 호출
    foo();

    //.... //foo() 리턴된 임시객체 파괴
}
