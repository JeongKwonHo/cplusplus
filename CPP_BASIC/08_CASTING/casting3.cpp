
//기존 캐스팅의 위험한 경우
int main()
{
    const int c = 10;
    
    //int* p = &c; //error 상수의 주소는 비상수를 가리키는 포인터에 담을 수 없다.

    int* p = (int*)&c; //가능은 하나 이러면 안된다.

    *p = 20;

}
