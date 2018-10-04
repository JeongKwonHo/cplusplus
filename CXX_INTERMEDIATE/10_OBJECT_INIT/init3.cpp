/*
 *
    일관된 초기화 (Uniform initialize, brace init)
     - 객체의 형태에 상관없이 중괄호(brace, {})를 사용해서 초기화 하는 것 
     - 데이터 손실이 발생시에는 error 발생 - prevent narrow
 *
 */

struct Point
{
    int x,y;
};

class Complex
{
    int re, im;
public:
    Complex(int r, int i) : re(r), im(i) {}
};

int main()
{
//    int n = 0;
//    int x[2] = {1,2};
//    Point p = {1,2};
//    Complex c(1,2);
    
    
    int n { 0 };
    int x[2] {1,2};
    Point p  {1,2};
    Complex c{1,2};


    int n2 = 3.4;   // ok
    int n3 = {3.4}; // error

    char c1{300};   // error
    char c2{100};   // ok 
}
    
