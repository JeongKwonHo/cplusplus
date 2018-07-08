/*
 *
 핵심 개념
 1. 프로그램에서 필요한 타입을 먼저 설계한다.
 2. C언어의 구조체를 사용하면 새로운 타입을 만들 수 있다.
 
 C구조체   : 데이터만 포함할 수 있다. 
 C++구조체 : 데이터 뿐 아니라 함수도 포함 할 수 있다.

 *
 */

// 복소수 2개를 더하는 함수를 만들고 싶다.

void Add(int xr, int xi, int yr, int yi, //in parameter
        int* sr, int* si)   //out parameter
{
    *sr = xr + yr;
    *si = xi + yi;

}

int main()
{
    int ar = 1, ai = 1; // 1+ 1i
    int br = 2, bi = 2; // 2+ 2i

    Add(ar, ai, br, bi, &sr, &si);

}
 
