/*
 *
 
 1. 전위형과 후위형을 구별해야 한다.
  - 후위형은 인자로 int를 가진다. (사용하지 않지만 전위형과 구별하기 위해)

 2. 전위형은 자신을 참조 리턴한다.

 3. 후위형의 구현은 전위형의 구현을 사용한다.

 *
 */

#include <iostream>

class Integer
{
    int value;
public:
    Integer(int n = 0) : value{n} {}

    void print() const
    {
        std::cout<<value <<std::endl;
    }
    
    // 전위형
    Integer& operator++()
    {
        ++value;
        return *this;
    }
    
    //후위형
    Integer operator++(int )
    {
        //지역변수를 참조 리턴 할 수 없으므로 후위형은 값 리턴을 해야한다.
        Integer temp = *this;
        //++value;
        ++(*this);  //전위형을 다시 사용하여 구현
        return temp;
    }
};

int main()
{
    
    Integer n1 = 3;
    
    ++++n1; //++(++n1) => (n1.operator++()).operator++()
    Integer n2 = ++n1;  //n1.operator++()
    Integer n3 = n1++;  //n1.operator++(int) 전위형과 구별하기 위해 int 인자

    n1.print();
    n2.print();
    n3.print();

}
