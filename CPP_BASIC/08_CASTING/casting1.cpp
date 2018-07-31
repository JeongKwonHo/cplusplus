#include <cstdlib>

int main()
{
    //C Style Casting
    //int* p = (int*)malloc(100);
    
    //C++ Style Casting
    int* p = static_cast<int*>(malloc(100));

}
