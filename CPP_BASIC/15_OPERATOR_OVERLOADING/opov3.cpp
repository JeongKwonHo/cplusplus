
/*
 *
 
 1. 인자가 모두 primitive 타입인 경우는 오버로딩 할 수 없다.
 
 2. 다음의 연산자는 오버로딩 할 수 없다.
  - .* :: ?: sizeof typeid, static_Cast, dynamic_cast, reinterpret_cast, const_cast
  - 멤버 접근 연산자(.) : C++20부터 operator overloading 기능

 3. 멤버 함수와 멤버가 아닌 일반 함수로 제공 할 수 있다.

 4. 모두 제공할 경우 : 멤버함수가 우선적으로 사용

 5. 1번째 인자가 user define type이 아닌 경우는 일반 함수로만 만들 수 있다.

 6. 멤버 함수로만 오버로딩 가능한 연산자 : =, (), [], ->

 7. 새로운 연산자를 만들거나, 인자의 개수를 변경하거나, 연산자 우선순위를 변경할 수 없다.

 8. 디폴트 파라미터를 사용할 수 없다.
  

 반드시 알아두어야 하는 연산자들.
 1. << : cout의 원리
 2. ++ : STL 반복자를 만드는 원리. 구현과정에서 많은 것을 배울 수 있다.
 3. -> : 스마트 포인터
 4. () : 함수 객체
 5. [] : 객체를 배열처럼 보이게 한다.
 6. =  : 복사 생성자와 유사한 개념.(shallow copy / deep copy)
 *
 */

//인자가 모두 primitive 타입인 경우 오버로딩 불가.
/*
int operator+(int a, int b)
{
    return a - b;
}
*/


int main()
{
    Complex c1, c2;

    Complex c3 = c1 + c2;   //operator+(c1,c2)
    Complex c4 = c1 + 5;    //operator+(c1,int)
                            //c1.operator+(int)

    Complex c5 = 5 + c1;    //5.operator+(Complex)는 불가능, 즉 일반 함수로만 가능
                            //operator+(int, Complex)
}

