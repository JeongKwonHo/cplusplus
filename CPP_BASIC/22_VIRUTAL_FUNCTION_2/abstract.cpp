/*
 *
 
 1. 순수 가상 함수 (Pure Virtual Function)
  - 함수 구현부가 없고 선언부가 "=0"으로 끝나는 가상함수
 
 2. 추상 클래스 (Abstract Class)
  - 순수 가상 함수가 한 개 이상 있는 클래스

 3. 추상 클래스 특징
  - 객체를 만들 수 없다.
  - 포인터 타입은 만들 수 있다.
 
 4. 추상클래스로 부터 상속 받은 클래스가 순수 가상 함수의 구현부를 제공하지 않으면 역시 추상클래스

 5. 추상클래스의 의도
  - 파생 클래스에게 특정 함수를 반드시 만들라고 지시하는 것
  - 인터페이스

 *
 */

#include <iostream>

// 추상 클래스
class Shape
{
public:
    virtual void Draw() = 0;    //순수 가상 함수
};

// concret class (구체 클래스)
class Rect : public Shape
{
public:
    virtual void Draw() override
    {
        std::cout << "Draw Rect" << std::endl;
    }
};


int main()
{
    Rect r;
    //Shape s;  // error
    Shape* p; //ok
}
