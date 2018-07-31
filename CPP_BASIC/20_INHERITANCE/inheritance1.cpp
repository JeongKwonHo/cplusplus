/*
 *
 
 1. 상속 문법 사용하기
  - Student와 Professor의 공통의 특징을 모아서 Person 클래스를 설계
  - Student와 Professor 클래스를 만들 때 Person으로부터 상속을 받는다.
 
 2. 대부분의 객체지향 언어에 존재하는 개념
  - C++  :  class Student : public Person
  - Java :  class Student extends Person
  - C#   :  class Student : Person
 
 3. 상속의 장점
  - 코드 중복을 막을 수 있다.
  - 상속을 통해서 기존 클래스에 새로운 특징을 추가할 수 있다.
  - 다형성(polymorphism)을 활용한 객체 지향 디자인

 *
 */

#include <iostream>
#include <string>

// Base(기반), Super Class
class Person
{
    int age;
    std::string name;
};

// Derived(파생), Sub Class
class Student : public Person
{
    int id;
};

class Professor : public Person
{
    int major;
};

int main()
{

}
