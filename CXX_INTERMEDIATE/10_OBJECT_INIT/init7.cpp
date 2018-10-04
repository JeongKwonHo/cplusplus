#include <iostream>
using namespace std;

class Point
{
public:
    int x;
    int y;

   // Point() {}
    Point() = default;
};

int main()
{
    Point p1;   // default initialization
    Point p2{}; // value initialization

    cout << p1.x << endl;
    cout << p2.x << endl;
}
