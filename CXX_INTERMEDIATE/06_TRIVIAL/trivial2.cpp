#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

template <typename T>
typename enable_if<is_trivially_copyable<T>::value>::type  copy_type(T* dst, T* src, int sz)
{
    cout << "복사 생성자가 trivial 할때 " << endl;
    memcpy(dst, src, sizeof(T)*sz);
}

template <typename T>
typename enable_if<!is_trivially_copyable<T>::value>::type
copy_type(T* dst, T* src, int sz)
{
    cout << "복사 생성자가 trivial 하지 않을때" << endl;
    while(sz--){
        new(dst) T(*src); //복사 생성자 호출
        ++dst, ++src;
    }

}
struct People
{
    People() {}
    People(const People&) {} // 하는 일이 있다.
};

int main()
{
    // char s1[10] = "hello";
    // char s2[10] = {0};

    People s1[10];
    People s2[10];
    //strcpy(s2, s1);

    copy_type(s1, s2, 10);  //모든 타입의 배열을 복사하는 함수

    cout << s1 << endl;
    cout << s2 << endl;

}
