// Stack.cpp
#include "Stack.h"

Stack::Stack(int sz)
{
    buf = new int[sz];
    idx = 0;
}

Stack::~Stack()
{
    delete[] buf;
}

void Stack::push(int n)
{
    buf[idx++] = n;
}

int Stack::pop()
{
    return buf[--idx];
}

