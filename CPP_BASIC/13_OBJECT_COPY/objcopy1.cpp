/*
 *
 
 핵심 정리

 1. 얕은 복사 (Shallow Copy)
  - 동적 할당된 메모리가 있을 때 메모리 자체를 복사하지 않고 메모리 주소만 복사하는 현상
  - 클래스 안에 포인터 멤버가 있고 동적메모리 할당된 코드를 사용한다면 반드시 사용자가 복사 생성자를 만들어서 얕은 복사 문제를 해결해야 한다.

 2. 깊은 복사 (Deep Copy)
  - 주소가 아닌 메모리 내용 자체를 복사하는 것.

 
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
    
    // 1. 포인터가 아닌 멤버는 그냥 복사
    Person(const Person& p) : age(p.age)
    {
        std::cout<<"This is copy constructors"<<std::endl;

        // 2. 메모리 할당
        name = new char[strlen(p.name) + 1];
        
        // 3. 메모리 내용을 복사
        strcpy(name, p.name);
    }
private:
    char* name;
    int age;
};

int main()
{
    Person p1("KIM", 2);
    Person p2 = p1; // runtime error
                    // 복사 생성자

}

