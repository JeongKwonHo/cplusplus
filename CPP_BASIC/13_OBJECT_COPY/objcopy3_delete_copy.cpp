/*
 *
 
 핵심 정리
 
 1. 복사 금지 기술
  - 복사 생성자를 삭제(delete)한다.
  - 오직 하나만 존재하는 객체(싱글톤)
  - C++11 표준의 unique_ptr
  - mutex 등의 동기화 객체 등
 
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
    
    // 참조 계수 삭제 
    ~Person() { 
        std::cout<<"Bye~ Destructors" << std::endl;
            delete[] name;
    }
   
    // 복사 생성자 삭제..
    Person(const Person& p) = delete;

private:
    char* name;
    int age;
};

int main()
{
    Person p1("KIM", 2);
    Person p2 = p1;     // 복사 생성자 호출할때 컴파일 에러를 발생해 보자.
       
}

