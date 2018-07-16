#include <iostream>
#include <algorithm>

int main()
{
    int a {10};
    int b {20};

    double c{3.3};
    double d{4.4};

    std::swap(a, b);
    std::swap(c, d);

    std::cout<< a << ",  " << b << std::endl;
    std::cout<< c << ",  " << d << std::endl;
}
