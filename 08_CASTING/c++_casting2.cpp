
int main()
{
    const int c = 10;

    // C style Casting
    //double* p = (double*)&c; // ok 

    double* p = static_cast<double*>(&c); // error

    //double* p = reinterpret_cast<double*>(&c); // error 상수성을 제거할 수 없다.

    //double* p = const_cast<double*>(&c); // error 상수성은 제거 할 수 있지만, 타입이 다르다. 

//    double* p = reinterpret_cast<double*>(const_cast<int*>(&c)); // 두 개를 동시에 쓰면 가능.
}
