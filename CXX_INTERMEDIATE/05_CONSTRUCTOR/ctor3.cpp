/*
 *
 *  Protected constructor
 *  자신은 객체를 만들 수 없지만(추상적인 존재), 파생클래스의 객체는 만들 수 있게 한다.
 *  ex) 동물은 객체 생성 불가능, 개는 가능
 *
 */

#include <iostream>
using namespace std;

class Animal
{
protected:
    Animal() {

    }
};

class Dog : public Animal
{
public:
    Dog() : Animal() {

    }

};

int main()
{
//    Animal a;   // error
    Dog d;      // ok
}
