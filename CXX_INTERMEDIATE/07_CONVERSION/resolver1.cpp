#include <iostream>
#include <cstdlib>

using namespace std;

/*
template<typename T>
T* memAlloc(int sz)
{
    return (int*)malloc(sz);
}
*/

class memAlloc
{
    int size;
public:
    inline memAlloc(int sz) : size(sz) {}
    
    template <typename T>
    operator T*()
    {
        return (T*)malloc(size);
    }
}
int main()
{
    // double* p = memAlloc<double>(40); // 추론을 위해 <double>로 명시하는 방법
    

    double* p1 = memAlloc(40); // 클래스 이름에 괄호 : 임시객체
                               // 임시객체가 double*로 변환되어야 한다.
                               // 임시객체.operator double*()

    int*    p2 = memAlloc(40); // 좌변의 값을 통해 우변의 return 값을 추론하는 방법


}
