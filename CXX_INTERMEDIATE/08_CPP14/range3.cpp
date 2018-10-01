#include <iostream>
#include <list>
using namespace std;

struct Point3D
{
    int x = 1;
    int y = 2;
    int z = 3;
    
};

int* begin(Point3D& p3) { return &(p3.x); }
int* end(Point3D& p3) { return &(p3.z)+1;}


int main()
{
    Point3D p3;

    for(auto& n : p3)
        cout << n << endl;
}
