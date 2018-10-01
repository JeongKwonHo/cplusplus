/*
 *
 *  4. static_assert 활용
 *   - 함수 안에 만들 수도 있고, 함수 밖에 만들 수도 있다.
 *   - 함수 또는 클래스 템플릿을 만들 때 type_traits를 사용해서 
 *     T가 가져야 하는 조건을 static_assert로 조사하는 코드가 널리 사용됨.
 *   - static_assert를 잘 활용하면 가독성 높은 에러 메시지를 만들 수 있다.
 *
 */

#include <iostream>
#include <mutex>
using namespace std;

#pragma pack(1) //padding을 안함
struct PACKET
{
    char cmd;
    int data;

};
static_assert(sizeof(PACKET)==sizeof(char)+sizeof(int), "error, unexpected padding!");

template<typename T> void Swap(T& a, T& b)
{
    // T가 가져야하는 조건을 조사
    static_assert(is_copy_constructible<T>::value, "error. T is not copyable");

    T tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    mutex m1;
    mutex m2;

    Swap(m1, m2);

}
