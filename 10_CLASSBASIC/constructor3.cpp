/*
 *
 
 핵심 개념
 1. 객체를 구성하는 요소의 생성자가 먼저 호출되고, 객체 자신의 생성자가 호출된다.
 *
 */

#include <iostream>

class Point
{
private:
    int x, y;

public:
    Point() { std::cout << "Point()" << std::endl; }

};

class Rect
{
private:
    Point p1;
    Point p2;
public:
    Rect() { std::cout << "Rect()" << std::endl; }

};

int main()
{
    Rect r;
    //Point p1 -> Point p2 -> Rect r 순으로 생성자 호출
}
