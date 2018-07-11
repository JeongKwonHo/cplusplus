#include <iostream>
#include <cstdlib>

int main()
{
    //C style
    int* p1 = (int*)malloc(sizeof(int)*10);

    free(p1);
    
    //C++
    int* p2 = new int;  // int 한개 할당. 4byte
    delete p2;

    int* p3 = new int[10]; //int 10개 할당. 40byte
    delete[] p3;

    //delete p3;  //undefined (미정의 동작) 어떻게 될지 아무도 모른다.
    
}
