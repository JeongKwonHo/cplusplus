#include <iostream>
using namespace std;

class Point
{
    int x, y;
public:
    Point()     : x(0), y(0) { cout << "Point()" << endl; }
    Point(int a, int b) : x(a), y(b) { cout << "Point(int,int)" << endl; }
};

class Rect
{
    Point p1;
    Point p2;
public:
    Rect() : p1(0,0), p2(0,0) //컴파일러가 기본적으로 이렇게 만듬
    {

    }

};

int main()
{
    Rect r; // p1의 생성자, p2 생성자, Rect 생성자 순서

}
