

//
// main에서 add(1, 2.2)를 호출하면
// typename T 하나의 인자로는 int와 double 중 어느것을 return 할 것인지 모호하다.
// 이를 해결하기 위해 decltype(a + b) Add(T a, U b)를 해주면 a와 b를 정의하기 전에 return에서 사용하기에 컴파일 에러가 난다.
// 이러한 문제를 해결하기 위해 즉, 템플릿과 람다처럼 return에서 확정된 data type이 아닌 경우에 suffix return을 사용한다.
// 사용 방법은 auto FunctionName( parameter ..) -> decltype (return type operation) 

template <typename T, typename U>
//decltype(a + b) Add(T a, U b) 

auto Add(T a, U b) -> decltype(a + b)
{
    return a + b;
}

 
int main()
{
    Add(1, 2.2); //??
}
