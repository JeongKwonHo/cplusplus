/*
 *
 핵심 정리
 
 1. 함수 인자
 - call by value     : 복사본을 생성하게 된다.
 - call by reference : 복사본을 만들지 않는다.
 
 2. 함수 리턴
 - return by value : 복사본(임시 객체)를 리턴한다. 
                     임시 객체는 등호의 왼쪽에 올 수 없다. (lvalue가 될 수 없다.)
 - return by reference : 복사본을 만들지 않는다.
 - 주의! 지역 변수는 참조로 리턴하면 절대 안된다. 

 *
 */

#include <iostream>

struct Point
{
    int x, y;
};

Point pt;

//Point goo() { return pt; } //pt를 return 했지만, 실제로는 pt가 아닌 pt를 복사해서 만든 리턴용 임시객체
Point& goo() 
{
    /*
    Point p;
    return p;
    절대 지역 변수는 참조로 리턴하면 안된다. undefined error
    */
    return pt; 
}

void f1(Point p) {}     // 복사본 생성
void f2(Point& r) {}    // 복사본 아님

int main()
{
    goo().x = 20; // return형이 refence가 아니면 -> 임시 객체는 lvalue로 사용할 수 없다 
                  // 참조 리턴인 경우 에러 아님.
    std::cout << pt.x << std::endl; //20
    return 0;
}
