
//ok
void f1(int a) {}
void f1(double a) {}

//ok
void f2(int a) {}
void f2(int a, int b){}

//error 모호한 표현
//인자의 개수가 달라도 디폴트 값이 있으면 주의 해야 한다.
void f3(int a) {}
void f3(int a, int b =10) {}

//error 리턴형이 아닌 parameter를 보고 판단.
//리턴 타입만 다른 경우 overloding 불가.
int f4(int a){ return 0;}
double f4(int a){ return 0;}


