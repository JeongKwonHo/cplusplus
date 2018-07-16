#include <iostream>
#include <cstring>

class String
{
    char* buff;
    int size;
public:
    String(const char* s)
    {
        size = strlen(s);
        
        buff = new char[size+1];
        strcpy(buff, s);

    }
    
    ~String() { delete[] buff;}

    //깊은 복사로 구현한 복사 생성자.
    String(const String& s) : size(s.size)
    {
        buff = new char[size+1];
        strcpy(buff, s.buff);

    }
    friend std::ostream& operator<<(std::ostream& os, const String& s);

};

std::ostream& operator<<(std::ostream& os, const String& s)
{
    os << s.buff;
    return os;
}

int main()
{
    String s1 = "hello";
    //String s1("hello");

    std::cout<<s1<<std::endl;
    String s2 = s1; //복사 생성자
    std::cout<<s2<<std::endl;

/*
    String s3 = "world";
    s2 = s3;
*/
}

