/*
 *
 
 핵심 개념

 1. 모양
 - 클래스 이름과 동일하다.
 - 리턴 타입을 표기하지 않는다.
 - 인자는 있어도 되고 없어도 된다.
 - 2개 이상 만들 수 있다.
 
 2. 특징
 - 객체를 생성하면 자동으로 생성자가 호출된다.
 - 생성자가 없으면 객체를 만들 수 없다.
 - 사용자가 생성자를 한 개도 만들지 않으면 컴파일러가 인자 없는 생성자를 제공해준다.
  => "디폴트 생성자(default constructor)라고 한다.

 *
 */
class Point
{

private:
    int x, y;

public:
    Point()     //default constructor
    {
        x = 0;
        y = 0;
    }

    Point(int a, int b)
    {
        x = a;
        y = b;
    }
};

int main()
{
    Point p1;
    Point p2(1,2);

    int n; //primitve type, 변수
    Point p3 // user-defined type, 객체 
}
