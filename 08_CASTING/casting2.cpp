
//기존 캐스팅의 위험한 경우 
//다른 타입(연관성이 없는)의 주소를 담는 포인터는 위험하다.
//*p = 3.4;를 할 경우 int 타입 n에 3.4를 담으려 하기에 문제가 있다.
int main()
{
    int n = 3;

    //double* p = &n; //error
    
    double* p = (double*)&n; // ok.. but warning case
    
    *p = 3.4; 
    


}
