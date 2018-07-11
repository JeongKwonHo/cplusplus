/*
 *
 
 핵심 개념
 1. 얕은 복사 (Shallow Copy)
  - 메모리 내용 자체를 복사 하지 않고 주소만을 복사하는 현상
  - 소멸자에서 메모리를 삭제하는 경우 문제 발생

 2. 객체를 복사하는 기술 (얕은 복사 해결책)
  - 깊은 복사 (Deep Copy)
  - 참조 계수 (Reference Counting)
  - 복사 금지 (Delete Copy Constructor)
  - 소유권 이전 (move) - "C++11 move 생성자"

 
 String
 1. 프로그램에서 필요한 타입을 먼저 설계한다.
 2. C++ 표준 라이브러리(STL)에는 이미 문자열 타입이 있다.
  std::string

 *
 */

#include <iostream>
#include <string>

class Person
{
    std::string name;
    int age;
public:
    Person(std::string n, int a)
        : name(n), age(a) 
    {}
    ~Person() {}

};

int main()
{
    Person p1("KIM",2);

    Person p2=p1;

    Person p3(p1);
}
