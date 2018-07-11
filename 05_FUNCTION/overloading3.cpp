

#include <iostream>

void f1(int n)
{
    std::cout<<"int"<<std::endl;
}

void f1(int* p)
{
    std::cout<<"int*" <<std::endl;
}

int main()
{
    f1(0);          //int
    f1((int*)0);    //int*
    f1(nullptr);    //int*
}

