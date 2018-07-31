/*
 *

 1. 다형성 (polymorphism)
  - 동일한 코드 표현(함수 호출)이 상황에 따라 다르게 동작하는 것
 
 2. OCP (OpenClosePrinciple)
  - 기능 확장에는 열려있고(Opne)
  - 코드 수정에는 닫혀 있어야(Close)
  - 한다는 이론(Principle)
  - 다형성은 OCP를 만족할 수 있는 좋은 코드이다.
 *
 */

#include <iostream>
#include <vector>

class Shape
{
public:
    virtual void Draw(){}
};

class Rect : public Shape
{
public:
    virtual void Draw() override
    {
        std::cout << "Rect Draw" << std::endl;
    }
};

class Circle : public Shape
{
public:
    virtual void Draw() override
    {
        std::cout << "Circle Draw" << std::endl;
    }
};

int main()
{
    std::vector<Shape*> v1;

    while(1)
    {
        int n;
        std::cin >> n;

        if( n == 1 ) v1.push_back(new Rect);
        else if ( n == 2 ) v1.push_back(new Circle);
        else if ( n == 9 )
        {
            for( int i =0; i < v1.size();i++)
                v1[i]->Draw(); 
        }
    }


}
