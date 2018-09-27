#include <iostream>
#include <windows.h> //windows 용....
using namespace std;

// 라이브러리 내부 클래스
class Thread
{
public:
    
    void run()
    {
        CreateThread(0, 0, threadMain, (void*)this, 0, 0);
    }
    
    // 1. 아래 함수는 반드시 static 함수이어야 한다.
    // 2. 아래 함수는 this가 없다. 그러므로 함수 인자로 
    //    this를 전달하는 기술.

    static DWORD __stdcall threadMain(void* p)
    {
        Thread* const self = static_cast<Thread*>(p);

        self->Main(); // Main(self)

        //Main();   // 가상 함수 호출
                  // this->Main() => Main(this)로 변해야 한다.
        return 0;
    }

    virtual void Main() // void Main(Thread* const this)
    {}
};

// 라이브러리 사용자 코드
class MyThread : public Thread
{
public:
    virtual void Main() { 
        cout<<"스레드 작업 "<<endl;
    }
};


int main()
{
    MyThread t;
    t.run();

    getchar();
}
