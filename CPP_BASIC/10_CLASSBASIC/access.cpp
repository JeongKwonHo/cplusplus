/*
 *
 
 핵심 개념
 
 1. 멤버 데이터를 외부에서 직접 변경하면 잘못된 값을 가지게 될 수 있다.
    멤버 함수를 통해서만 변경할 수 있게 하는 것이 좋다.
  - 멤버 함수의 경우 인자의 유효성 여부를 조사할 수 있다.
 
 2. 접근 지정자
  - private : 멤버 함수에서만 접근 할 수 있다.
  - public : 멤버 함수가 아닌 함수에서도 접근할 수 있다.

 3. struct vs class
  - struct : 접근 지정자 생략시 디폴트가 public
  - class : 접근 지정자 생략시 디폴트가 private
 *
 */

//struct Bike
class Bike
{
private:
    int gear;

public:
    void changeGear(int n)
    {
        if( n > 0)
           gear = n;
    }

};

int main()
{
    Bike b;
   
    // b.gear = -10; //아무나 바꿀 수 있어서 위험
    b.changeGear(-10);
}

