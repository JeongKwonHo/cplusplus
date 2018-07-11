/*
 *
 
 핵심 개념

 1. 임시 객체 (temporary object)
  - "클래스이름()"로 만드는 객체
  - 사용자가 직접 만들거나 컴파일러에 의해 임시 객체를 만드는 코드가 생성되기도 한다.
  - 단일 문장에서만 사용된다. 문장의 끝에서 파괴된다.

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

//void foo(Point pt)  //Point pt = p; 즉, 복사생성자 호출
void foo(const Point& pt) 
{

}

int main()
{
    //Point p1(1, 1);                 // 1. 생성자
    
    Point(1,1); //클래스 이름() //임시객체 생성
    //임시객체는 수명이 단일 문장. 즉, 문장이 끝나면서 소멸

    std::cout << "AAA" <<std::endl; // 2. AAA
                                    // 3. 소멸자
}
