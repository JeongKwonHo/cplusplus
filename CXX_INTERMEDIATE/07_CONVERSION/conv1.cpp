#include <iostream>

class Point
{
    int x, y;
public:
    Point()             : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
    
    
    // 변환 연산자 : 객체를 다른 타입으로 변환할때 호출한다.
    // 특징 : 리턴 타입을 표기하지 않는다.
    operator int()
    {
        return x;
    }
};

int main()
{
    int    n = 3;
    double d = n;   //암시적 형 변환 발생

    Point p1(1,2);

    n = p1;  // p1.operator int() 가 있으면 찾아서 변환, default는 없으므로 error

    std::cout << n << std::endl;

    return 0;
}
