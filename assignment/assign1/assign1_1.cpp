#include <iostream>

void Swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a {10};
    int b {20};

    Swap(a, b);
    std::cout<< a << ",  " << b << std::endl;
}
