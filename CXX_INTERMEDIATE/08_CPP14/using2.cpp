//Using 활용성


// 1. type alias
using DWORD = int;  //type에 대한 별칭


// 2. template alias
template <typename T, typename U>
using Duo = pair<T, U>;   //stl template pair

Duo<int, double> d1;

tempalte <typename T>
using Ptr = T*;
Ptr<int> p2;    // int*


// 3. 템플릿의 인자를 고정하는 방식 
template<typename T>
using Point = pair<T, int>;

Point<int> p;   //pair<int, int>


// 4. 복잡한 표현을 단순하게
template<typename T>
using remove_pointer_t = typename remove_pointer<T>::type;

template <typename T>
void foo(T a)
{
    // T에서 포인터를 제거한 타입을 구하고 싶다
    //typename remove_pointer<T>::type t;
    remove_pointer_t<T> t; // C++14 style
}
