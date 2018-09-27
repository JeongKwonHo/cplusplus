
//const 붙이는 이유는
//안정성 뿐만 아니라
//이 함수는 내부적으로 바꾸지 않을거다. 


#include <iostream>

class Point
{
public:
    int x, y;

    Point(int a=0, int b=0) : x(a), y(b) {}

    void set(int a, int b)
    {
        x = a;
        y = b;
    }
    
    void print() //const  // 상수 멤버 함수
    {
        //x = 10; //error. 모든 멤버를 상수 취급한다.
        std::cout << x << ", " << y << std::endl; // Read 가능
    }
};

int main()
{
    
    const Point p(1, 1);
    
    //p.x = 10;       // error
    //p.set(10, 20);    // error 
    //p.print();      // error 반드시 상수 멤버 함수가 되어야 한다.
}
