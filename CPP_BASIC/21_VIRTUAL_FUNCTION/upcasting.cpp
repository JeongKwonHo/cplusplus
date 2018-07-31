#include <string>

class Animal
{
public:
    int age;
    std::string name;
};

class Dog : public Animal
{
public:
    int color;
    int getColor() const
    {
        return color;
    }
};

int main()
{
    Dog dog;

    //int* p = &dog; //error reinterpret_pret
   
    Animal* p = &dog; //ok ..upcasting
    Animal& r = dog;

    p->age = 20;    //ok    
    p->name = "AA"; //ok

    //기반 클래스의 포인터로 파생 클래스를 가리킬 수는 있지만 파생클래스의 고유한 멤버에 접근 불가
//    p->color = 1;   // error
//    p->getColor();  // error
    
    //파생 클래스의 고유 멤버에 접근하려면 기반 클래스 포인터를 파생 클래스의 포인터 타입으로 캐스팅
    static_cast<Dog*>(p)->color = 10;
//    p->GetColor();

}
