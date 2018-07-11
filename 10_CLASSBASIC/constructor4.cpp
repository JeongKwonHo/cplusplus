/*
 *
 *
 */

class Point
{
private:
    int x, y;
public:
    
    
    //Point() = delete; //복사생성자를 삭제 많이한다.

    Point() = default; //C++11  매개변수 0으로 초기화
    //Point() {}
    
    Point(int a, int b) {}
};

int main()
{
    Point p;
}
