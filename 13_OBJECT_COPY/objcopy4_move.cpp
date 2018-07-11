/*
 *
 
 핵심 정리
 
 1. 소유권 이전(move 개념)
  - 객체가 사용하던 자원을 전달 하는 개념
  - 버퍼 복사 등의 일부 알고리즘에서 사용되면 성능 향상을 볼 수 있다.
  - C++11의 move 생성자 개념
 
 *
 */
#include <iostream>
#include <cstring>

class Person
{
public:
    Person(const char* n, int a) : age(a)
    {
        std::cout<<"Hello Constructors"<<std::endl;
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }
    
    ~Person() { 
        std::cout<<"Bye~ Destructors" << std::endl;
            delete[] name;
    }
   
    // 소유권 이전의 복사 생성자
    Person( Person& p) // const가 없다.
        : age(p.age), name(p.name)
    {
       // 원래 객체가 가진 name을 0으로
        p.name = 0;   
    }

private:
    char* name;
    int age;
};

int main()
{
    Person p1("KIM", 2);
    Person p2 = p1;    
       
}

