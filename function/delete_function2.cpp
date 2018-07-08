
template<typename T>
T square(T a)
{
    return a * a;
}

double square(double) = delete; //해당 함수는 사용하지 않겠다고 명시.

int main()
{
    square(3.3);
}
