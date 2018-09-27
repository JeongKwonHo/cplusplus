/*
 *
 *  name mangling
 *  1. 컴파일러가 컴파일 시간에 심볼의 이름을 변경하는 현상
 *  2. 함수 오버로딩, namespace, template 등의 문법
 *
 */

int square(int n)   //squarei()
{
    return n * n;
}

double square(double d) //sqaured()
{
    return d * d;
}

int main()
{
    square(3);      //squarei(3)
    square(3.3);    //sqaured(3.3)
}
