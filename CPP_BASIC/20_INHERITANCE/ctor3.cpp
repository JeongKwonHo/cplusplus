/*
 *
 
 1. protected 생성자
  - 자신의 객체는 만들 수 없지만 파생 클래스의 객체는 생성할 수 있다.
  - Animal은 추상적(Abstract) 개념이므로 객체가 존재 할 수 없다.
  - Dog는 구체적(Concrete) 존재이므로 객체가 존재할 수 있다.
  
 *
 */

class Animal
{
protected:
    Animal() {}
};

class Dog : public Animal
{
public:
};

int main()
{
    Animal a;  // error
    Dog d;     // ok dog클래스 생성자에서 animal의 생성자를 부르는 것이기 때문에 
}
