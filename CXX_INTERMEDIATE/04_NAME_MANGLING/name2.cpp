#include <cstdio>

int square(int n)
{
    return n * n;
}

double square(double d)
{
    return d * d;
}

int main()
{
    // printf("%p\n",&square); // error

    // printf("%p\n", static_cast<int(*)(int)>(&square));

    // auto p = &square;
    
    int(*f)(int) = &square;
    
}
