// this1.cpp - 멤버 함수의 호출 원리

// 1. 멤버 함수는 1번째 인자로 객체의 주소(this)가 추가된다.
// 2. static 멤버 함수는 인자로 객체의 주소(this)가 추가되지 않는다. 
class Point
{
    int x = 0, y = 0;
public:
    void set( int a, int b) //set(Point* const this, int a, int b)
    {
        x = a;  //this->x = a;
        y = b;  //this->y = b;
    }
    static void foo(int a)
    {
        //x = a;  //error this->x = a; 접근 불가능
    }

};

int main()
{
    Point p1;
    Point p2;

    Point::foo(10); // push 10
                    // call Point::foo
    // this call
    p1.set(10, 20); // set(&p1, 10, 20)
                    // push 20
                    // push 10
                    // mov  ecx, &p1    //객체 주소는 레지스터로
                    // call Point::set
}
