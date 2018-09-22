/*
 *
 
 new 동작 방식
 1. 메모리 할당 - operator new() 함수 사용
 2. 생성자 호출
 3. 메모리 주소를 해당 타입으로 반환

 delete 동작 방식
 1. 소멸자 호출
 2. 메모리 해제 - operator delete() 함수 사용
 *
 */
#include <iostream>

class Point
{
    int x, y;
public:
    Point() 
    {
        std::cout<< "Point()" << std::endl;
    }
    ~Point()
    {
        std::cout<< "~Point()" << std::endl;
    }
};

int main()
{
    Point* p3 = static_cast<Point*>(operator new(sizeof(Point)));

    operator delete(p3);

    // malloc : 메모리만 할당
    Point* p1 = (Point*)malloc(sizeof(Point));
    free(p1);

    // new : 메모리 할당 + 생성자 호출
    Point* p2 = new Point;
    delete p2;
}

