#include <iostream>

namespace Util {
    template <typename T>
        void Swap(T& x, T& y)
        {
            T temp = x;
            x = y;
            y = temp;
        }
}

int main()
{
    int a {10};
    int b {20};

    double c{3.3};
    double d{4.4};

    Util::Swap(a, b);
    Util::Swap(c, d);

    std::cout<< a << ",  " << b << std::endl;
    std::cout<< c << ",  " << d << std::endl;
}
