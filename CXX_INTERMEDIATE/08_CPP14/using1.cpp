
/*
 *
 *  using vs typedef
 * 
 * typedef : 타입에 대해서만 별칭(alias)를 만들 수 있다.
 *  using   : 타입 뿐 아니라 템플릿에 대한 별칭도 만들 수 있다.
 * 
 *
 *  using 문법 기본 모양
 *
 *  using id = type-id;
 *  template<template-parameter-list>
 *  using id = type-id;
 *
 */

template<typename T>
struct Point
{
    T x,y;
};

//old version
//typedef int DWORD;
//typedef void(*FP)(int);
//typedef Point Pixel;    // ???  // Point는 일반 타입이 아닌 template이므로 error


// new version
using DWORD = int;
using FP = void(*)(int);

template<typename T>
using Pixel = Point<T>; // ok

int main()
{
    DWORD n;    // int n
    FP    p;    // void(*f)(int)

    Point<int> p1;
    Pixel<double> p2;
}
