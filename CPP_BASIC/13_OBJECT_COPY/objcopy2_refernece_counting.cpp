/*
 *
 
 핵심 정리
 
 1.Refenece Counting
 
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
        
        ref = new int;
        *ref = 1;
    }
    
    //참조 계수 삭제 
    ~Person() { 
        std::cout<<"Bye~ Destructors" << std::endl;
        if( --(*ref) ==0)
        {
            delete[] name;
            delete ref;
        }
    }
    
    // 모든 멤버를 얕은 복사 한다.
    Person(const Person& p) : name(p.name), age(p.age), ref(p.ref)
    {
        std::cout<<"This is copy constructors"<<std::endl;
        
        ++(*ref); // 참조 계수 증가

        std::cout<<*ref<<std::endl;
    }
private:
    char* name;
    int age;
    int* ref;    //참조 계수 메모리의 주소
};

int main()
{
    Person p1("KIM", 2);
    Person p2 = p1;     // 복사 생성자
       
    Person p3 = p1;
}

