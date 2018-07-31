/*
 *
 
 핵심 개념

 1. 멤버 함수가 아니지만 private 멤버에 접근할 수 있다.

 2. 왜 멤버 함수로 하지 않는가?
  - 멤버 함수로 만들 수 없는 경우가 있다. (연산자 재정의...)
 
 3. getter()/setter() 함수를 사용하면 되지 않을까?
  - getter 함수 제공하는 경우 : 모든 함수가 멤버 데이터에 접근할 수 있다.
  - friend 함수 : 약속된 함수만 멤버 데이터에 접근 할 수 있다.

 *
 */

class Bike
{
private:
    int gear;
public:
    //int gearGear() { return gear; }
    void changeGear(int n)
    {
        gear = n;
    }

    //friend 함수 : 멤버 함수가 아니지만 private에 접근 가능.
    friend void fixBike();

    friend class AAA;  

};

void fixBike()
{
    Bike b;
    b.gear = 0;
}

int main()
{
}

