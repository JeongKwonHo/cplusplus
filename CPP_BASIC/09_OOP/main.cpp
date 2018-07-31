
#include <iostream>
#include "Stack.h"

int main()
{
    Stack s1(20);
    s1.push(30);
    std::cout<< s1.pop() << std::endl;
}
