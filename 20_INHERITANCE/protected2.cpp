#include <iostream>
#include <string>

class Person
{
protected:
    int age;
    std::string name;

public:
    int getAge() const {return age;}
};

class Student : public Person
{
    int id;
public:
    void print() const
    {
        std::cout << name << std::endl;
        std::cout << age << std::endl;
        std::cout << id << std::endl;
    }

};

int main()
{
    
}
