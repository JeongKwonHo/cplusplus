/*
 *
 
 1. static 멤버 함수 안에서는 일반 멤버 data에 접근 할 수 없다.
 2. static 멤버 함수 안에서는 static 멤버 데이터에는 접근 할 수 있다.
 3. 멤버 함수를 선언과 구현으로 분리할 때에는 선언에만 static을 표기한다.
 
 *
 */
class Test
{
    int data1;
    static int data2;
public:
    void f1()   // 호출하려면 반드시 객체가 필요
    {
        data1 = 0;  // 1
        data2 = 0;  // 2
    }

    static void f2() // 객체 없이 호출.
    {
        //data1 = 0;  // 3. error:w
        data2 = 0;  // 4
    }
    
    static void f3(); // static 멤버 함수 선언

};

int Test::data2 = 0;

void Test::f3() //static 멤버 함수 정의. static 표기x
{

}
int main()
{
    Test::f2(); // ok

}
