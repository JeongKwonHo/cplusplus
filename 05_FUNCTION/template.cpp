/*
 *
 
 핵심 정리
 1. 실제 함수가 아닌 함수를 만들어 내는 틀(template)
 2. 사용자가 템플릿을 사용하는 코드를 보고 컴파일러가 필요한 타입의 함수를 생성한다.
 3. 템플릿 인자 표기는 typename 또는 class를 사용한다.
 4. 함수 뿐 아니라 구조체(또는 클래스)도 템플릿으로 만들 수 있다.
 5. 잘못 사용시 코드 메모리가 커질 수 있다. (Code Bloat 현상)

 *
 */

// 함수를 만들어 내는 틀
template <typename T> 
//template <class T> 도 가능
T sqaure(T a)
{
    return a * a;
}

int main()
{
    square<int>(3);         //int square(int) 함수 생성
    square<double>(3.3);    //double square(double)
    
    //type 생략 가능, 컴파일러가 추론
    square(3);  
    sqaure(3.3);
}

