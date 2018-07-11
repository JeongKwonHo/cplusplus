
class Point
{
    int x,y;
public:
    Point()             { x = 0; y = 0; } //1
    Point(int a, int b) { x = a; y = b; } //2
};

int main()
{
    Point p1;       //1
    Point p2(1,2);  //2
    Point p3{ 1,2}; //3
    
    Point p4[3]; // 1번 생성자가 3회
    Point p5[3] = {Point(1,1)}; //첫번째는 2번 생성자, 나머지 두개는 1번 생성자
    
    Point* p6; // 생성자 호출 안됨.

    // sizeof만큼 메모리 할당. 생성자는 호출 안됨.
    p6 = static_cast<Point*>(malloc(sizeof(Point)));
    
    //p6 = new Point;       //생성자 호출. 
    p6 = new Point(1,2);    //생성자 호출.

    delete p6;

}

