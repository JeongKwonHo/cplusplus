/*
 *
 
 핵심 정리
 
 1. static 멤버 변수 모양
  - 클래스 안에 선언(declaration)  => static 키워드 사용
  - 클래스 외부에 정의(definition) => static 키워드 사용 안함
 
 2. static 멤버 변수
  - 모든 객체가 공유한다. (전역 변수와 유사)
  - 접근 지정자를 사용해서 보호할 수 있다.
 *
 */
#include <iostream>

class Car
{
    int speed;
public:
    static int cnt; //선언(declaration)

    Car()
    { 
        ++cnt; 
        std::cout<< cnt<<std::endl;
    }
    ~Car() { --cnt; }
};

int Car::cnt = 0;   // 정의 (definition)

int main()
{
    Car c1, c2;
}
