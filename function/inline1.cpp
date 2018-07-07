/*
 *
 
 핵심 정리
 1. 함수 호출시 실제 함수로 이동하지 않고 함수의 기계어 코드를 치환한다.
 - 장점 : 빠르다.
 - 단점 : 치환하는 함수의 크기가 큰 경우 목적 코드가 커질 수 있다.

 *
 */

int Add1(int a, int b)
{
    return a + b;
}

inline int Add2(int a, int b)
{
    return a + b;
}

int main()
{
    int a {1};
    int b {2};

    int n1 = Add1(a, b);
    int n2 = Add2(a, b);
    int n3 = Add2(a, b);

}
