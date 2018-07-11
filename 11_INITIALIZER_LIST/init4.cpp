/*
 *
 
 핵심 개념
 
 1. 초기화 리스트가 반드시 필요한 경우
  - 객체가 상수 멤버나 참조 멤버를 가진 경우 초기화 리스트로 초기화 되어야 한다.
  - 디폴트 생성자가 없는 경우 객체를 멤버로 가진 경우도 초기화 리스트를 사용해서 초기화 해야한다.
 *
 */
class Point
{
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}

};

class Rect
{
    Point p1;
    Point p2;

    const int c;
public:
    Rect() : p1(0,0), p2(0,0), c(0)
    {
        //c = 0; //이렇게 초기화 불가능
    }
};

int main()
{
    Rect r;
}

