/*
 *
 
 1. 객체를 하나도 만들지 않아도 메모리에 존재한다. (전역변수와 유사)
 2. 객체를 만들 때, static 멤버는 객체의 메모리에 포함되지 않는다.
 3. sizeof(객체) : static 멤버를 제외한 객체의 크기가 나온다.
 4. "클래스 이름::변수이름"으로 사용하므로 각 클래스별로 동일 이름을 사용할 수 있다.
  - Car::cnt, Bike::cnt 

 static 멤버 변수의 접근 방법
 - 클래스이름::멤버이름 => 권장
 - 객체이름.멤버이름 => static멤버 인지 일반 멤버 인지 구별이 어렵다.
 *
 */
#include <iostream>

class Car
{
    int speed;

public:
    static int cnt; // 선언 (declaration)

    Car() { ++cnt; }
    ~Car() { --cnt; }
};

int Car::cnt = 0; //정의 (definition)

int main()
{
    // 1. 객체없어도 메모리에 존재.
    std::cout << Car::cnt << std::endl;

    Car c1, c2;
    
    int n = sizeof(c1); //static 멤버를 제외한 객체의 크기가 나온다.
    
    std::cout << Car::cnt << std::endl; //첫번째 방법을 추천
    std::cout << c1.cnt   << std::endl;
    std::cout << n <<std::endl;
    
}
