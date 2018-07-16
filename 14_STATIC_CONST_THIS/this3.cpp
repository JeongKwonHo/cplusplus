/*
 *
 
 1. static 멤버 함수 안에서는 this를 사용할 수 없다.
 
 2. static 멤버 함수 안에서는 this를 사용할 수 없기 때문에 멤버 데이터에도 접근 할 수 없다.
 *
 */

class Test
{
    int data;
public:
    static void foo()
    {
        std::cout<<this<<std::endl; //static 멤버 함수 안에서는 this를 사용 할 수 없다.

        data = 0;  // this->data = 0; 이렇게 할 수 없다.
        //static 멤버 함수 안 에서는 this가 없으므로 멤버 데이터에도 접근 할 수 없다.
        
    }
};

int main()
{
    Test::foo();    //객체 생성을 하지 않았으므로 전달할 객체가 없다.
    //즉 error
}
