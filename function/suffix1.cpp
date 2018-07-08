/*
 *
 
 핵심 정리
 1. C++11에서 추가된 문법
 2. 리턴 타입을 함수() 뒤에 적는 표기법
 3. suffix return 또는 trailing return이라고 한다.
 4. 원래의 리턴 값 위치(함수 이름 앞)에는 auto를 표기한다.
 5. 람다 표현식이나 함수 템플릿을 만들 때 많이 사용한다.

 *
 */

//int square(int a) 전통적인 표기법
auto square(int a) -> int //suffix return법
{
    return a * a;
}

int main()
{
    square(3);

}
