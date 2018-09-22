// this2.cpp - this와 멤버 함수 포인터


// 핵심 1. 일반 함수 포인터에 멤버함수의 주소를 담을 수 없다. 
// 핵심 2. 일반 함수 포인터에 static 멤버 함수의 주소는 담을 수 있다.
// 핵심 3. 멤버 함수 포인터 모양과 사용법.   .* or ->*  

class Dialog
{
public:
    void Close() {}
};

void foo() {}

int main()
{
    void(*f1)() = &foo;
//    void(*f2)() = &Dialog::Close; // error. this가 추가되는 함수
    
    void(Dialog::*f3)() = &Dialog::Close;   //ok.. 멤버 함수 포인터
    

    //f3(); // error 객체(this)가 없다.
    
    Dialog dlg;
    //dlg.f3();   //dlg.Close()의 의미.. 
                //Dialog클래스 내에 f3 멤버가 없으므로 이것도 error
    
    //dlg.*f3();  //".*" : pointer to member operator
                //연산자 우선순위 때문에 괄호가 더 빨라서 error

    (dlg.*f3)();    //ok... dlg.Close();와 동일한 일
}
