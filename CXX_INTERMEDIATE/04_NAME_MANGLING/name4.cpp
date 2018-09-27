/*
 *
 *  컴파일러가 함수를 찾는 순서
 *  1. exactly matching - foo(float)
 *  2. template - foo(T)
 *  3. promotion - foo(double) //data 손실이 없는것
 *  4. standard conversion - foo(int)
 *  5. user define conversion - foo(FLOAT)
 *  6. variadic argument - foo(...)
 *
 */

#include <iostream>
using namespace std;

struct FLOAT
{
    FLOAT(float) {} // 변환 생성자.
                    // float => FLOAT로 변환허용
};

//template <typename T>
//void foo(T)      { cout << "T"      << endl; }
//void foo(int)    { cout << "int"    << endl; }
//void foo(double) { cout << "double" << endl; }
//void foo(float) { cout << "float" << endl; }
void foo(FLOAT)  { cout << "FLOAT"  << endl; }
void foo(...)    { cout << "..."    << endl; }

int main()
{
    float f = 3.4f;
    foo(f);


}
