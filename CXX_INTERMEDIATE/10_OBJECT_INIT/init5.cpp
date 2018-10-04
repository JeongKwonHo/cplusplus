
class Point
{
    int x, y;
public:
    // explicit : 변환 생성자로 사용될 수 없다.
    // copy initialization 될 수 없다.
    explicit Point()             : x(0), y(0) {}
    explicit Point(int a)        : x(a), y(0) {}
    explicit Point(int a, int b) : x(a), y(b) {}
};

int main()
{
    Point p1(5);        // ok
   // Point p2 = 5;       // ok. 하지만 생성자가 explicit라면 error

    Point p3(1,1);      // ok
   // Point p4 = (1,1);   // error

    Point p5{1,1};      // ok
   // Point p6 = {1,1};   // ok. 하지만 생성자가 explicit라면 error

    Point p7;           // ok
    Point p8{};         // direct  
   // Point p9 = {};      // copy 
}
